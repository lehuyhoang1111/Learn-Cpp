#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Nhap so ban muon kiem tra: ");
    scanf("%d", &n);
    int count=0;
    for(int i=1; i<= sqrt(n); i++){
        if(n%i==0){
            count++;
            // printf("Cac uoc nguyen duong cua %d la: %d \n", n, i);
        }
    }
    // printf("Count = %d \n", count);
    if(count==1){
        printf("%d khong phai la so nguyen to", n);
    }
    else{
        printf("%d la so nguyen to", n);
    }
}
