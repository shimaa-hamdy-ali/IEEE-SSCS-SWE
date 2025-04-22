#include "my_putchar.h"
#include "my_putchar.c"
#include <stdio.h>
int main(){
    int i,j;
    for(i=0 ; i<=9 ;i++) {
        for(j=1 ; j<=9 ; j++) {
            if (i==j || j<i){}
            
         else{

            my_putchar(i+'0');
            my_putchar(j+'0');
            my_putchar(',');
            my_putchar(' ');
}
        }
        
    }
}
    
