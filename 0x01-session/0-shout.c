#include <stdio.h>
int repeat_message(int n)
{
    int i ; 
    for(i=0;i<n ; i++)
    printf("Hello, world!\n");

}
int main(){
    int n;
    scanf("%d",&n);
    repeat_message(n);
    return 0;
}