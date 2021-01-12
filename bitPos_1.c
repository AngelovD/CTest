#include <stdio.h>

int Bit(int a, int pos);

int main(){
    int a =5;
    int h = 1;
    int pos=1;
    printf("%d",Bit(a,pos));

    pos=2;
    printf("\n%d",Bit(a,pos));

}

int Bit(int a, int pos){
    int h = 1;
    a=a>>pos;
    a=a&h;
    return a;
}