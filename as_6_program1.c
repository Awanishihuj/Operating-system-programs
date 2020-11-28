//Write a program Which Creates 10 additional process.Every Process Prints its id. use only 4 frok()s
#include<stdio.h> 
int main() 
{ 
    for(int i=0;i<10;i++)  
    { 
        if(fork() == 0) 
        { 
            printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
            exit(0); 
        } 
    } 
    for(int i=0;i<10;i++) { 
    wait(NULL); 
    }
} 