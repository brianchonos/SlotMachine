#include "Brian.h"

main()
{
	int d=0,b=0,g=0,e=0,f=0;
	char c='h',play='l';
	double money=5.00,n=0.05,w=0.5,r=1000;
	cout<<"How much money do you want to start with?";
	cin>>money;
	framedbox(2,2,55,20,'@');
	gotoxy(4,4);
	cout<<"Money: $";
	printf("%.2lf",money);
    for (int i=0;i<3;i++)
    {
    	d=d+15;
    	framedbox(-6+d,10,10,10,'#');
	}
		while (c!='q'&& money>=0)
	 {
	 	 while (kbhit()==0)
	  {
	  	cout<<" ";
	  	b=random(100);
	  	gotoxy(13,15);
	  	cout<<b;
	  	cout<<" ";
	  	e=random(100);
	  	gotoxy(28,15);
	  	cout<<e;
	  	cout<<" ";
	  	f=random(100);
	  	gotoxy(43,15);
	  	cout<<f;
	  	cout<<" ";
	}
		c=getch();
	  	c=getch();
	  	money=money-n;
	  	if (b==e&&b==f&&e==f)
		{
			money=money+r;
			gotoxy(6,6);
			cout<<"You won the jackpot!";
			gotoxy(6,7);
			cout<<"Press any other key than 'q' to play again.";
			cin>>c;
			money=5.00;
		}
		else if (b==e||e==f||b==f)
		{
			money=money+w;
			gotoxy(6,6);
			cout<<"You matched two numbers! You win $0.50"<<endl;
		}
		else if (b!=e||e!=f||b!=f)
		{
			gotoxy(6,6);
			cout<<"                                        ";
			gotoxy(6,7);
			cout<<"                                                ";
		}
		gotoxy(4,4);
	  	cout<<"Money: $";
	  	printf("%.2lf",money);
	}
	
      getch();
}


