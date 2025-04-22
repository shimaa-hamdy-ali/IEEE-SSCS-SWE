#include "my_putchar.c"
#include "my_putchar.h"
#include <stdio.h>
int main(){
    int i=0;
    char c;
    for(i=0 ; i<5 ; i++){
        for(c = 'a'; c<='z' ; c++){
        my_putchar(c);
        }
        my_putchar('\n');
    

}
return 0;
}