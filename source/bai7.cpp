// bai7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
int so_sanh(int a, int b) {
	return a - b;
}
int UCLN(int a, int b) {
	int i;
	if (so_sanh(a, b) >= 0) {
		for (i = b; i>0; i--) {
			if (a%i == 0 && b%i == 0) return i;
		}
	}
	else
	{
		for (i = a; i>0; i--) {
			if (a%i == 0 && b%i == 0) return i;
		}
	}
	return 0;
}
int BCNN(int a, int b) {
	int i;
	if (so_sanh(a, b) >= 0) {
		for (i = a;; i++) {
			if (i%a == 0 && i%b == 0) return i;
		}
	}
	else {
		for (i = b;; i++) {
			if (i%a == 0 && i%b == 0) return i;
		}
	}
}
int main() {
	int a, b, c = 1;
	do {
		printf("Nhap a=");
		scanf("%d", &a);
		printf("\nNhap b=");
		scanf("%d", &b);
		if (UCLN(a, b) != 0)
			printf("\nUoc chung lon nhat la %d", UCLN(a, b));
		else
			printf("\nKhong co uoc chung lon nhat!");
		printf("\nBoi chung nho nhat la:%d", BCNN(a, b));
		printf("\nBan muon nhap tiep khong(1-co/0-khong):");
		scanf("%d", &c);
		fflush(stdin);
	} while (c != 0);
	return 0;
}

