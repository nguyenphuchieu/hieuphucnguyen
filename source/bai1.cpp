// bai1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, a[3];
	printf("Nhap so n=");
	scanf("%d", &n);
	for (int i = 0; i<3; i++) {
		a[i] = n % 10;
		n = n / 10;
	}
	for (int i = 0; i<3; i++)
		for (int j = i + 1; j<3; j++) {
			if (a[i]<a[j]) {
				int k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	printf("%d %d %d", a[0], a[1], a[2]);
	getchar();
	getchar();
	getchar();
	return 0;
}

