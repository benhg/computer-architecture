//Simulation of multiplying two four-bit numbers

#include <stdio.h>
#include <stdlib.h>

int main(){

int x[2], y[2], r[4];

for (x[1] = 0 ; x[1] <= 1 ; x[1]++) {
 for (x[0] = 0 ; x[0] <= 1 ; x[0]++) {
  for (y[1] = 0 ; y[1] <= 1 ; y[1]++) {
   for (y[0] = 0 ; y[0] <= 1 ; y[0]++) {

  r[3] = x[0]&x[1]&y[0]&y[1];
  r[2] = (x[1]&y[1])&(!x[0]|!y[0]);
  r[1] = (x[0]&!x[1]&y[1])|(x[0]&!y[0]&y[1])|(!x[0]&x[1]&y[0])|(x[1]&y[0]&!y[1]);
  r[0] = x[0]&y[0];


printf("%d %d * %d %d = %d %d %d %d \n", x[1],x[0],y[1],y[0], r[3],r[2],r[1],r[0]);
}
}
}
}
}
