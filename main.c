#include <stdio.h>

int main(void) {
  int num, a, b, i;

  printf("Enter a number ");
  scanf("%d",&num);

  for(i=1;i<=num;i++){
    if(i%2 != 0) { //odd position
      if(i == 1)
        a = 1;
      else 
        a = a * 2;
    }

    else {
      if(i == 2) //even positions
        b = 1;
      else 
        b = b * 3;
    }
  }

  if(num%2!= 0)
    printf("\n%d terms of series is %d",num,a);
  else
    printf("\n%d terms of series is %d",num,b);
  return 0;
}