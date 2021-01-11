#include <stdio.h>

int addDigit(int first, int second);

int main(){
    int a,b;
    a = 3;
    b = 5;
    printf("%d",addDigit(a,b));
}

int addDigit(int first, int second){
    return first+second;
}