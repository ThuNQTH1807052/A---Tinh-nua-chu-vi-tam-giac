#include <stdio.h>
#include <stdlib.h>

int tinhNuaChuViTamGiac(int a, int b, int c){
    return (a + b + c)/2;
}
int main() {

    int a, b, c;
    printf("Nhap so do canh thu nhat:\n");
    scanf("%d", &a);
    printf("Nhap so do canh thu hai:\n");
    scanf("%d", &b);
    printf("Nhap so do canh thu ba:\n");
    scanf("%d", &c);
    if (a <= 0, b <= 0, c <= 0){
        printf("Do dai mot canh tam giac khong the nho hon hoac bang 0.\n");
    }


    return 0;

}