//Write a program to create 6 child process by using only one fork(), print the no of child with their pocess id

#include<stdio.h> 
int main() 
{ 
    for(int i=0;i<6;i++)  
    { 
        if(fork() == 0) 
        { 
            printf("[Child %d] pid %d \n", i, getpid()); 
            exit(0); 
        } 
    } 
    for(int i=0;i<6;i++) { 
    wait(NULL); 
    }
} 