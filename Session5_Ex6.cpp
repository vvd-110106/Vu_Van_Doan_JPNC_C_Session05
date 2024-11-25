#include<stdio.h>

int main(){
	int total;
	float number1, number2;
	while(10) {
        
        printf("Nhap so thu nhat: ");
        scanf("%f", &number1);
        printf("Nhap so thu hai: ");
        scanf("%f", &number2);

        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban do la: ");
        scanf("%d", &total);

        switch(total) {
            case 1:
                printf("Tong 2 so do la: %.f\n", number1 + number2);
                break;
            case 2:
                printf("Hieu 2 sodo la: %.f\n", number1 - number2);
                break;
            case 3:
                printf("Tich 2 so do la: %.f\n", number1 * number2);
                break;
            case 4:
                if (number2 != 0) {
                    printf("Thuong 2 so do la: %.f\n", number1 / number2);
                } else {
                    printf("Loi: Khong the chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    }

    return 0;
}
