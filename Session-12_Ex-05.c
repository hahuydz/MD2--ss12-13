#include<stdio.h>
#include<math.h>
void isPrime(int number){
    int prime = 1;
    if (number < 2)
    {
        prime = 0;
    }
    else{
        for (int i = 2; i <= sqrt(number) ; i++)
        {
            if (number % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime == 1)
    {
        printf("%d la so nguyen to!\n",number);
    }
    else{
        printf("%d khong phai so nguyen to!\n",number);
    }   
}
int main(){
    int num1,num2;
    printf("Nhap so nguyen thu nhat : ");
    scanf("%d",&num1);
    isPrime(num1);
    printf("Nhap so nguyen thu hai : ");
    scanf("%d",&num2);
    isPrime(num2);
}