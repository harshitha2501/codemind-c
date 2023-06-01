#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    float d,h,g;
    if(b<=10000){
    d=0.8*b;
    h=0.2*b;
    g=b+d+h;
    }
    else if(b<=20000){
        d=0.9*b;
        h=0.25*b;
        g=b+d+h;
    }
    else if(b>20000){
        d=0.95*b;
        h=0.3*b;
        g=b+d+h;
    }
printf("%.2f",g);
}