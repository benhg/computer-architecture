#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[4], B[4], R[4];
	scanf("%d %d %d %d",&A[3],&A[2],&A[1],&A[0]);
	scanf("%d %d %d %d",&B[3],&B[2],&B[1],&B[0]);
	int i;
	int tempsum;
	int CARRY=0;
	int OVERFLOW=0;
	for(i=0;i<=3;i++){
	    tempsum=A[i]+B[i]+CARRY;
		if(tempsum<=1){
			R[i]=tempsum;
			CARRY=0;
		}else{
			R[i]=tempsum-2;
			CARRY=1;
		}
	}
	if((A[3]==0&&B[3]==0&&R[3]==1)||(A[3]==1&&B[3]==1&&R[3]==0)){
			OVERFLOW=1;
	}
	
	printf("%d %d %d %d\n",R[3],R[2],R[1],R[0]);
	printf("carry=%d\n overflow=%d\n", CARRY, OVERFLOW);
return 0;
}
