#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    printf("values of a and b brfore swapping %d %d",a,b);
    a =a+b;
    b =a-b;
    a =a-b;
    printf("values of a and b after swapping %d %d",a,b);
    return 0;
}
