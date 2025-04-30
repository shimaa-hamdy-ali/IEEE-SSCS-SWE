#include <stdio.h>
int sum_layers(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sum_layers(n-1);
    }
}
int main(){
    printf("%d\n",sum_layers(5));
    printf("%d\n",sum_layers(3));
    return 0;
}