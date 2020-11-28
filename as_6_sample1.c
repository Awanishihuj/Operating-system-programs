//Question : check how many process id are printed by executing the program
//This program is Demonstrated By: Awanish kumar
// ----------------------------------------------------------code goes hear---------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    int q; 
    printf("%d%d\n",getpid(),getppid());
    q = fork(); printf("%d%d\n",getpid(),getppid(),q);
    return 0;
}
