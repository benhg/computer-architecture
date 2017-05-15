#include <stdio.h>
#include <stdlib.h>
int main(){
int A[4], B[4], R[4];
printf("enter 2 numbers");{
scanf("%d %d %d %d",&A[3],&A[2],&A[1],&A[0]);
scanf("%d %d %d %d",&B[3],&B[2],&B[1],&B[0]);
}

int CARRY=0;
int i;

for(i=0;i<=3;i++){
	int tempsum=A[i]+B[i]+CARRY;
	if(tempsum<=1){
		R[i]=tempsum;
		CARRY=0;
	}else{
		R[i]=tempsum-2;
		CARRY=1;
	}
}

printf("%d %d %d %d\n",R[3],R[2],R[1],R[0]);
printf("carry=%d\n", &CARRY);
return 0;
}
