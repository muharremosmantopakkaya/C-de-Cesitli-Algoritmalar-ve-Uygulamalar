#include<iostream>
using namespace std;

class Complex{
	private:
		float re;
		float im;
	public:
	Complex(); // constructor
	Complex(float,float); //constructor overload
	Complex(const Complex &); //copy constructor
	~Complex(); //destructor
   const   Complex& operator=(const Complex &);
   float operator[](int);
	void set(float,float);
	float get_re();
	float get_im();
		
};
Complex::~Complex()
{
	cout<<"destructor calisti"<<endl;
}
Complex::Complex()
{ cout<<"Parametresiz constructor calisti"<<endl;
	re=0.0;
	im=0.0;
}
Complex::Complex(float in_re,float in_im)
{ cout<<"Iki parametreli constructor calisti"<<endl;
	re=in_re;
	im=in_im;
}

Complex::Complex(const Complex &gelen_complex) // copy const
{
	cout<<"Copy constructor calisti"<<endl;
	re=gelen_complex.re;
	im=gelen_complex.im;
}
void Complex::set(float in_re,float in_im)
{
	re=in_re;
	im=in_im;
}
float Complex::get_re(){
	return re;
}
float Complex::get_im(){
	return im;
}
const Complex& Complex::operator=(const Complex &gelen_complex) //operator overload
{
	cout<<"= operator overloading calisti"<<endl;
	re=gelen_complex.re;
	im=gelen_complex.im;
	return *this; // this fake nesne gibi bir þey

}
float Complex::operator[](int i)
{
	cout<<"indis="<<i<<endl;
	return i*re;
}




class deneme{
// Complex komplekDizi[]
int diziAdedi;
public:
	explicit deneme(int);
	~deneme();
	Complex& operator[](int);
 Complex *kompleksDizi;
void DegerDegistir(int,float,float);
};
Complex& deneme::operator[](int i)
{
	return kompleksDizi[i];
}
void deneme::DegerDegistir(int z,float in_re,float in_im)
{
	if(z>=0 && z<diziAdedi)
	{
		kompleksDizi[z].set(in_re,in_im);
	}
	else
	{
		cout<<"Hatali indis"<<endl;
	}
}
deneme::~deneme()
{
	delete []kompleksDizi;
}
deneme::deneme(int x)
{diziAdedi=x;
	kompleksDizi = new Complex[x];
}



int main()
{
     Complex c1,c2(3.4,6.1);
	 Complex c3=c2; // copy constructor icin
	c2=c3; //operator overloading icin 
	c1=c3=c2; // önce c3=c1 yapýlýr
		// [];
	cout<<"c2.re="<<c2.get_re()<<endl; // operatore eþitledik
	cout<<"[] TEST:"<<c2[3]<<endl; // 3.4*3
	
	deneme x(5); // 5 ve 5 adet constructor parametrsiz ve destructor
	x.DegerDegistir(3,1.1,2.2);
	Complex c4;
	c4=x[3];
	cout<<"c4="<<c4.get_re()<<endl; // 
	return 0;
	
}

