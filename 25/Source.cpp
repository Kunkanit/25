#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Area getArea();
void print(struct Area);

int area;

struct Area {
	int Length;
	int Width;
	
};
int main() {
	int i = 0, n = 2;
	int k,j;
	int c = true;
	struct Area area[5];


	printf("----Area of Rectangle---- \n");
	do {
		printf("Do you want to use this \npress '1'= yes\npress '0'= No\n::  ");
		scanf("%d", &j);

		if (j == 1) {

			c = true;

			do {
				printf("How many area do you want to find (1-5) = ");
				scanf("%d", &k);
			} while (k <= 0 || k > 5);

			n = k;

			printf("Adding \n");
			for (i = 0; i < n; i++) {

				area[i] = getArea();

			}
			printf("\nList of area\n");
			for (i = 0; i < n; i++) {
				print(area[i]);

			}
			printf("----successful----\n");

		}else if (j == 0) {
	            
			c = false;
			printf("See U....");
		}
		else {
			 printf("You enter the wrong number");
		
		}
	} while (false);
	
}

struct Area getArea() {
	struct Area areaS;

	printf("Length : ");
	scanf("%d", &areaS.Length);

	printf("Width : ");
	scanf("%d", &areaS.Width);
	
	return areaS;

}
void print(struct Area find_Ractangle) {


	printf("%d *  %d  = %d \n", find_Ractangle.Length, find_Ractangle.Width,area= find_Ractangle.Length* find_Ractangle.Width);
	
}