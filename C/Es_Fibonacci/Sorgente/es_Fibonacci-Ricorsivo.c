#include <stdio.h>

int Fib(int Fi)
{
  
  if (Fi<0)
{
  printf("il numero inserito e' negativo\n riprovare...");
  return -13;
}
  
if (Fi<2)
{
  return Fi;
}
else
{
  Fi=Fib(Fi-1)+Fib(Fi-2);
}
return Fi;  
}

int main ()
{
int Fi=0;

printf("Inserire Fi:");
scanf("%d",&Fi);
Fi=Fib(Fi);
printf("il risultato e':%d\n",Fi);  
return 0;
}