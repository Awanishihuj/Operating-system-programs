//How many X and Y are Printed By the following program ?
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    int p, q;
    p = fork(); fork();
    q = fork();
    if(p==q){
        printf("x");
    }
    else{
        printf("y");
    }
    return 0;
}