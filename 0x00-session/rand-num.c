#include <stdlib.h>
#include <time.h>


int main(void)
{
	int n;
   int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  lastdigit = n%10 ;
  printf("the number is: %d\n",n);
  printf("the last digit is: %d\n" , lastdigit);
  if(lastdigit%2==0 && lastdigit< 5){
    printf("the number is even\n");
    printf("the last digit is less than 5\n");
  }
  else if(lastdigit%2==0 && lastdigit>5 )
  {
    printf("the the number is even\n");
    printf("the last digit is greater than 5\n");
  }
  else if(lastdigit%2 != 0 && lastdigit<5){
    printf("the number is odd\n");
    printf("the last digit is less than 5\n");
  }
  else if(lastdigit%2 != 0 && lastdigit>5)
  {
    printf("the number is odd\n");
    printf("the last digit is greater than 5\n");
  }
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
	return (0);
}
