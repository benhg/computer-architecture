//Simulation of adding two four-bit numbers

#include <stdio.h>
#include <stdlib.h>

int main(){

int x[4], y[4], r[4], carry, overflow;
int n=0;

for (x[3] = 0 ; x[3] <= 1 ; x[3]++) {
 for (x[2] = 0 ; x[2] <= 1 ; x[2]++) {
  for (x[1] = 0 ; x[1] <= 1 ; x[1]++) {
   for (x[0] = 0 ; x[0] <= 1 ; x[0]++) {
    for (y[3] = 0 ; y[3] <= 1 ; y[3]++) {
     for (y[2] = 0 ; y[2] <= 1 ; y[2]++) {
      for (y[1] = 0 ; y[1] <= 1 ; y[1]++) {
       for (y[0] = 0 ; y[0] <= 1 ; y[0]++) {
carry=0;

while(n<4){
r[n] = (!x[n] & !y[n] & carry) | (!x[n] & y[n] & !carry) | (x[n] & !y[n] & !carry) | (x[n] & y[n] & carry);

carry = (y[n] & carry) | (x[n] & !y[n] & carry) | (x[n] & y[n] & !carry);
n++;
}


printf("%d %d %d %d + %d %d %d %d = %d %d %d %d \n",x[3],x[2],x[1],x[0],y[3],y[2],y[1],y[0], r[3],r[2],r[1],r[0]);
n=0;
}
}
}
}
}
}
}
}
}
//printf("Carry = %d \n",carry);
//if(x[3] == y[3] && r[3] != x[3]){
//	printf("Overflow = 1 \n");
//	}
//else{ printf("Overflow = 0 \n");
//	}
//}
