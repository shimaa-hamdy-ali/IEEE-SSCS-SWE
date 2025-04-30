#include <stdio.h>
void echo(int n){
    if(n==0){
        
    }
    else{
     printf("%d:echo\n",n) ;
      echo(n-1);
    }
}
int main(){
    int n= 3;
    echo(n);
    return 0;
}