// bai5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	int ngay, thang, check, a[7] = { 1,3,5,7,8,10,12 }, b[4] = { 4,6,9,11 };
	long nam;
	do {
		printf("Nhap ngay:");
		scanf("%d", &ngay);
		printf("\nNhap thang:");
		scanf("%d", &thang);
		printf("\nNhap nam:");
		scanf("%ld", &nam);
		check = 0;
		if (ngay == 0 || thang == 0 || nam == 0) {
			check = 1;
		}
		for (int i = 0; i<7; i++) {
			if (a[i] == thang) {
				if (ngay >= 32) {
					check = 1;
					break;
				}
			}
		}
		for (int i = 0; i<4; i++) {
			if (b[i] == thang) {
				if (ngay>30)
				{
					check = 1;
					break;
				}
			}
		}
		if (thang == 2) {
			if ((nam % 400 == 0)) {
				if (ngay>29) check = 1;
			}
			else if ((nam % 4 == 0) && (nam % 100 != 0))
			{
				if (ngay>29) check = 1;
			}
			else {
				if (ngay>28) check = 1;
			}
		}
		if (check != 0) printf("\nKhong hop le\n");
	} while (check != 0);
	printf("\nHop le");
	if ((nam % 400 == 0)) printf("\n%d la nam nhuan", nam);
	else if ((nam % 4 == 0) && (nam % 100 != 0)) printf("\n%d la nam nhuan", nam);
	else printf("\n%d khong la nam nhuan", nam);
	getchar();
	return 0;
}

