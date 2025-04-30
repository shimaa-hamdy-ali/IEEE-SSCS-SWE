#include <stdio.h>
int signal_strength = 0;
void boost_signal(n){
    int signal_strength=100;
    printf("booster: signal strength =%d\n ",n);

}
int main (){

    printf("signal_strength=%d\n ",signal_strength);
    boost_signal(50);
    printf("signal_strength=%d\n ",signal_strength);

}