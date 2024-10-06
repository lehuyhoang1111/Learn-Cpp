#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap so ban muon kiem tra: ");
    scanf("%d", &n);
    if(n<0){
        n = -n;
    }
    int dem = 0;
    int sum = 0;
    while (n!=0){
        //printf("%d \n", n%10);
        sum+=n%10;
        n/=10;
        dem++;
    }
    printf("Dem = %d \n", dem);
    printf("Sum = %d", sum);
}
