#include<stdio.h>
int main(){
    int number;
    int lastDigit;
    printf("enter an integer");
    scanf("%d", &number);
    lastDigit =number%10;
    printf("The lastDigit of %d is:%d\n",number,lastDigit);
    return 0;
}
