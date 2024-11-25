#include<stdio.h>

int main(){
	int sum=0, i, n;
	printf("Nhap vao mot so nguyen duong : ");
	scanf("%d", &n);
	if(n<0){
		printf("Ban hay nhap lai vao mot so nguyen duong: ");
		return 1;
    }
    for(i=0; i<=n; i++) {
    	sum+=i;
	}
	printf("Tong la: %d", sum);
	
	return 0;
}


