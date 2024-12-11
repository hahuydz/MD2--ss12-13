#include<stdio.h>
void perfectNumber(int number);
void perfectNumber(int number){
    int sum = 0;
    for (int i = 1; i <= number/2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if (sum == number)
    {
        printf("%d la so hoan hao\n",number);
    }
    else{
        printf("%d khong phai so hoan hao\n",number);
    }
}
int main(){
    int num1,num2;
    printf("Nhap so nguyen thu nhat : ");
    scanf("%d",&num1);
    perfectNumber(num1);
    printf("Nhap so nguyen thu hai : ");
    scanf("%d",&num2);
    perfectNumber(num2);
}