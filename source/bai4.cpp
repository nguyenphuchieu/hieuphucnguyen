// bai4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
int main() {
	int so_sao, so_cham, chieu_cao, cho_trong, count, j, so_sao_con_lai;
	printf("Nhap so chieu cao h=");
	scanf("%d", &chieu_cao);
	cho_trong = 2 * chieu_cao - 1;
	so_sao = 1;
	so_cham = cho_trong - so_sao;
	for (int i = 1; i <= chieu_cao; i++) {
		j = 1;
		count = so_cham / 2;
		so_sao_con_lai = so_sao;
		while (j <= cho_trong) {
			while (count>0) {
				printf(" \t");
				count--;
				j++;
			}
			while (so_sao_con_lai>0) {
				printf("*\t");
				so_sao_con_lai--;
				j++;
			}
			if (so_sao_con_lai <= 0) {
				printf(" \t");
				j++;
			}
		}
		printf("\n");
		so_sao += 2;
		so_cham = cho_trong - so_sao;
	}
	getchar();
	getchar();
	getchar();
	return 0;
}


