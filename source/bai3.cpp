// bai3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
int main()
{
	float tong = 10000, km, km2, change;
	printf("Nhap quang duong di:");
	scanf("%f", &km);
	int i = 1000;
	while (i <= km)
	{
		if (i <= 30000)
		{
			i += 200;
			if (i>km) {
				i -= 200;
				km2 = km - ((float)i);
				change = km2*7.5;
				tong += change;
				break;
			}
			if (i % 200 == 0) tong += 1500;
		}
		if (i>30000) {
			i += 200;
			if (i>km) {
				i -= 200;
				km2 = km - ((float)i);
				change = km2 * 8;
				tong += change;
				break;
			}
			if (i % 200 == 0) tong += 1600;
		}
	}
	printf("\nSo tien phai tra: %0.0f", tong);
	getchar();
	getchar();
	getchar();

}


