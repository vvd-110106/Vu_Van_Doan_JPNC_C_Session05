#include<stdio.h>

int main(){
	for(int a=1; a<=10; a++){
		printf("Bang cuu chuong cua %d do la: \n", a);
		for(int b=0; b<=10; b++){
			printf("%d * %d = %d \n", a, b, a * b);
		}
	}
	return 0;
}
