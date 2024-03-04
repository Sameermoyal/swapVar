#include<stdio.h>
int main(){
    // swap without third variable
    
    int a = 67;
    int b = 98;
    printf("the real value a is : %d\n",a);
    printf("the real value b is : %d\n", b);
    
    b=a+b;
    a=b-a;
    b=b-a;
    
    printf("the swap value a is : %d\n",a);
    printf("the swap value b is : %d\n",b);
    
    return 0;
}