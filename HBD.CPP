#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
	sound(262);//c
	delay(300);
	cout<<"\n\n\n\n\n";
	sound(294);//d
	delay(300);
	cout<<"\t\t\t\t$  i  i  i  $";
	sound(262);//c
	delay(300);
	line(256,93,357,93); //--
	//cout<<"\n\t\t\t      i";
	delay(600);
	sound(349);//f
	delay(300);
	line(256,94,256,111);  //l|
	delay(600);
	sound(330);//e
	delay(300);
	line(240,111,376,111); //l--
	cout<<"\n\n\t\t\t\t *   *  *  *";
	delay(600);
	sound(262);//c
	delay(500);
	line(357,94,357,111);//r|
	//line(358,107,375,107);//r--
	delay(600);
	sound(294);//d
	delay(300);
	line(240,112,240,128);//l|
	delay(600);
	sound(262);//c
	delay(300);
	line(224,129,393,129); //l--
	delay(600);
	sound(392);//g
	delay(300);
	line(376,112,376,128); //r|
	//line(377,123,393,123); //r--
	delay(600);
	sound(349);//f
	delay(300);
	line(224,129,224,146);//l|
	delay(600);
	sound(262);//c
	delay(500);
	line(393,129,393,146);//r|
	delay(600);
	sound(262);//c
	delay(300);
	line(224,147,393,147);
	cout<<"\n\n\n\n";
	sound(440);//a
	delay(300);
	cout<<"\t\t\t\t";
	sound(349);//f
	delay(300);
	setcolor(5);
	settextstyle(7,0,4);
	sound(330);//e
	delay(300);
	outtextxy(230,160,"HAPPY");
	delay(700);
	sound(294);//d
	delay(500);
	outtextxy(240,190,"BIRTHDAY");
	delay(700);
	sound(494);//b
	delay(300);
	outtextxy(250,220,"DEAR/NAME");
	setcolor(3);
	sound(440);//a
	delay(300);
	settextstyle(3,0,1);
	delay(700);
	sound(349);//f
	delay(300);
	outtextxy(190,260,"ON THIS SPECIAL OCCASSION");
	sound(392);//g
	delay(300);
	outtextxy(170,280,"I REALLY WISH YOU ALL THE BEST");
	delay(700);
	sound(349);//f
	delay(500);
	outtextxy(160,300,"FOR YOUR LIFE AHEAD.");
	nosound();
	getch();
	return 0;
}
