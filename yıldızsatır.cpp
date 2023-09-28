#include<stdio.h>
int main(){
int a,b,n,s;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);

for(n=1;n<=a;n++)
{
	
for(s=1;s<=b;s++)
{
	if(n==1||n==a||s==1||s==b)
	{
		printf("*");
	}
	else 
	{
		printf(" ");
	}
	}	
	printf("\n");
	}	
	
}
