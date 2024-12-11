#include<stdio.h>
void array(int numbers[]);
void array(int numbers[]){
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d la: %d\n",i+1, numbers[i]);
    }
}
int main() {
    int numbers[5] = {1,2,3,4,5};
    array(numbers);
}
