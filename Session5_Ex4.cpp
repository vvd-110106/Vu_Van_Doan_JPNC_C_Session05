#include<stdio.h>

int main(){
	int number;
	do{
		printf("Ban hay nhap vao mot so tu 1 den 10: ");
		scanf("%d", &number);
	}while(number<1 || number >10);
	printf("Bang cuu chuong cua %d la : \n ",number);
	for(int i=1; i<=10; i++) {
		printf("%d *  %d = %d \n", number, i, number*i);
	}
	
	return 0;
}
