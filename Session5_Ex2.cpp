#include<stdio.h>

int  main(){
	// khai bao bien 
	int number = 100, socuanguoidung;
	// kiem tra xem co trung voi number hay khong 
	do{
		printf("Ban hay nhap vao mot so: ");
	    scanf("%d", &socuanguoidung);
	}while(number != socuanguoidung);
	printf("So cua ban nhap da dung voi so number do la: %d", number);
	return 0;
}
