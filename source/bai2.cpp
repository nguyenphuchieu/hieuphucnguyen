// bai2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[30], c;
	int n, count1 = 0, count2 = 0;
	printf("Nhap chuoi:");
	gets(a);
	for (int i = 0; i<strlen(a); i++) {
		if (a[i] == ' ') continue;
		n = (int)a[i];
		n -= 32;
		if ((n >= 65) && (n <= 90)) count1++;
		else count2++;
	}
	printf("\nSo chu in thuong:%d", count1);
	printf("\nSo chu in hoa:%d", count2);
	getchar();
	getchar();
	getchar();
	return 0;
}
