//The Following Program create process B and C The parent of B is A and the parent of Cis B
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    q = fork();
    if(q=0){
        fork();
        printf("%d%d\n",getpid(),getppid());
        sleep(1);
    }
    return 0;
}