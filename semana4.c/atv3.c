/*
-fazer uma tabuada 

*/
#include <stdio.h>

tabuadan(int n)
{
  int i=1, cal;
  for (i;i<11;i++){
    cal=n*i;
    printf("%2d X %2d = %d \n",n,i,cal);

  }
  return 0;
}

  int main()
  {

    int n=1;
    for (1;n<10;n++){
      tabuadan(n);
    }

    return 0;
  }