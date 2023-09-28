#include<stdio.h>
long long int ucgen(long long int a);
long long int besgen(long long int b);
long long int altigen(long long int c);
int main()
{
	
	long long int ucgen1,besgen2,altigen3;
	long long int a,b,c,d,e,f;
	for(a=55000;a<60000;a++)
	{ 
	d=ucgen(a);
	for(b=31976;b<31990;b++)
	{
	e=besgen(b);
	
	for(c=25000;c<27695;c++)
	{
	f=altigen(c);
	if(f==d && e==d){
	printf("Tn(%lld)-Pn(%lld)-Hn(%lld) degerinin sonucu =%lld",a,b,c,ucgen(a));
	break;
	}
	}
	}
	}
	return 0;
}
long long int ucgen(long long int a)
{
	return (a*(a+1)/2);
}
long long int besgen(long long int b)
{
	return (b*(3*b-1)/2);
}
long long int altigen(long long int c)
{
	return (c*(c*2-1));
}
