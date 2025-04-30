#include <stdio.h>
int is_response_detected(int strength)
{
    if (strength > 50){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int strength ;
    printf("enter your strength:");
    scanf("%d",&strength);
    int response= is_response_detected(strength);
    if (response==1){
        printf("the response was detected\n");
    }
    else{
        printf("the response wasn`t detected\n");
    }
    return 0 ;
}