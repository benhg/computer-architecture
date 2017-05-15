int choose(int n, int k){
	int r,a,b;
	if (k==0){r=1;}
	else if(k==n){r=1;}
	else{
		a=choose(n-1,k-1);
		b=choose(n-1,k);
		r=a+b;	
	}

}

int main(){
	z=choose(5,4);
	printf(z);
	return 0;
}
