#include<stdio.h>
float sum();
float sum(){
    float num1 = 5;
    float num2 = 6;
    float sum = num1 + num2;
    printf("%.2f + %.2f = %.2f",num1,num2,sum );
    return sum;
}
int main(){
    sum();
}