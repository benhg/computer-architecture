/*
  A bitwise simulation of the subtraction of two, 4-bit numbers
  and the carry, overflow, sign, and zero flags.
*/


#include <stdio.h>

int main()
{
  int cf,of,sf,zf ; // carry, overflow, sign, zero  flags

  int x[4] ;
  int y[4] ;
  int z[4] ;
  int c[5] ;
  int q ;

  int i ;

  for (x[3] = 0 ; x[3] <= 1 ; x[3]++) {
  for (x[2] = 0 ; x[2] <= 1 ; x[2]++) {
  for (x[1] = 0 ; x[1] <= 1 ; x[1]++) {
  for (x[0] = 0 ; x[0] <= 1 ; x[0]++) {

  for (y[3] = 0 ; y[3] <= 1 ; y[3]++) {
  for (y[2] = 0 ; y[2] <= 1 ; y[2]++) {
  for (y[1] = 0 ; y[1] <= 1 ; y[1]++) {
  for (y[0] = 0 ; y[0] <= 1 ; y[0]++) {


    // your work goes here!!!


    printf("%d %d %d %d - %d %d %d %d = %d %d %d %d\n",
	   x[3],x[2],x[1],x[0], 
           y[3],y[2],y[1],y[0],
	   z[3],z[2],z[1],z[0]) ;
    printf("cf = %d\n",cf) ;
    printf("of = %d\n",of) ;
    printf("sf = %d\n",sf) ;
    printf("zf = %d\n",zf) ;
    printf("\n") ;

  }
  }
  }
  }

  }
  }
  }
  }

}


