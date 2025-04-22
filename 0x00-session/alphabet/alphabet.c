#include "my_putchar.c"
#include "my_putchar.h"
#include <stdio.h>
int main(){
    char c ;
    for(c= 'a' ; c<='z' ; c++){
        if(c=='q')
        {

        }
        else{
            my_putchar(c);
        }
    }
    for(c= 'Z' ; c>='A' ; c--){
        if(c=='Q')
        {

        }
        else{
            my_putchar(c);
        }
    }
    return 0 ;
}
