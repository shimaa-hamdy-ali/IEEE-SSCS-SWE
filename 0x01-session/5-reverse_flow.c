#include <stdio.h>
void swap(int* a ,int* b){
    int change = *a ;
    *a = *b;
    *b= change;
}
int main(){
    int i=5 , k=6;
    printf("the values before swaping: %d,%d\n",i,k);
    swap(&i ,&k);
    printf("the values after swaping: %d,%d",i,k);
  
}
    