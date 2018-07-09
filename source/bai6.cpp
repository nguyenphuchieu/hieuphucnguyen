// bai6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	int i, j, answer = 1, inter, k;
	char str[100];
	char ch, ck;
	do {
		printf("Nhap:");
		gets(str);
		for (i = 0; i<strlen(str); i++) {
			if (str[0] == ' ') {
				for (j = 0; j<strlen(str); j++) {
					str[j] = str[j + 1];
				}
				str[j - 1] = ' ';
			}
			if (str[i] == ' ') {
				if (str[i - 1] == ' ')
				{
					if (str[i + 1] == ' ') {
						for (j = i + 1; j<strlen(str); j++)
							if (str[j] != ' ') break;
						int jnter;
						inter = i;
						for (; j<strlen(str); j++) {
							str[inter] = str[j];
							inter++;
						}
						//if(str[inter]==' ') str[inter]='.';
						for (jnter = inter; jnter<strlen(str); jnter++)
							str[jnter] = ' ';
					}
					else {
						for (j = i; j<strlen(str); j++) {
							str[j] = str[j + 1];
						}
						str[j - 1] = ' ';
						j = 0;
					}
				}
			}
			if ((str[i] == '.') | (str[i] == ',')) {
				if ((str[i + 1] == '.') || (str[i + 1] == ',')) {
					for (k = i; k<strlen(str); k++) {
						if ((str[k] != '.') && (str[k] != ',')) break;
					}
					inter = i + 1;
					for (; k<strlen(str); k++) {
						str[inter] = str[k];
						inter++;
					}
					for (; inter<strlen(str); inter++)
						str[inter] = ' ';
				}
				if (str[i - 1] == ' ') {
					str[i - 1] = str[i];
					str[i] = ' ';
				}
				if (str[i + 1] != ' ') {
					for (j = strlen(str); j >= i + 1; j--) {
						str[j + 1] = str[j];
					}
					str[i + 1] = ' ';
				}
			}
		}
		for (i = 0; i<strlen(str); i++) {
			if (i == 0) {
				if (str[i] >= 97 && str[i] <= 122) str[i] -= 32;
			}
			if (str[i] == ' ') {
				if (str[i + 1] == ' ') {
					str[i] = '.';
					break;
				}
				if (str[i - 1] == '.') {
					if (str[i + 1] >= 97 && str[i + 1] <= 122) str[i + 1] -= 32;
				}
				if (str[i - 1] == ',') {
					if (str[i + 1] >= 65 && str[i + 1] <= 90) str[i + 1] += 32;
				}
			}
		}
		printf("\n%s\n", str);
		getchar();
		printf("\nNhap nua khong(1-co/0-khong):");
		scanf("%d", &answer);
		fflush(stdin);
	} while (answer != 0);
	return 0;
}

