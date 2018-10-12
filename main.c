#include <stdio.h>
#include <stdlib.h>
#include <bootstrap.h>

//Hàm kiểm tra độ dài 3 cạnh của tam giác (tính hợp lệnh của dữ liệu)
bool validateData(int a, int b, int c){
    if (a <=0 || b <=0 || c <= 0){
        printf ("Do dai mot canh cua tam giac phai lon hon 0");
        return false;
    } else if (a + b <= c || a + c <= b || b + c <= a){
        printf("Tong do dai hai canh cua mot tam giac phai lon hon canh con lai.");
        return false;
    }
    return true;
}

//Hàm tính nửa chu vi tam giác
float calculatehaftofP(int a, int b, int c){
    return (float)(a + b + c) / 2;
}

int main() {
    int a, b, c;
    printf("Vui long nhap do dai canh thu nhat: \n");
    scanf("%d", &a);
    printf("Vui long nhap do dai canh thu hai: \n");
    scanf("%d", &b);
    printf("Vui long nhap do dai canh thu ba: \n");
    scanf("%d", &c);
    if (validateData(a, b, c)){
        printf("Nua chu vi tam giac la: %.2f", calculatehaftofP(a, b, c));
    }
    return 0;
}