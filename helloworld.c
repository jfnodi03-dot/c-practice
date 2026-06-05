#include<stdio.h>

int fib (int n);

int main(){

printf("fib is:%d\n",fib(9) );
return 0;
}

int fib (int n){

    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
int fibM= fib (n- 2);
int fibN= fib (n- 1);

    int fib= fibM + fibN;
    return fib;

}

