#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float a = 0, c = 0;
	char b[10];
	printf("Enter Salary : ");
	scanf("%f", &a);
	printf("Has Late (Y/N) :");
	scanf("%s", &b);
	if (b[0] == 'N') {
		a += 1000;
	}
	printf("Has OT Hour (Y/N) :");
	scanf("%s", &b);
	if ((b[0] == 'Y')) {
		printf("Enter OT Hour:");
		scanf("%f", &c);
		a += (c * 200);
	}
	printf("Total Salary : %.2f", a);

}