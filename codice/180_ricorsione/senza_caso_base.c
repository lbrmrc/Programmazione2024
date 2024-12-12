#include <stdio.h>

void f(int n){
    printf("%d\n", n);
    f(n+1);
}

int main(){
    f(0);
}