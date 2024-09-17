#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta;
    printf("Nhap 3 so thuc a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = b*b - 4*a*c;
    if(delta < 0){
        printf("Phuong trinh vo nghiem");
    }
    else if(delta == 0){
        float x0 = -b/(2*a);
        printf("Phuong trinh co nghiem kep x0 = %f", x0);
    }
    else{
        float x1 = (-b+sqrt(delta)) / (2*a);
        float x2 = (-b-sqrt(delta)) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet: \n");
        printf("x1 = %f", x1);
        printf("x2 = %f", x2);
    }
}
