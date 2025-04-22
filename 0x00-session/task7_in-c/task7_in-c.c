#include "my_putchar.c"
#include "my_putchar.h"
#include <stdio.h>
int main(){
    int i,j,k;
    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            for(k=0;k<=9;k++){
                if(i==j || i==k||j==k){}
                else if(k<j || k<i|| j<i){}
                else{
                    my_putchar(i+'0');
                    my_putchar(j+'0');
                    my_putchar(k+'0');
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
return 0;
}