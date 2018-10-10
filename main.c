#include <stdio.h>
#include <stdlib.h>

float tinhNuaChuViTamGiac(int a, int b, int c){
    return (a + b + c)/2;
}
int main() {

    int a, b, c;
    printf("Nhap so do canh thu nhat:");
    scanf("%d", &a);
    printf("Nhap so do canh thu hai:");
    scanf("%d", &b);
    printf("Nhap so do canh thu ba:");
    scanf("%d", &c);
    if (a > 0 && b > 0 && c > 0){
        if ((a+b>c)|| (a+c>b)||(b+c>a)) {
            printf("Nua chu vi cua tam giac la %2.f", tinhNuaChuViTamGiac(a, b, c));
        }
        else {
            printf("Tong hai canh cua mot tam giac luon phai lon hon canh con lai.\n");
            }
    }
    else{
        printf("Do dai mot canh tam giac khong the nho hon hoac bang 0.\n");
    }
    return 0;
}