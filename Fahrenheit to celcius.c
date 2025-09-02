#include<stdio.h>
int main(){
    float Fahrenheit, celcius;
    printf("enter fahrenheit");
    scanf("%f", &Fahrenheit);
    celcius =(Fahrenheit-32)*5.0/9.0;
    printf("celcius is:%f", celcius);
    return 0;
}
