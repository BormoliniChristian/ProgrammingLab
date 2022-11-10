#include <stdio.h>

int f(int x, int a)
{
int b=a;

 //P* 
 if (x <= b) return(a);
else return (b + f(x-2, a + 1)); 
}

void main ()
{
int x=10;
int y=f(x,0);
 printf("y e' %d",y); 
}