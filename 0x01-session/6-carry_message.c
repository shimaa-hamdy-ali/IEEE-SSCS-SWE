#include <stdio.h>
void print_message(char *msg){
    printf("%c",*msg);
}
int main(){
char str[] ="Hello!";
int k =strlen(str);
printf("the message is : ");
for(int i=0 ; i<k; i++){
  char  message= str[i];
  print_message(&message);
}
return 0;
}
