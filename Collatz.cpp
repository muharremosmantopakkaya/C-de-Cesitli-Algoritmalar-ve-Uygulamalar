#include<stdio.h>
int deger(long long int a){
int b=1;

for(a;a!=1;b++){

if(a%2==0){
	
a/=2;

}
else{
	
a=(3*a)+1;

}

}

return b;
}
int main(){
long long int maksimum = 1;
long long int nbuyukadim = 1;
long long int i;
for(i=1;i<=1000000;i++) {
	
long long int sayi = deger(i);

if(nbuyukadim <= sayi){

nbuyukadim = sayi;
maksimum = i;


}

}
printf("1.000.000 dan kucuk en uzun sayi zincirindeki n degerinin terim sayisi=%d\n1.000.000 dan kucuk 1'e en gec ulasan en uzun zincirdeki maksimum deger=%d ",nbuyukadim,maksimum);
                                                                            
return 0;
}
