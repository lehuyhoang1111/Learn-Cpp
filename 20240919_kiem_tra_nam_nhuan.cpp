#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap nam ban muon kiem tra: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Nam nay khong ton tai");
    }
    else if(n%4==0 && n%100 != 0){
        printf("Day la nam nhuan");
    }
    else if(n%100==0 && n%400==0){
        printf("Day la nam nhuan");
    }
    else{
        printf("Day khong phai la nam nhuan");
    }
}
