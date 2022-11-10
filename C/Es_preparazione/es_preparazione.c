#include <stdio.h>

float potRic(float num,int i)
{
  if (i==1)
  return num;

  return num*potRic(num,i-1);
}

float princRic(int n, float k)
{
  if (n==0)
    return 0;

  return ((n*potRic(k,n+1))/potRic(3.0,n))+princRic(n-1,k);
}

int main ()
{
 int n=0;
  float k=0;
  float ris=0;
printf("inserire n:");
scanf("%d",&n);
printf("inserire k:");  
scanf("%f",&k);
ris=princRic(n,k);
  printf("il risulatato e':%f",ris);

  return 0;
}