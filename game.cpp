#include<graphics.h>
#include<stdlib.h>
#include<bios.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<time.h>

 int score=0;

 void game(int level)
 {
    label:

    int left=62, top=95, area, a[9], b[9],i ,j;
    int  key;
    void *p;


    rectangle(10,10,500,60);
    rectangle(11,11,501,61);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(215,25,"HIT IT");


    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(535,25,"MENU");
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
    outtextxy(530,76,"HIGH SCORE");
    outtextxy(520,131,"CURRENT SCORE");
    outtextxy(545,181,"LEVEL");
    outtextxy(530,231,"TIME LEFT");
    outtextxy(520,305,"INSTRUCTIONS");
    line(505,290,630,290);
    line(506,291,631,291);
    outtextxy(510,330,"HIT THE BUTTON");
    outtextxy(510,345,"CORRESPONDING");
    outtextxy(510,360,"TO THE BOX");
    outtextxy(510,375,"NUMBERED FROM");
    outtextxy(510,390,"1 TO 9.");
    outtextxy(510,420,"PRESS ESC KEY");
    outtextxy(510,435,"TO EXIT");

    rectangle(10,62,500,470);
    rectangle(11,63,501,471);
    line(170,62,170,470);
    line(171,63,171,471);
    line(340,62,340,470);
    line(341,63,341,471);
    line(10,198,500,198);
    line(11,199,501,199);
    line(10,334,500,334);
    line(11,335,501,335);
    rectangle(505,10,630,470);
    rectangle(506,11,631,471);
    outtextxy(160,188,"7");
    outtextxy(330,188,"8");
    outtextxy(490,188,"9");
    outtextxy(160,324,"4");
    outtextxy(330,324,"5");
    outtextxy(490,324,"6");
    outtextxy(160,460,"1");
    outtextxy(330,460,"2");
    outtextxy(490,460,"3");

    setcolor(YELLOW);
    circle(92,125,30);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(92,125,YELLOW);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(84,113,2,6);
    fillellipse(100,113,2,6);

    ellipse(92,128,185,355,20,8);
    ellipse(92,128,185,355,20,9);
    ellipse(92,128,185,355,20,10);


    a[0]= 252;
    b[0]= 120;
    a[1]= 252;
    b[1]= 265;
    a[2]= 252;
    b[2]= 410;
    a[3]= 412;
    b[3]= 120;
    a[4]= 412;
    b[4]= 265;
    a[5]= 412;
    b[5]= 410;
    a[6]= 92;
    b[6]= 265;
    a[7]= 92;
    b[7]= 410;
    a[8]= 92;
    b[8]= 120;


    area = imagesize(left, top, left + 60, top + 60);
    p = malloc(area);
    getimage(left, top, left + 60, top + 60, p);
    gotoxy(71,13);
    cout<<level;

    randomize();
    i= random(9);
    putimage(left, top, p, XOR_PUT);
    putimage(a[i]-30 ,b[i]-30 , p, XOR_PUT);
    left=a[i]-30;
    top=b[i]-30;


    gotoxy(71,10);
    cout<<score;

    time_t t, t1, t2, t3;

    t=time(NULL);

    int test=0;

    do
    {
     int x;
     while (bioskey(1) == 0)
     {
       t1=time(NULL);
       x=difftime(t1,t);
       gotoxy(70,16);
       printf("%2d",30-x);

       if(x>=30)
       break;

       i= random(9);
       putimage(left, top, p, XOR_PUT);
       putimage(a[i]-30 ,b[i]-30 , p, XOR_PUT);
       left=a[i]-30;
       top=b[i]-30;
       delay(500);
       test++;
     }

    if(x>=30)
    break;
    key=bioskey(0);

     switch(key)
     {
       case 561:
       if(i==7)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 818:
       if(i==2)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 1075:
       if(i==5)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 1332:
       if(i==6)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 1589:
       if(i==1)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 1846:
       if(i==4)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 2103:
       if(i==8)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 2360:
       if(i==0)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 2617:
       if(i==3)
       {
       sound(1000);
       score++;
       delay(50);
       nosound();
       }
       else
       {
       sound(100);
       delay(50);
       nosound();
       }
       break;

       case 283:
       void start();
       char ch;
       again:
       setcolor(RED);
       setfillstyle(SOLID_FILL,BROWN);
       bar(100,200,440,300);
       rectangle(100,200,440,300);
       settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
       setcolor(WHITE);
       settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
       outtextxy(110,250,"ARE YOU SURE YOU WANT TO EXIT (Y/N)");
       gotoxy(1,1);

       ch = _bios_keybrd(_KEYBRD_READ);

	 if(ch=='y'||ch=='Y')
	 {
	   outtextxy(400,250,"Y");
	   delay(500);
	   exit(0);
	 }

	 if(ch=='n'||ch=='N')
	 {
	 outtextxy(400,250,"N");
	 delay(500);
	 clearviewport();
	 goto label;
	 }
	 else
	 goto again;
      }

    gotoxy(71,10);
    cout<<score;
    i= random(9);
    putimage(left, top, p, XOR_PUT);
    putimage(a[i]-30 ,b[i]-30 , p, XOR_PUT);
    left=a[i]-30;
    top=b[i]-30;
    setcolor(WHITE);

    }while(test<30);

    }



