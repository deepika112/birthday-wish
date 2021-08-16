#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
int main()
{
	int gd=DETECT,gm;
	char name[20];
	initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
	cout<<"\n Enter the name:";
	gets(name);
	sound(262);//c
	delay(300);
	cout<<"\n\n\n";
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
	setcolor(7);
	outtextxy(250,220,name);
	setcolor(2);
	sound(440);//a
	delay(300);
	settextstyle(3,0,1);
	delay(700);
	sound(349);//f
	delay(300);
	outtextxy(190,260,"MAY YOU RECEIVE THE GREATEST OF JOYS");
	sound(392);//g
	delay(300);
	outtextxy(180,280,"AND EVERLASTING BLISS.");//
	delay(700);
	sound(349);//f
	delay(500);
	outtextxy(180,300,"YOU ARE A GIFT, AND YOU DESERVE");
	delay(700);
	outtextxy(160,320,"THE BEST OF EVERYTHING. LOOK FORWARD, BE BRAVE");
	delay(700);
	outtextxy(140,340," AND REMEMBER THAT THE BEST IS YET TO COME. (0_0)");
	delay(700);
	nosound();
	getch();
	return 0;
}
