#include <stdio.h>
int is_strong_signal(int strength){
    if(strength>50){
        return 1;
    } 
    else{
        return 0;
    }
}
void check_signal(int strength){
   int check = is_strong_signal(strength);
   if(check == 1){
    printf("strong signal detected\n");
   }
   else{
    printf("no signal detected\n");
   }

}
int main(){
int a=60 , b=10;
check_signal(a);
check_signal(b);
return 0;

}