int main(void)
{

   int gdriver = DETECT, gmode, errorcode;


   initgraph(&gdriver, &gmode, "");


   errorcode = graphresult();


   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();

      exit(1);
   }

   int choice;



   while(!kbhit())
   {
   setcolor(WHITE);
   setbkcolor(2);


   setcolor(YELLOW);
   circle(300,100,30);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(300,100,YELLOW);

   setcolor(BLACK);
   setfillstyle(SOLID_FILL,BLACK);
   fillellipse(292,88,2,6);
   fillellipse(308,88,2,6);

   ellipse(300,103,185,355,20,8);
   ellipse(300,103,185,355,20,9);
   ellipse(300,103,185,355,20,10);

   setcolor(WHITE);
   settextstyle(0, HORIZ_DIR,6);
   outtextxy(180,200,"HIT IT");
   settextstyle(DEFAULT_FONT, HORIZ_DIR,2);
   outtextxy(130,400,"(Press any key to start)");
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   rectangle(0,0,639,479);
   }
   sound(500);
   delay(100);
   nosound();
   clearviewport();
   setcolor(WHITE);

   getch();

   do
   {
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
   outtextxy(200,50,"HIT IT");
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
   outtextxy(200,150,"1.NEW GAME");
   outtextxy(200,200,"2.INSTRUCTIONS");
   outtextxy(200,250,"3.CREDITS");
   outtextxy(200,300,"4.EXIT");
   rectangle(0,0,639,479);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
   outtextxy(175,372,"PLEASE ENTER YOUR CHOICE(1-4):");
   gotoxy(53,24);


   choice = _bios_keybrd(_KEYBRD_READ);

   switch(choice)
   {
   case 561:sound(500);
	   delay(100);
	   nosound();
	   clearviewport();

	   for(int i=1,r=10;;i++,r+5)
	   {
	   game(i);

	   if(score>=r)
	   {
	   setcolor(RED);
	   setfillstyle(SOLID_FILL,BROWN);
	   bar(130,200,390,300);
	   rectangle(130,200,390,300);
	   settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
	   setcolor(WHITE);
	   outtextxy(145,240,"CONGRATULATIONS");
	   delay(2000);
	   clearviewport();
	   setcolor(RED);
	   setfillstyle(SOLID_FILL,BROWN);
	   bar(100,200,500,300);
	   rectangle(100,200,500,300);
	   settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
	   setcolor(WHITE);
	   outtextxy(110,240,"GET READY FOR NEXT LEVEL");
	   delay(2000);
	   clearviewport();
	   score=0;
	   }


	   else
	   {
	   setcolor(RED);
	   setfillstyle(SOLID_FILL,BROWN);
	   bar(130,200,390,300);
	   rectangle(130,200,390,300);
	   settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
	   setcolor(WHITE);
	   outtextxy(190,240,"TRY AGAIN");
	   delay(2000);
	   score=0;
	   clearviewport();
	   break;
	   }
	   }
	   break;


   case 818: sound(500);
	     delay(100);
	     nosound();
	     clearviewport();
	     settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	     outtextxy(119,50,"INSTRUCTIONS");
	     settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
	     outtextxy(200,200,"HIT THE BUTTON");
	     outtextxy(200,250,"CORRESPONDING");
	     outtextxy(200,300,"TO THE BOX");
	     outtextxy(200,350,"NUMBERED FROM");
	     outtextxy(200,400,"1 TO 9.");
	     rectangle(0,0,639,479);
	     getch();
	     clearviewport();
	     break;

   case 1075:sound(500);
	    delay(100);
	    nosound();
	    clearviewport();
	    for(int j=0;j<4;j++)
	    {
	    clearviewport();
	    rectangle(0,0,639,479);
	    settextstyle(DEFAULT_FONT, HORIZ_DIR, 1+j);
	    outtextxy(260-50*j,480-150*j,"Pawneet Singh");
	    outtextxy(260-50*j,580-150*j," Ajay Dahiya");
	    outtextxy(260-50*j,680-150*j,"Rahul Bansal");
	    outtextxy(260-50*j,780-150*j," Keshav Goel");
	    delay(1000);
	    }
	    delay(2000);;
	    clearviewport();
	    break;

   case 1332:sound(500);
	     delay(100);
	     nosound();
	     exit(0);

   default: clearviewport();
	    break;

   }
   }while(choice!=4);

   getch();
   closegraph();
   return 0;
}