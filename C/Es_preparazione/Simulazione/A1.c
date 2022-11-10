#include <stdio.h>

float f(int n)
{
  int a0=1;
  int a1=2;
  float an1,an2,temp;
  
  if (n==0)
    return a0;
  if (n==1)
    return a1;

  for (int i=2;i<=n;i++)
  {
    if (i%2==0)
    {
      
    if (i==2)
    {
      an1=(2.0+3.0*(a0-2))/a1;
      an2=a1;
    }
    else
    {
      temp=(i+3*(an2-2))/an1;
      an2=an1;
      an1=temp;
    }
      
    }

    if (i%2!=0)
    {
      temp=(i+3*(an1-2))/an2;
      an2=an1;
      an1=temp;
    }
  }

  return an1;
}

int main ()
{
  int n=0;
  float ris;
  printf("inserire n:");
  scanf("%d",&n);
  ris=f(n);
  printf("il risultato è:%f\n",ris);
  return 0;
}