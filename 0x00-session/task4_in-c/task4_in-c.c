#include "my_putchar.c"
#include "my_putchar.h"
#include <stdio.h>
int main(){
    char c=0;
    for(c=0 ; c<=9 ; c++)
    {
        my_putchar(c+'0');
    }
    return 0;
}