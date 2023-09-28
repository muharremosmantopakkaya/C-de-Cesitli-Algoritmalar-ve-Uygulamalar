#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int saha[80][23]={0};
int kuyrukSutun[500];
int kuyrukSatir[500];
int maap[80][23]={0};

void gotoxy(short x, short y) {
	HANDLE hConsoleOutput;
	COORD Cursor_Pos = {x-1 , y-1};

	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}

void cerceve(int a, int b, int a1, int b1,int tur)
{
    int i;
    for(i=a; i<=a1;i++)
    {
        saha[i][b] = tur;

        saha[i][b1] = tur;

    }
    for(i=b; i<=b1;i++)
    {
        saha[a][i] = tur;

        saha[a1][i] = tur;

    }
}

void ekrani_bas()
{
    int x,y;
    for(x=0;x<80;x++)
    {


 for(y=0;y<23;y++)
{
    gotoxy(x+1,y+1);
    if(saha[x][y]==1)
    {
    printf("%c",219);
    }

    else if(saha[x][y]==2)
    {
    printf("%c",176);
    }
    else if(saha[x][y]==3)
    printf("%c",88);

}
    }
}

int k,l;
randomAta()
{
    srand(time(NULL));
    k=4+rand()%65;
    l=4+rand()%15;


}

int main()
{
    randomAta();
    cerceve(0,0,79,22,2);
    ekrani_bas();
    int sx=40,sy=12;
    int dy=0,dx=0;
    unsigned char tus;
    int a=0;
    int devam=0;




    do
    {
	if(kbhit())
     {
    tus=getch();
    if(tus==224)
    {
    tus=getch();
    switch(tus)
    {
    case 72:dy=-1; dx=0;
    break;
    case 80:dy=1; dx=0;
    break;
    case 77: dx=1; dy=0;
    break;
    case 75: dx=-1; dy=0;
    }
    }
    }
    sx=sx+dx;
    sy=sy+dy;
    if(sx>78)
    sx=2;
    if(sx<2)
    sx=78;
    if(sy>22)
    sy=2;
    if(sy<2)
    sy=22;
    kuyrukSutun[0]=sx;
    kuyrukSatir[0]=sy;
    int i;


        for(i=1;i<=a;i++)
        {
            if((sx==kuyrukSutun[i] && sy==kuyrukSatir[i]))
            {
                gotoxy(sx,sy);printf("GG kaybettin");
                getch();
                devam=1;
            }



}

gotoxy(sx,sy);printf("*");
for(i=0;i<=a;i++)
{
gotoxy(kuyrukSutun[i],kuyrukSatir[i]);printf("*");
}
if(sx==k && sy==l)
{
randomAta();
a++;
gotoxy(2,2);printf("Puan: %d",a);
}
gotoxy(k,l);printf("-");

Sleep(50);
gotoxy(sx,sy);printf(" ");


for(i=0;i<=a;i++)
{
gotoxy(kuyrukSutun[i],kuyrukSatir[i]);printf(" ");
}


for(i=a;i>0;i--)
{
kuyrukSutun[i]=kuyrukSutun[i-1];
kuyrukSatir[i]=kuyrukSatir[i-1];
}

    } while (devam==0);
}
