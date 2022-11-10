#include <stdio.h>

int main ()
{
int F0=0;
int F1=1;
int Fi=0;
int i=0;
int n=0;
printf("Inserire Fi:");
scanf("%d",&n);
  
if (n<0)
{
  printf("il numero inserito e' negativo\n riprovare...");
  return 0;
}
  
if (n<2)
{
  printf("il risultato e':%d\n",n);
  return 0;
}
else
{
int Fi1=F1;
int Fi2=F0;
  
  
  for (i=2;i<=n;i++)
  {
    Fi=Fi1+Fi2;
    Fi2=Fi1;
    Fi1=Fi;  
  }
  printf("il risultato e':%d\n",Fi);
}
  
return 0;
}