#include <stdio.h>
char *get_reply(){
   static char str[]= "hello!";
    return str ;

}
int main (){
   char* message = get_reply();
  printf("the message is :%s", message);
}