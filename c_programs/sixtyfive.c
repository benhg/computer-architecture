#include <stdio.h>
#include <stdlib.h>
int main(){
    int x;
    double y;
    char q;
    x=4294967295;
    x++;
    printf("%d%u%c\n",x,x,x);
    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(y));
    printf("%d\n",sizeof(q));	
}
