// bai8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	char str[100], word[1];
	int i = 0, j;
	printf("Nhap:");
	gets(str);
	j = strlen(str) - 1;
	while (i <= j) {
		word[0] = str[i];
		str[i] = str[j];
		str[j] = word[0];
		i++;
		j--;
	}
	printf("\n%s", str);
	getchar();
	return 0;
}

