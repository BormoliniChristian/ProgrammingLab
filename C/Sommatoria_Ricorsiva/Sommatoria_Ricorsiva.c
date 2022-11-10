#include <stdio.h>

int somMat (int I)
{
if (I-1==0)
return I;
	
return I+somMat(I-1);	
}

int main()
{
	int x;
	int ris;
	printf("Inserire numero sommatoria:");
	scanf("%d",&x);
	ris=somMat(x);
	printf("il risultato e':%d\n",ris);
	return 0;
}
