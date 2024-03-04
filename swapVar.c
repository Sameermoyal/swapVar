#include<stdio.h>
int main(){
    // swap with help of  third variable
    
    int a = 67;
    int b = 98;
    int c;
    printf("the real value a is : %d\n",a);
    printf("the real value b is : %d\n", b);
    
    c=a;
    a=b;
    b=c;
    printf("the swap value a is : %d\n",a);
    printf("the swap value b is : %d\n",b);
    
    return 0;
}