 #include <stdio.h>

int somMat_Ric (int I)
{
if (I-1==0)
return I;
	
return I+somMat_Ric(I-1);	
}

int som_it_ric(int a, int b)
{
  if (b>a)
  {
    int x_ab=0;
    
    for (a;a<=b;a++)
      {
        x_ab=x_ab+somMat_Ric(a);
      }
    
    return x_ab;
  }
  else
  {
    printf("Errore: b e' inferiore ad a.\n riprovare...");
    return -1;
  }
}

int main()
{
	int a,b;
	int ris;
	printf("Inserire numero di partenza della sommatoria:");
	scanf("%d",&a);
  printf("Inserire numero di fine della sommatoria:");
	scanf("%d",&b);
	ris=som_it_ric(a,b);
	printf("il risultato e':%d\n",ris);
	return 0;
}
