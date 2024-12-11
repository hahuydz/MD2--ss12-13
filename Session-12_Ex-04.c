#include<stdio.h>
int maxNumber(int numbers[],int size);
int maxNumber(int numbers[],int size){
    int max = numbers[0];
    for (int i = 0; i < size; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }
    return max;
}
int main(){
    int numbers[5] = {4,6,2,1,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int max = maxNumber(numbers,size);
    printf("%d",max);
}