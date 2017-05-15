 #include <stdio.h>


int encode_circuit(int x[3], int y[3])
{
  int a[6] ;
  int b[3] ;
  int c[3] ;

  a[0] =   x[0] & x[2] ;  
  a[1] =  !x[0] & !x[2] ;
  a[2] =   x[1] & !x[2] ;
  a[3] = !(x[1] | x[2]) ;
  a[4] =  !x[0] & x[2] ;
  a[5] =   x[0] & !x[2] ;

  b[0] =  !x[1] & a[0] ;
  b[1] =   a[0] & x[1] ;
  b[2] =   a[4] | a[5] ;

  c[0] =   b[0] | a[1] ;
  c[1] =   b[1] | a[1] ;
  c[2] =   b[2] & x[1] ;

  y[0] =   c[0] | a[3] ;
  y[1] =   c[1] | a[2] ;
  y[2] =   a[3] | c[2] ;

  // 15 gates, delay 4
}



int encode_circuit_improved(int x[3], int y[3])
{
  
  y[0] =   !x[0] & !x[2]   |   x[0] & !x[1] ;
  y[1] =   !x[0] & !x[2]   |   x[0] & x[1] ;
  y[2] = (!x[1]  | x[0]) & !x[2]  |  !x[0] & x[1] & x[2] ;

  // 11 gates, delay 3  ... 
  // 10 gates if y[0] and y[1] share the first term
}




int test_encode_circuit()
{
  int x[3],y[3] ;

  printf("\n") ;
  printf("x0 x1 x2 : y0 y1 y2\n") ;
  printf("-------------------\n") ;
  for (x[0] = 0 ; x[0] <= 1 ; x[0]++) {
  for (x[1] = 0 ; x[1] <= 1 ; x[1]++) {
  for (x[2] = 0 ; x[2] <= 1 ; x[2]++) {

    encode_circuit(x,y) ;
    printf(" %d  %d  %d :  %d  %d  %d\n", 
	   x[0],x[1],x[2], y[0],y[1],y[2]) ;

  }
  }
  }
  printf("\n") ;

}





int test_encode_circuit_improved()
{
  int x[3],y[3] ;

  printf("\n") ;
  printf("x0 x1 x2 : y0 y1 y2\n") ;
  printf("-------------------\n") ;
  for (x[0] = 0 ; x[0] <= 1 ; x[0]++) {
  for (x[1] = 0 ; x[1] <= 1 ; x[1]++) {
  for (x[2] = 0 ; x[2] <= 1 ; x[2]++) {

    encode_circuit_improved(x,y) ;
    printf(" %d  %d  %d :  %d  %d  %d\n", 
	   x[0],x[1],x[2], y[0],y[1],y[2]) ;

  }
  }
  }
  printf("\n") ;

}




int main()
{
  test_encode_circuit() ;
  test_encode_circuit_improved() ;
}
