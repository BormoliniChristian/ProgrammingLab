#include <stdio.h>


double som(double n)
{
  if (n==0)
    return 1;

  return 1/((2*n+1)*(2*n+1))+som(n-1);
}

int main ()
{
double x;
  double res;
  scanf("%lf",&x);
  res=som(x);
  printf("ris:%lf",res);
  return 0;
}