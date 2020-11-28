// How Many X will be printed By following Program? 
//This program is demonstrated by Awanish Kumar
// ------------------------------------code goes hear---------------------------------
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
int main(){
    int p, q;
    p = fork(); q = fork();if(p==0) {fork(); printf("X");}return 0;
}