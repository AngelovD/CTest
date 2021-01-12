#include <stdio.h>

int addDigit(int first, int second);

int main(){
    int a,b;
    a = 3;
    b = 5;
    int res = a & b;

    //printf("%d\n",addDigit(a,b));

    printf("%d\n",res);
    res = a | b;

    printf("%d\n",res);
    res = a ^ b;
    printf("%d",res);
    a=a<<1;
    printf("\n%d",a);
}

int addDigit(int first, int second){
    return first+second;
}