/*
  Shell for student's to insert their solution to
  y = floor(sqrt(x))  where x is restricted to 4 bits.
 */

#include <stdio.h>

int main()
{
  int x[4] ;
  int y[2] ;

  for (x[3] = 0 ; x[3] <= 1 ; x[3]++) {
  for (x[2] = 0 ; x[2] <= 1 ; x[2]++) {
  for (x[1] = 0 ; x[1] <= 1 ; x[1]++) {
  for (x[0] = 0 ; x[0] <= 1 ; x[0]++) {

      y[0]= x[3] | x [2];
      y[1]=((!x[2]) & x[1] | x[0]) | (x[3] & (x[2] | x[1] | x[0]));

    printf("%d %d %d %d  :  %d %d\n",
	   x[3],x[2],x[1],x[0], y[1],y[0]) ;

  }
  }
  }
  }

}


