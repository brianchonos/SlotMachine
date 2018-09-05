#ifndef _BRIAN_H_
#define _BRIAN_H_

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <fstream>
using namespace std;
void gotoxy(short x, short y) {
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
int random(int r)
{
    return rand()% r + 1;
} 
 
void filledbox(int, int, int, int, char);
void framedbox(int, int, int, int, char);
void horizontalline(int, int, int, char);
void diagonalline(int, int, int, char);
void verticalline(int, int, int, char);

void filledbox(int x, int y, int w, int h, char sym)
{	int e=0;
	gotoxy(x,y);
	for (int a=0;a<h;a++)
	{	e++;
		gotoxy(x,y+e);
		for (int c=0;c<w;c++)
		{
			cout<<sym;
		}
	}
}

void framedbox(int x, int y, int w, int h, char sym)
{	int d=0,r=0;
	gotoxy(x,y);
	for (int a=0;a<w;a++)
	{
		cout<<sym;
	}
	gotoxy(x,y+h);
	for (int b=0;b<w;b++)
	{
		cout<<sym;
	}
	for (int c=0;c<h;c++)
	{	d++;
		gotoxy(x,y+d);
		cout<<sym;
	}
	for (int e=0;e<h+1;e++)
	{	r++;
		gotoxy(x+w,y+r-1);
		cout<<sym;
	}

}

void horizontalline(int x, int y, int l, char sym)
{
	gotoxy(x,y);
	for (int g=0;g<l;g++)
	{
		cout<<sym;	
	}
}

void diagonalline(int x, int y, int l, char sym)
{	int d=0,g=0;
	for (int i=0;i<l;i++)
	{	d++;
		g++;
		gotoxy(x+d,y+g);
		cout<<sym;
	}
}

void verticalline(int x, int y, int l, char sym)
{	int d=0;
	for (int j=0;j<l;j++)
	{	d++;
		gotoxy(x,y+d);
		cout<<sym;
	}
}

#endif

