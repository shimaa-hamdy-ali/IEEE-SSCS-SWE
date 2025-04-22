#include "my_putchar.h"
#include "my_putchar.c"
#include <stdio.h>
#include <math.h>
int main(){
    int i,j;
    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
           if(i*j>9){
            my_putchar(i*j/10+'0');
            my_putchar(i*j%10+'0');
            my_putchar(',');
            my_putchar(' ');
           }
           else{
             my_putchar(i*j+'0');
            my_putchar(',');
            my_putchar(' ');
        }}
        my_putchar('\n');
    }
}