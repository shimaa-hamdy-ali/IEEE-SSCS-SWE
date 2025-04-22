#include "my_putchar.c"
#include "my_putchar.h"
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    if(n>=0 && n<=15){
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
           if(i*j>9 && i*j<=99){
            my_putchar(i*j/10+'0');
            my_putchar(i*j%10+'0');
            my_putchar(',');
            my_putchar(' ');
           }
           else if(i*j>99){
            int x= i*j/10;
            int y=x/10;
            my_putchar(y+'0');
            my_putchar(x%10+'0');
            my_putchar(i*j%10+'0');
            my_putchar(',');
            my_putchar(' ');

           }
           else{
            my_putchar(i*j+'0');
            my_putchar(',');
            my_putchar(' ');
           }
          
        }
        my_putchar('\n');
    }
}
else{}

}