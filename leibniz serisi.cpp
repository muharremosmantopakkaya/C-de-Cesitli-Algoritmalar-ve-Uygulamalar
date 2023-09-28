#include <stdio.h>


int main()
{
    int n;
    int sayi;
   printf( "Pozitif sayi girin: ");
    scanf("%d",&n);
   

    while (n < 1)
    {
         printf( "Duzeltin.Pozitif sayi girin: ");
    scanf("%d",&n);
    }

    for(sayi=1;sayi<=n;sayi++)
    {
    	double pi;
      if(sayi==1)
      {
      	pi=4.0;
      	printf("%5d %21f\n",sayi,pi);
	  }
	  else if(sayi%2==1)
	  {
	  	pi=4-(4.0/((2*sayi)-1));
	  	printf("%5d %21f\n",sayi,pi);
	  }
	else
	{
		pi=4-(4.0/((2*sayi)-1)) ;
		printf("%5d %21f\n",sayi,pi);
	}
	
	}
	
	}
