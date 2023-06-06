/*
This programme has a buffer-overflow probleme
a buffer-overflow is when we give input that is bigger than buffer causing
a memory leak an altering nearby positions in the stack, in this case we are
altering the adresse of welcome
*/

#include <stdio.h>
#include <string.h>

typedef int bool;
#define false 0

int main(){
    char secret_name[20];
    bool welcome=false;
    
    printf("You are walking down a dark ally-way\
    \nwhen all of a sudden you arrive in front of a door\
    \nthere is a man there that asks for your name\
    \nyour goal is to give him a name that grants you accses to the building\n");
    printf(">> ");
    gets(secret_name); // function to exploit


    if(welcome){
        printf("**********\n");
        printf("You Win Well Done");
        printf("\n**********\n");
    }else{
        printf("You have unfortanately failed\n");
    }

    return 0;
}