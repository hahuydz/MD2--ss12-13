#include<stdio.h>
int factorial(int number);
int factorial(int number){
    int mul = 1;
    for (int i = 1; i <= number; i++)
    {
        mul *= i;
    }
    return mul;
}
int main(){
    int a = 5;
    int result = factorial(a);
    printf("%d",result); 
}