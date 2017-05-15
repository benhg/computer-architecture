#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a, int b){
  int g;
  if(a==0){ g = b;}
  else if(b==0){ g = a;}
  else if(b > a){ g= gcd(a,b-a); }
  else { g= gcd(a-b,b); }
  return g;

}



int main(){

int a,b;
int ans;

scanf("%d %d", &a, &b);

ans= gcd(a,b);

printf("GCD of %d and %d is %d\n", a, b, ans);
}
