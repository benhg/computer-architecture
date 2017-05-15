//Simulation of adding two four-bit numbers

#include <stdio.h>

int main(){

int a[4], b[4], r[4], carry, overflow;

scanf("%d %d %d %d", &a[3], &a[2], &a[1], &a[0]);
scanf("%d %d %d %d", &b[3], &b[2], &b[1], &b[0]);

carry=0;
int n=0;

while(n<4){
	r[n]=a[n]+b[n]+carry;
	if(r[n]==2){
		r[n]=0;
		carry=1;
	} else if(r[n]==3){
		r[n]=1;
		carry=1;
	} else {
		carry=0;
	}
	n++;
}

printf("%d %d %d %d \n", r[3], r[2],r[1],r[0]);
printf("Carry = %d \n",carry);
if(a[3] == b[3] && r[3] != a[3]){
	printf("Overflow = 1 \n");
	}
else{ printf("Overflow = 0 \n");
	}
}
