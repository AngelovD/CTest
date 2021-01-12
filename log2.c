#include <stdio.h>
#include <math.h>

int findBit(int n);

int main(){
    
    printf("%d",findBit(67));
    return 0;
}

int findBit(int n){
    int a = log2(n);
    return a;
}