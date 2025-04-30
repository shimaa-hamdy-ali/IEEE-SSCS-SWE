#include <stdio.h>
int main(){
    int signal = 98;
    int* ptr =&signal ;
    printf("the address of signal is:%p\n", ptr);
    printf("the value of signal = %d\n",*ptr);
    return 0;
}