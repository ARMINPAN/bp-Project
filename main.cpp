#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include<windows.h>
int scoreboard=1;
int timelimiter=1;
int ctrlz=1;
int clockk=1;
int save=0;
int armin=0;
//////////////////////
time_t startlimit,ennnddlimit;
////////////////////////
int bargasht=0;
int barkhorddddd=0;
int ejazez=0;
//#include "saaaaat.h"
int tamomnashe=0;
int sadomtime=0;
int sanietime=0;
int mintime =0;
bool cheatcode=1;
int emtiaz[2]={0,0};
int narizagha;
int narizagha1;
int aaa=0;
time_t start1,ennndd1;
int s[1000000];
int a[1000000];

int poreh[6][7];
int k1=0;
int k2=0;
int k3=0;
int k4=0;
int k5=0;
int k6=0;
int k7=0;
using namespace std;
int j = 0 ;
/////////////////////////////jadval emtiaz
void jadvalemtiaz(int rang[]){

    setfillstyle(SOLID_FILL,BLACK);
    bar(1050,20,1350,80);
    setlinestyle(0,0,5);
    setcolor(DARKGRAY);
    line(1200,20,1200,80);
    line(1050,80,1350,80);
    line(1050,20,1050,80);
    line(1350,20,1350,80);
    setlinestyle(0,0,14);
    line(1055,20,1345,20);
    settextstyle(8,0, 1);
    setbkcolor(DARKGRAY);
    setcolor(LIGHTGRAY);
    outtextxy(1150,5,"SCOREBORD");
    char a1[20],a2[20];
    setbkcolor(BLACK);
    if(scoreboard==1)
    {
        sprintf(a1,"%d",emtiaz[0]);
    sprintf(a2,"%d",emtiaz[1]);
     setcolor(rang[0]);
    outtextxy(1175,50,a2);
    setcolor(rang[1]);
    outtextxy(1330,50,a1);
    setcolor(rang[0]);
    outtextxy(1060,30,"PLAYER 1:");
    setcolor(rang[1]);
    outtextxy(1215,30,"PLAYER 2:");
    }
    else
        outtextxy(1150,20,"DEACTIVATED");
}
///////////////////////setting
void setting(int rang[])
{
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    bar(1100,300,1350,650);
    setcolor(BLACK);
    settextstyle(3,0,1);
    setbkcolor(LIGHTBLUE);
    outtextxy(1110,310,"CHEATCODE : hesoyam :0)");
    outtextxy(1110,370,"DEACTIVE THE CLOCK : ");
    setfillstyle(SOLID_FILL,WHITE);
    if(clockk==0)
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(1120,400,1140,420);
    setfillstyle(SOLID_FILL,WHITE);
    outtextxy(1110,430,"DEACTIVE THE CTRL+Z : ");
    if(ctrlz==0)
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(1120,460,1140,480);
    setfillstyle(SOLID_FILL,WHITE);
    outtextxy(1109,490,"DEACTIVE SCOREBOARD :");
    if(scoreboard==0)
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(1120,520,1140,540);
    setfillstyle(SOLID_FILL,WHITE);
    outtextxy(1109,540,"DEACTIVE TIMELIMITER :");
    if(timelimiter==0)
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    bar(1120,570,1140,590);
    setfillstyle(SOLID_FILL,WHITE);
    outtextxy(1109,620,"SAVE :");
    bar(1180,620,1200,640);
    setbkcolor(BLACK);
    while(!kbhit()&&save==0){
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            int x=mousex();
            int y=mousey();
            clearmouseclick(WM_LBUTTONDOWN);
            if(x>=1120&&x<=1140&&y<=420&&y>=400)
            {
                if(clockk==1&&armin==0)
                {
                clockk=0;
                armin=1;
                setfillstyle(SOLID_FILL,LIGHTGREEN);
                bar(1120,400,1140,420);
                setfillstyle(SOLID_FILL,rang[0]);
                }
                if(clockk==0&&armin==0)
                {
                    armin=1;
                clockk=1;
                setfillstyle(SOLID_FILL,WHITE);
                bar(1120,400,1140,420);
                setfillstyle(SOLID_FILL,rang[0]);
                }
            }
            if(x>=1120&&x<=1140&&y<=480&&y>=460)
            {
                if(ctrlz==1&&armin==0)
                {
                    armin=1;
                ctrlz=0;
                setfillstyle(SOLID_FILL,LIGHTGREEN);
                bar(1120,460,1140,480);
                setfillstyle(SOLID_FILL,rang[0]);
                }
                if(ctrlz==0&&armin==0)
                     {
                         armin=1;
                ctrlz=1;
                setfillstyle(SOLID_FILL,WHITE);
                bar(1120,460,1140,480);
                setfillstyle(SOLID_FILL,rang[0]);
                }
            }
            if(x>=1120&&x<=1140&&y<=540&&y>=520)
            {
                if(scoreboard==1&&armin==0)
                {
                    armin=1;
                scoreboard=0;
                setfillstyle(SOLID_FILL,LIGHTGREEN);
                bar(1120,520,1140,540);
                jadvalemtiaz(rang);
                setfillstyle(SOLID_FILL,rang[0]);
                }
                if(scoreboard==0&&armin==0){
                        armin=1;
                scoreboard=1;
                setfillstyle(SOLID_FILL,WHITE);
                bar(1120,520,1140,540);
                jadvalemtiaz(rang);
                setfillstyle(SOLID_FILL,rang[0]);
                }
            }
            if(x>=1120&&x<=1140&&y<=590&&y>=570)
            {
                if(timelimiter==1&&armin==0){
                        armin=1;
                timelimiter=0;
                setfillstyle(SOLID_FILL,LIGHTGREEN);
                bar(1120,570,1140,590);
                setfillstyle(SOLID_FILL,rang[0]);
                }
                if(timelimiter==0&&armin==0){
                    armin=1;
                timelimiter=1;
                setfillstyle(SOLID_FILL,WHITE);
                bar(1120,570,1140,590);
                setfillstyle(SOLID_FILL,rang[0]);
                }
            }
            if(x>=1180&&x<=1200&&y<=640&&y>=620)
            {
                save=1;
                setfillstyle(SOLID_FILL,LIGHTGREEN);
                bar(1180,620,1200,640);
                setfillstyle(SOLID_FILL,rang[0]);
            }

        }
        armin=0;
    }
  setfillstyle(SOLID_FILL,COLOR(255,153,102));
    bar(1100,300,1350,650);
    setfillstyle(SOLID_FILL,rang[0]);
    setlinestyle(0,0,5);
    settextstyle(8,0, 5);
    save=0;
}

//////////////////mokhtasast mouse
int mousepeidakon(int xmouse){
    if(125<xmouse&&xmouse<225)
        return 1;
    if(225<xmouse&&xmouse<325)
        return 2;
    if(325<xmouse&&xmouse<425)
        return 3;
    if(425<xmouse&&xmouse<525)
        return 4;
    if(525<xmouse&&xmouse<625)
        return 5;
    if(625<xmouse&&xmouse<725)
        return 6;
    if(725<xmouse&&xmouse<825)
        return 7;
}


//////////////////radif

void dayerebendaz(int radif,int ooo,int rang[],int tedadchecking1){
//cout<<rang[0];
barkhorddddd=0;
getimage(0,0,1400,700,s);
    if(radif==1)
    {
         //cout <<"1";
        //cout <<tedadchecking1;
            for(int i = 100;i<=(615-((tedadchecking1-1)*100));i=i+(103-(tedadchecking1-1)*20)){
delay(50);
                             if(i==615)
                            {cleardevice();}
                    if(ooo%2==1)
                    {

                            setfillstyle(SOLID_FILL,rang[0]);
               setcolor(rang[0]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";

               //setwritemode(1);

                    putimage(0,0,s,0);
                 circle(175,i,45);
                 floodfill(175,i,rang[0]);
                 if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                                        i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                      /*if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);
                                circle(175,j,45);
                                floodfill(175,j,rang[0]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(175,k,45);
                                floodfill(175,k,rang[0]);
                                    }
                                }
                            }
                        }*/

                    }
                    if(ooo%2==0){

                setfillstyle(SOLID_FILL,rang[1]);
               setcolor(rang[1]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                 putimage(0,0,s,0);
                 circle(175,i,45);
                 floodfill(175,i,rang[1]);
                    if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                       /*if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(175,j,45);
                                floodfill(175,j,rang[1]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(175,k,45);
                                floodfill(175,k,rang[1]);
                                    }
                                }
                            }
                        }*/
                    }
        }


    }
     if(radif==2)
    {
         //cout <<"1";
            for(int i = 100;i<=615-((tedadchecking1-1)*100);i=i+(103-(tedadchecking1-1)*20)){
delay(50);

                          if(i==615)
                            {cleardevice();}
                    if(ooo%2==1)
                    {
                        setfillstyle(SOLID_FILL,rang[0]);
               setcolor(rang[0]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                 putimage(0,0,s,0);
                 circle(276,i,45);
                 floodfill(276,i,rang[0]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(276,j,45);
                                floodfill(276,j,rang[0]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(276,k,45);
                                floodfill(276,k,rang[0]);
                                    }
                                }
                            }
                        }*/
                    }
                    if(ooo%2==0){

                                setfillstyle(SOLID_FILL,rang[1]);
               setcolor(rang[1]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                 putimage(0,0,s,0);
                 circle(276,i,45);
                 floodfill(276,i,rang[1]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(276,j,45);
                                floodfill(276,j,rang[1]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(276,k,45);
                                floodfill(276,k,rang[1]);
                                    }
                                }
                            }
                        }*/
                    }

        }

    }
     if(radif==3)
    {

         //cout <<"1";
            for(int i = 100;i<=615-((tedadchecking1-1)*100);i=i+(103-(tedadchecking1-1)*20)){
delay(50);
                        if(i==615)
                            {cleardevice();}
                    if(ooo%2==1)
                    {
                        setfillstyle(SOLID_FILL,rang[0]);
               setcolor(rang[0]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                 putimage(0,0,s,0);
                 circle(377,i,45);
                 floodfill(377,i,rang[0]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(377,j,45);
                                floodfill(377,j,rang[0]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(377,k,45);
                                floodfill(377,k,rang[0]);
                                    }
                                }
                            }
                        }*/
                    }
                    if(ooo%2==0){

                                setfillstyle(SOLID_FILL,rang[1]);
               setcolor(rang[1]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                 putimage(0,0,s,0);
                 circle(377,i,45);
                 floodfill(377,i,rang[1]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                       /*if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(377,j,45);
                                floodfill(377,j,rang[1]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(377,k,45);
                                floodfill(377,k,rang[1]);
                                    }
                                }
                            }
                        }*/
                    }

        }
    }
     if(radif==4)
    {
         //cout <<"1";
            for(int i = 100;i<=615-((tedadchecking1-1)*100);i=i+(103-(tedadchecking1-1)*20)){
delay(50);
if(i==615)
                            {cleardevice();}
                    if(ooo%2==1)
                    {

                        setfillstyle(SOLID_FILL,rang[0]);
               setcolor(rang[0]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                 putimage(0,0,s,0);
                 circle(478,i,45);
                 floodfill(478,i,rang[0]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                       /*if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(478,j,45);
                                floodfill(478,j,rang[0]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(478,k,45);
                                floodfill(478,k,rang[0]);
                                    }
                                }
                            }
                        }*/
                    }
                    if(ooo%2==0){

                                setfillstyle(SOLID_FILL,rang[1]);
               setcolor(rang[1]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                 putimage(0,0,s,0);
                 circle(478,i,45);
                 floodfill(478,i,rang[1]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(478,j,45);
                                floodfill(478,j,rang[1]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(478,k,45);
                                floodfill(478,k,rang[1]);
                                    }
                                }
                            }
                        }*/
                    }

        }
    }
     if(radif==5)
    {
         //cout <<"1";
            for(int i = 100;i<=615-((tedadchecking1-1)*100);i=i+(103-(tedadchecking1-1)*20)){
delay(50);
                                    if(i==615){
                                            cleardevice();
                                    }
                    if(ooo%2==1)
                    {

                        setfillstyle(SOLID_FILL,rang[0]);
               setcolor(rang[0]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                putimage(0,0,s,0);
                 circle(579,i,45);
                 floodfill(579,i,rang[0]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(579,j,45);
                                floodfill(579,j,rang[0]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(579,k,45);
                                floodfill(579,k,rang[0]);
                                    }
                                }
                            }
                        }*/
                    }
                    if(ooo%2==0){

                                setfillstyle(SOLID_FILL,rang[1]);
               setcolor(rang[1]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
             //   setwritemode(1);
                putimage(0,0,s,0);
                 circle(579,i,45);
                 floodfill(579,i,rang[1]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }

                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);
                               // putimage(0,0,s,0);
                                circle(579,j,45);
                                floodfill(579,j,rang[1]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);
                               // putimage(0,0,s,0);
                                circle(579,k,45);
                                floodfill(579,k,rang[1]);
                                    }
                                }
                            }
                        }*/
                    }

        }
    }
     if(radif==6)
    {
         //cout <<"1";
            for(int i = 100;i<=615-((tedadchecking1-1)*100);i=i+(103-(tedadchecking1-1)*20)){
delay(50);

                    if(ooo%2==1)
                    {
                         if(i==615)
                            {cleardevice();}
                        setfillstyle(SOLID_FILL,rang[0]);
               setcolor(rang[0]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                 putimage(0,0,s,0);
                 circle(680,i,45);
                 floodfill(680,i,rang[0]);
                 if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                     /*  if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(680,j,45);
                                floodfill(680,j,rang[0]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(680,k,45);
                                floodfill(680,k,rang[0]);
                                    }
                                }
                            }
                        }*/
                    }
                    if(ooo%2==0){
                             if(i==615)
                            {cleardevice();}
                                setfillstyle(SOLID_FILL,rang[1]);
               setcolor(rang[1]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
               //setwritemode(1);
                   putimage(0,0,s,0);
                 circle(680,i,45);
                 floodfill(680,i,rang[1]);
                 if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }

                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);
                                circle(680,j,45);
                                floodfill(680,j,rang[1]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(680,k,45);
                                floodfill(680,k,rang[1]);
                                    }
                                }
                            }
                        }*/
                    }

        }
    }
     if(radif==7)
    {

         //cout <<"1";
            for(int i = 100;i<=615-((tedadchecking1-1)*100);i=i+(103-(tedadchecking1-1)*20)){
delay(50);
                    if(ooo%2==1)
                    {
         if(i==615)
                            {cleardevice();}
                        setfillstyle(SOLID_FILL,rang[0]);
               setcolor(rang[0]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";
                 putimage(0,0,s,0);
                 circle(781,i,45);
                 floodfill(781,i,rang[0]);
                 if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }

                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(781,j,45);
                                floodfill(781,j,rang[0]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[0]);

                                circle(781,k,45);
                                floodfill(781,k,rang[0]);
                                    }
                                }
                            }
                        }*/

                    }
                    if(ooo%2==0){
         if(i==615)
                            {cleardevice();}
                                setfillstyle(SOLID_FILL,rang[1]);
               setcolor(rang[1]);
                //setfillstyle(SOLID_FILL,RED);
                //cout << "1";

                 putimage(0,0,s,0);
                 circle(781,i,45);
                 floodfill(781,i,rang[1]);
if((615-((tedadchecking1-1)*100))<=i&&barkhorddddd==0)
                    {
                       i=i-2*(103-(tedadchecking1-1)*20);
                    barkhorddddd=1;
                    }
                      /* if((615-((tedadchecking1-1)*100))<=i)
                        {
                            for(int j = (615-((tedadchecking1-1)*100)) ; j >= (615-((tedadchecking1-1)*100))-25 ;j=j-1)
                            {

                                setfillstyle(SOLID_FILL,rang[1]);
                                setcolor(rang[1]);

                                circle(781,j,45);
                                floodfill(781,j,rang[1]);
                                if(j==(615-((tedadchecking1-1)*100))-25)
                                {
                                    for(int k = (615-((tedadchecking1-1)*100))-25 ; k<=(615-((tedadchecking1-1)*100)) ;k=k+1)
                                    {
                                        setfillstyle(SOLID_FILL,rang[0]);
                                setcolor(rang[1]);

                                circle(781,k,45);
                                floodfill(781,k,rang[1]);
                                    }
                                }
                            }
                        }*/

                    }

        }
    }




}

//////////////////charchoob
void charchob(){


    setlinestyle(0,0,30);
    setfillstyle(SOLID_FILL,COLOR(255,153,102));
    rectangle(100,50,850,675);
    floodfill(250,250,COLOR(255,255,153));
    setcolor(LIGHTBLUE);
    rectangle(100,50,850,675);
    setfillstyle(SOLID_FILL,COLOR(153,179,255));
   bar(100,50,850,675);
   floodfill(250,250,COLOR(153,179,255));


}
//////////////////charchoob
void charchob2(){


    setlinestyle(0,0,30);
    setfillstyle(SOLID_FILL,COLOR(255,153,102));
    rectangle(100,50,850,675);
    floodfill(250,250,COLOR(255,255,153));
    setlinestyle(0,0,5);

}
///////////////////etmam bazi

////////////////gomboli
void gomboli(){
    setcolor(COLOR(212,58,64));
    setfillstyle(SOLID_FILL,COLOR(64,56,92));
    setlinestyle(0,0,5);
   fillellipse(175,110,50,50);
     fillellipse(276,110,50,50);
     fillellipse(377,110,50,50);
     fillellipse(478,110,50,50);
     fillellipse(579,110,50,50);
     fillellipse(680,110,50,50);
     fillellipse(781,110,50,50);
     fillellipse(175,211,50,50);
     fillellipse(175,312,50,50);
     fillellipse(175,413,50,50);
     fillellipse(175,514,50,50);
     fillellipse(175,615,50,50);

     fillellipse(276,211,50,50);
     fillellipse(276,312,50,50);
    fillellipse(276,413,50,50);
    fillellipse(276,514,50,50);
    fillellipse(276,615,50,50);

    fillellipse(377,211,50,50);
    fillellipse(377,312,50,50);
    fillellipse(377,413,50,50);
    fillellipse(377,514,50,50);
    fillellipse(377,615,50,50);


    fillellipse(478,211,50,50);
    fillellipse(478,312,50,50);
    fillellipse(478,413,50,50);
    fillellipse(478,514,50,50);
    fillellipse(478,615,50,50);


    fillellipse(579,211,50,50);
    fillellipse(579,312,50,50);
    fillellipse(579,413,50,50);
    fillellipse(579,514,50,50);
    fillellipse(579,615,50,50);


    fillellipse(680,211,50,50);
    fillellipse(680,312,50,50);
    fillellipse(680,413,50,50);
    fillellipse(680,514,50,50);
    fillellipse(680,615,50,50);

    fillellipse(781,211,50,50);
    fillellipse(781,312,50,50);
    fillellipse(781,413,50,50);
    fillellipse(781,514,50,50);
    fillellipse(781,615,50,50);
}
//////////////////rangha
void rangha(){
setfillstyle(SOLID_FILL,RED);
bar(110,60,490,360);

setfillstyle(SOLID_FILL,YELLOW);
bar(510,60,890,360);

setfillstyle(SOLID_FILL,GREEN);
bar(910,60,1290,360);

setfillstyle(SOLID_FILL,LIGHTBLUE);
bar(110,380,490,680);

setfillstyle(SOLID_FILL,LIGHTGREEN);
bar(510,380,890,680);

setfillstyle(SOLID_FILL,BROWN);
bar(910,380,1290,680);

}
int rangmouse(int xxmouse,int yymouse){
    if(110<xxmouse&&xxmouse<490&&60<yymouse&&yymouse<360)
        return 4;
    if(510<xxmouse&&xxmouse<890&&60<yymouse&&yymouse<360)
        return 14;
    if(910<xxmouse&&xxmouse<1290&&60<yymouse&&yymouse<360)
        return 2;
    if(110<xxmouse&&xxmouse<490&&380<yymouse&&yymouse<680)
        return 9;
    if(510<xxmouse&&xxmouse<890&&380<yymouse&&yymouse<680)
        return 10;
    if(910<xxmouse&&xxmouse<1290&&380<yymouse&&yymouse<680)
        return 6;

}
void nobat(int ooo ,int rang[]){
    setcolor(BLACK);
    settextstyle(8,0, 1);
if(ooo%2==0)
{
    setcolor(rang[0]);
   // rang[0];
   if(rang[0]==4)
       outtextxy(10,10,"Player 1 It`s Red`s Turn              ");
   if(rang[0]==14)
        outtextxy(10,10,"Player 1 It`s Yellow`s Turn        ");
   if(rang[0]==2)
    outtextxy(10,10,"Player 1 It`s Green`s Turn       ");
   if(rang[0]==9)
    outtextxy(10,10,"Player 1 It`s Blue`s Turn        ");
   if(rang[0]==10)
    outtextxy(10,10,"Player 1 It`s Lightgreen`s Turn        ");
    if(rang[0]==6)
    outtextxy(10,10,"Player 1 It`s Brown`s Turn                 ");
}
if(ooo%2==1)
{
     setcolor(rang[1]);
    //rang[1];
     if(rang[1]==4)
     outtextxy(10,10,"Player 2 It`s Red`s Turn                   ");
   if(rang[1]==14)
        outtextxy(10,10,"Player 2 It`s Yellow`s Turn            ");
   if(rang[1]==2)
    outtextxy(10,10,"Player 2 It`s Green`s Turn                   ");
   if(rang[1]==9)
    outtextxy(10,10,"Player 2 It`s Blue`s Turn                           ");
   if(rang[1]==10)
    outtextxy(10,10,"Player 2 It`s Lightgreen`s Turn                    ");
    if(rang[1]==6)
    outtextxy(10,10,"Player 2 It`s Brown`s Turn                        ");

}

}

//////////////////////////ja nakon ja nakon

void pore(int radif,int ooo){
    if(radif==0){
            if(ooo%2==1)
        poreh[k1][radif]=1;
    if(ooo%2==0)
        poreh[k1][radif]=2;
        k1++;
    }
    if(radif==1){
                 if(ooo%2==1)
        poreh[k2][radif]=1;
    if(ooo%2==0)
        poreh[k2][radif]=2;
        k2++;
    }
    if(radif==2){
                 if(ooo%2==1)
        poreh[k3][radif]=1;
    if(ooo%2==0)
        poreh[k3][radif]=2;
        k3++;
    }
    if(radif==3){
                 if(ooo%2==1)
        poreh[k4][radif]=1;
    if(ooo%2==0)
        poreh[k4][radif]=2;
        k4++;
    }
    if(radif==4){
                 if(ooo%2==1)
        poreh[k5][radif]=1;
    if(ooo%2==0)
        poreh[k5][radif]=2;
        k5++;
    }
    if(radif==5){
                     if(ooo%2==1)
        poreh[k6][radif]=1;
    if(ooo%2==0)
        poreh[k6][radif]=2;
            k6++;
    }
    if(radif==6){
                 if(ooo%2==1)
        poreh[k7][radif]=1;
    if(ooo%2==0)
        poreh[k7][radif]=2;
        k7++;
    }

}
//////////check edad ja nakon japor nakon
int tedadchecking=0;
int checkpore(int radif){
    tedadchecking=0;
for(int iiii=0;iiii<6;iiii++)
{
    if(poreh[iiii][radif-1]==1||poreh[iiii][radif-1]==2)
        tedadchecking++;
}
return tedadchecking;
}
void loading(){
      settextstyle(8,0, 9);
        setcolor(COLOR(200,150,0));
outtextxy(170,100,"--> 4 IN A ROW <--");
  settextstyle(8,0, 3);
outtextxy(10,10,"ALL RIGHTS RESERVED TO PANPAN");
        settextstyle(8,0, 3);
        setcolor(COLOR(255,200,170));
outtextxy(620,590,"LOADING...");

setfillstyle(SOLID_FILL,RED);
bar(500,630,860,670);
setcolor(COLOR(255,255,153));
rectangle(500,630,860,670);
for(int i = 1 ; i <= 6 ;i++){
          settextstyle(8,0, 9);
        setcolor(i);
outtextxy(170,100,"--> 4 IN A ROW <--");
settextstyle(8,0, 3);
outtextxy(10,10,"ALL RIGHTS RESERVED TO PANPAN");
    delay(700);
    setfillstyle(SOLID_FILL,LIGHTRED);
    bar(502,633,498+i*60,668);
}
}

///////////////////////////////////////////////////////////////////////////////////////////////bordan
void barandesotoni(int radif,int ooo,int rang[]){

                settextstyle(8,0, 5);
        setcolor(COLOR(102, 153, 255));
       if((poreh[0][radif]==1&&poreh[1][radif]==1&&poreh[2][radif]==1&&poreh[3][radif]==1)||(poreh[0][radif]==2&&poreh[1][radif]==2&&poreh[2][radif]==2&&poreh[3][radif]==2)){
            //cout << ooo;

            if(ooo%2==1)
            {
            setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {

                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
   if((poreh[1][radif]==1&&poreh[2][radif]==1&&poreh[3][radif]==1&&poreh[4][radif]==1)||(poreh[1][radif]==2&&poreh[2][radif]==2&&poreh[3][radif]==2&&poreh[4][radif]==2)){
//cout << ooo;
            if(ooo%2==1)
            {

                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {

                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
    if((poreh[2][radif]==1&&poreh[3][radif]==1&&poreh[4][radif]==1&&poreh[5][radif]==1)||(poreh[2][radif]==2&&poreh[3][radif]==2&&poreh[4][radif]==2&&poreh[5][radif]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                delay(2000);
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {

                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }

}
///////////////////////////////
void barandesotonimajazi(){

       if((poreh[0][0]==1&&poreh[1][0]==1&&poreh[2][0]==1&&poreh[3][0]==1)||(poreh[0][0]==2&&poreh[1][0]==2&&poreh[2][0]==2&&poreh[3][0]==2)){
            //cout << ooo;
           aaa=1;
    }
        if((poreh[0][1]==1&&poreh[1][1]==1&&poreh[2][1]==1&&poreh[3][1]==1)||(poreh[0][1]==2&&poreh[1][1]==2&&poreh[2][1]==2&&poreh[3][1]==2)){
            //cout << ooo;
            aaa=1;
    }
        if((poreh[0][2]==1&&poreh[1][2]==1&&poreh[2][2]==1&&poreh[3][2]==1)||(poreh[0][2]==2&&poreh[1][2]==2&&poreh[2][2]==2&&poreh[3][2]==2)){
            //cout << ooo;
            aaa=1;
    }
        if((poreh[0][3]==1&&poreh[1][3]==1&&poreh[2][3]==1&&poreh[3][3]==1)||(poreh[0][3]==2&&poreh[1][3]==2&&poreh[2][3]==2&&poreh[3][3]==2)){
            aaa=1;
    }
        if((poreh[0][4]==1&&poreh[1][4]==1&&poreh[2][4]==1&&poreh[3][4]==1)||(poreh[0][4]==2&&poreh[1][4]==2&&poreh[2][4]==2&&poreh[3][4]==2)){
                aaa=1;
    }
        if((poreh[0][5]==1&&poreh[1][5]==1&&poreh[2][5]==1&&poreh[3][5]==1)||(poreh[0][5]==2&&poreh[1][5]==2&&poreh[2][5]==2&&poreh[3][5]==2)){
            aaa=1;
    }
        if((poreh[0][6]==1&&poreh[1][6]==1&&poreh[2][6]==1&&poreh[3][6]==1)||(poreh[0][6]==2&&poreh[1][6]==2&&poreh[2][6]==2&&poreh[3][6]==2)){
            aaa=1;
    }
   if((poreh[1][0]==1&&poreh[2][0]==1&&poreh[3][0]==1&&poreh[4][0]==1)||(poreh[1][0]==2&&poreh[2][0]==2&&poreh[3][0]==2&&poreh[4][0]==2)){
            aaa=1;
    }
       if((poreh[1][1]==1&&poreh[2][1]==1&&poreh[3][1]==1&&poreh[4][1]==1)||(poreh[1][1]==2&&poreh[2][1]==2&&poreh[3][1]==2&&poreh[4][1]==2)){
            aaa=1;
    }
       if((poreh[1][2]==1&&poreh[2][2]==1&&poreh[3][2]==1&&poreh[4][2]==1)||(poreh[1][2]==2&&poreh[2][2]==2&&poreh[3][2]==2&&poreh[4][2]==2)){
            aaa=1;
    }
       if((poreh[1][3]==1&&poreh[2][3]==1&&poreh[3][3]==1&&poreh[4][3]==1)||(poreh[1][3]==2&&poreh[2][3]==2&&poreh[3][3]==2&&poreh[4][3]==2)){
            aaa=1;
    }
       if((poreh[1][4]==1&&poreh[2][4]==1&&poreh[3][4]==1&&poreh[4][4]==1)||(poreh[1][4]==2&&poreh[2][4]==2&&poreh[3][4]==2&&poreh[4][4]==2)){
          aaa=1;
    }
       if((poreh[1][5]==1&&poreh[2][5]==1&&poreh[3][5]==1&&poreh[4][5]==1)||(poreh[1][5]==2&&poreh[2][5]==2&&poreh[3][5]==2&&poreh[4][5]==2)){
          aaa=1;
    }
       if((poreh[1][6]==1&&poreh[2][6]==1&&poreh[3][6]==1&&poreh[4][6]==1)||(poreh[1][6]==2&&poreh[2][6]==2&&poreh[3][6]==2&&poreh[4][6]==2)){
          aaa=1;
    }
    if((poreh[2][0]==1&&poreh[3][0]==1&&poreh[4][0]==1&&poreh[5][0]==1)||(poreh[2][0]==2&&poreh[3][0]==2&&poreh[4][0]==2&&poreh[5][0]==2)){
          aaa=1;
    }
    if((poreh[2][1]==1&&poreh[3][1]==1&&poreh[4][1]==1&&poreh[5][0]==1)||(poreh[2][1]==2&&poreh[3][1]==2&&poreh[4][1]==2&&poreh[5][1]==2)){
           aaa=1;
    if((poreh[2][2]==1&&poreh[3][2]==1&&poreh[4][2]==1&&poreh[5][2]==1)||(poreh[2][2]==2&&poreh[3][2]==2&&poreh[4][2]==2&&poreh[5][2]==2)){
      aaa=1;
    }
    if((poreh[2][3]==1&&poreh[3][3]==1&&poreh[4][3]==1&&poreh[5][3]==1)||(poreh[2][3]==2&&poreh[3][3]==2&&poreh[4][3]==2&&poreh[5][3]==2)){
            aaa=1;
    }
    if((poreh[2][4]==1&&poreh[3][4]==1&&poreh[4][4]==1&&poreh[5][4]==1)||(poreh[2][4]==2&&poreh[3][4]==2&&poreh[4][4]==2&&poreh[5][4]==2)){
            aaa=1;
    }
    if((poreh[2][5]==1&&poreh[3][5]==1&&poreh[4][5]==1&&poreh[5][5]==1)||(poreh[2][5]==2&&poreh[3][5]==2&&poreh[4][5]==2&&poreh[5][5]==2)){
        aaa=1;
    }
if((poreh[2][6]==1&&poreh[3][6]==1&&poreh[4][6]==1&&poreh[5][6]==1)||(poreh[2][6]==2&&poreh[3][6]==2&&poreh[4][6]==2&&poreh[5][6]==2)){
        aaa=1;
    }
}}
///////////////////////////////
void bordanradifi(int ooo,int rang[]){

if((poreh[0][0]==1&&poreh[0][1]==1&&poreh[0][2]==1&&poreh[0][3]==1)||(poreh[0][0]==2&&poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][3]==2)){
            //cout << ooo;
            if(ooo%2==1)
            {
            setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
   if((poreh[0][1]==1&&poreh[0][2]==1&&poreh[0][3]==1&&poreh[0][4]==1)||(poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][4]==2)){
//cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
    if((poreh[0][2]==1&&poreh[0][3]==1&&poreh[0][4]==1&&poreh[0][5]==1)||(poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][5]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
                if((poreh[0][3]==1&&poreh[0][4]==1&&poreh[0][5]==1&&poreh[0][6]==1)||(poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][5]==2&&poreh[0][6]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
                }
            //////////////////////////////////////////////////////////
            if((poreh[1][0]==1&&poreh[1][1]==1&&poreh[1][2]==1&&poreh[1][3]==1)||(poreh[1][0]==2&&poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][3]==2)){
            //cout << ooo;
            if(ooo%2==1)
            {
            setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
   if((poreh[1][1]==1&&poreh[1][2]==1&&poreh[1][3]==1&&poreh[1][4]==1)||(poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][4]==2)){
//cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
    if((poreh[1][2]==1&&poreh[1][3]==1&&poreh[1][4]==1&&poreh[1][5]==1)||(poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][5]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
                if((poreh[1][3]==1&&poreh[1][4]==1&&poreh[1][5]==1&&poreh[1][6]==1)||(poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][5]==2&&poreh[1][6]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
                }
            ///////////////////////////////////////////////////////2
            if((poreh[2][0]==1&&poreh[2][1]==1&&poreh[2][2]==1&&poreh[2][3]==1)||(poreh[2][0]==2&&poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][3]==2)){
            //cout << ooo;
            if(ooo%2==1)
            {
            setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
   if((poreh[2][1]==1&&poreh[2][2]==1&&poreh[2][3]==1&&poreh[2][4]==1)||(poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][4]==2)){
//cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
    if((poreh[2][2]==1&&poreh[2][3]==1&&poreh[2][4]==1&&poreh[2][5]==1)||(poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][5]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
                if((poreh[2][3]==1&&poreh[2][4]==1&&poreh[2][5]==1&&poreh[2][6]==1)||(poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][5]==2&&poreh[2][6]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
                }
            //////////////////////////////////////3
            if((poreh[3][0]==1&&poreh[3][1]==1&&poreh[3][2]==1&&poreh[3][3]==1)||(poreh[3][0]==2&&poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][3]==2)){
            //cout << ooo;
            if(ooo%2==1)
            {
            setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
   if((poreh[3][1]==1&&poreh[3][2]==1&&poreh[3][3]==1&&poreh[3][4]==1)||(poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][4]==2)){
//cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
    if((poreh[3][2]==1&&poreh[3][3]==1&&poreh[3][4]==1&&poreh[3][5]==1)||(poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][5]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
                if((poreh[3][3]==1&&poreh[3][4]==1&&poreh[3][5]==1&&poreh[3][6]==1)||(poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][5]==2&&poreh[3][6]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
                }
            if((poreh[4][0]==1&&poreh[4][1]==1&&poreh[4][2]==1&&poreh[4][3]==1)||(poreh[4][0]==2&&poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][3]==2)){
            //cout << ooo;
            if(ooo%2==1)
            {
            setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
   if((poreh[4][1]==1&&poreh[4][2]==1&&poreh[4][3]==1&&poreh[4][4]==1)||(poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][4]==2)){
//cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
    if((poreh[4][2]==1&&poreh[4][3]==1&&poreh[4][4]==1&&poreh[4][5]==1)||(poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][5]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
                if((poreh[4][3]==1&&poreh[4][4]==1&&poreh[4][5]==1&&poreh[4][6]==1)||(poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][5]==2&&poreh[4][6]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
                }
            if((poreh[5][0]==1&&poreh[5][1]==1&&poreh[5][2]==1&&poreh[5][3]==1)||(poreh[5][0]==2&&poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][3]==2)){
            //cout << ooo;
            if(ooo%2==1)
            {
            setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
   if((poreh[5][1]==1&&poreh[5][2]==1&&poreh[5][3]==1&&poreh[5][4]==1)||(poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][4]==2)){
//cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
    if((poreh[5][2]==1&&poreh[5][3]==1&&poreh[5][4]==1&&poreh[5][5]==1)||(poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][5]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
    }
                if((poreh[5][3]==1&&poreh[5][4]==1&&poreh[5][5]==1&&poreh[5][6]==1)||(poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][5]==2&&poreh[5][6]==2)){
////////cout << ooo;
            if(ooo%2==1)
            {
                setcolor(rang[0]);
          outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
          emtiaz[0]++;
            }
            if(ooo%2==0)
            {
                setcolor(rang[1]);
        outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
        emtiaz[1]++;
            }
                }
}
/////////////////////////////////////////////
void bordanradifimajazi(){

if((poreh[0][0]==1&&poreh[0][1]==1&&poreh[0][2]==1&&poreh[0][3]==1)||(poreh[0][0]==2&&poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][3]==2)){
            //cout << ooo;
           aaa=1;
    }
   if((poreh[0][1]==1&&poreh[0][2]==1&&poreh[0][3]==1&&poreh[0][4]==1)||(poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][4]==2)){
//cout << ooo;
            aaa=1;
    }
    if((poreh[0][2]==1&&poreh[0][3]==1&&poreh[0][4]==1&&poreh[0][5]==1)||(poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][5]==2)){
////////cout << ooo;
            aaa=1;
    }
                if((poreh[0][3]==1&&poreh[0][4]==1&&poreh[0][5]==1&&poreh[0][6]==1)||(poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][5]==2&&poreh[0][6]==2)){
////////cout << ooo;
            aaa=1;
                }
            //////////////////////////////////////////////////////////
            if((poreh[1][0]==1&&poreh[1][1]==1&&poreh[1][2]==1&&poreh[1][3]==1)||(poreh[1][0]==2&&poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][3]==2)){
            //cout << ooo;
            aaa=1;
    }
   if((poreh[1][1]==1&&poreh[1][2]==1&&poreh[1][3]==1&&poreh[1][4]==1)||(poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][4]==2)){
//cout << ooo;
            aaa=1;
    }
    if((poreh[1][2]==1&&poreh[1][3]==1&&poreh[1][4]==1&&poreh[1][5]==1)||(poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][5]==2)){
////////cout << ooo;
            aaa=1;
    }
                if((poreh[1][3]==1&&poreh[1][4]==1&&poreh[1][5]==1&&poreh[1][6]==1)||(poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][5]==2&&poreh[1][6]==2)){
////////cout << ooo;
            aaa=1;
                }
            ///////////////////////////////////////////////////////2
            if((poreh[2][0]==1&&poreh[2][1]==1&&poreh[2][2]==1&&poreh[2][3]==1)||(poreh[2][0]==2&&poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][3]==2)){
            //cout << ooo;
            aaa=1;
    }
   if((poreh[2][1]==1&&poreh[2][2]==1&&poreh[2][3]==1&&poreh[2][4]==1)||(poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][4]==2)){
//cout << ooo;
            aaa=1;
    }
    if((poreh[2][2]==1&&poreh[2][3]==1&&poreh[2][4]==1&&poreh[2][5]==1)||(poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][5]==2)){
////////cout << ooo;
            aaa=1;
    }
                if((poreh[2][3]==1&&poreh[2][4]==1&&poreh[2][5]==1&&poreh[2][6]==1)||(poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][5]==2&&poreh[2][6]==2)){
////////cout << ooo;
            aaa=1;
                }
            //////////////////////////////////////3
            if((poreh[3][0]==1&&poreh[3][1]==1&&poreh[3][2]==1&&poreh[3][3]==1)||(poreh[3][0]==2&&poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][3]==2)){
            //cout << ooo;
            aaa=1;
    }
   if((poreh[3][1]==1&&poreh[3][2]==1&&poreh[3][3]==1&&poreh[3][4]==1)||(poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][4]==2)){
//cout << ooo;
            aaa=1;
    }
    if((poreh[3][2]==1&&poreh[3][3]==1&&poreh[3][4]==1&&poreh[3][5]==1)||(poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][5]==2)){
////////cout << ooo;
            aaa=1;
    }
                if((poreh[3][3]==1&&poreh[3][4]==1&&poreh[3][5]==1&&poreh[3][6]==1)||(poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][5]==2&&poreh[3][6]==2)){
////////cout << ooo;
            aaa=1;
                }
            if((poreh[4][0]==1&&poreh[4][1]==1&&poreh[4][2]==1&&poreh[4][3]==1)||(poreh[4][0]==2&&poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][3]==2)){
            //cout << ooo;
            aaa=1;
    }
   if((poreh[4][1]==1&&poreh[4][2]==1&&poreh[4][3]==1&&poreh[4][4]==1)||(poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][4]==2)){
//cout << ooo;
            aaa=1;
    }
    if((poreh[4][2]==1&&poreh[4][3]==1&&poreh[4][4]==1&&poreh[4][5]==1)||(poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][5]==2)){
////////cout << ooo;
            aaa=1;
    }
                if((poreh[4][3]==1&&poreh[4][4]==1&&poreh[4][5]==1&&poreh[4][6]==1)||(poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][5]==2&&poreh[4][6]==2)){
////////cout << ooo;
            aaa=1;
                }
            if((poreh[5][0]==1&&poreh[5][1]==1&&poreh[5][2]==1&&poreh[5][3]==1)||(poreh[5][0]==2&&poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][3]==2)){
            //cout << ooo;
            aaa=1;
    }
   if((poreh[5][1]==1&&poreh[5][2]==1&&poreh[5][3]==1&&poreh[5][4]==1)||(poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][4]==2)){
//cout << ooo;
            aaa=1;
    }
    if((poreh[5][2]==1&&poreh[5][3]==1&&poreh[5][4]==1&&poreh[5][5]==1)||(poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][5]==2)){
////////cout << ooo;
            aaa=1;
    }
                if((poreh[5][3]==1&&poreh[5][4]==1&&poreh[5][5]==1&&poreh[5][6]==1)||(poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][5]==2&&poreh[5][6]==2)){
////////cout << ooo;
            aaa==1;
                }
}
////////////////////////////////////////////
void ghotrisharghi(int rang[]){
for(int i1=0;i1<3;i1++){
    for(int j1=0;j1<4;j1++){
            //////////nafar1
        if((poreh[i1][j1]==1))
        {
                 if((poreh[i1+1][j1+1]==1))
                {
                                if((poreh[i1+2][j1+2]==1))
                                {
                                                if((poreh[i1+3][j1+3]==1))
                                                {
                                                    setcolor(rang[0]);
                                                    outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
                                                    emtiaz[0]++;
                                                }
                                }
                }
        }
        //////nafar2
         if((poreh[i1][j1]==2))
        {
                 if((poreh[i1+1][j1+1]==2))
                {
                                if((poreh[i1+2][j1+2]==2))
                                {
                                                if((poreh[i1+3][j1+3]==2))
                                                {
                                                    setcolor(rang[1]);
                                                    outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
                                                    emtiaz[1]++;
                                                }
                                }
                }
        }
    }
}
}
////////////////////////////////
void ghotrisharghimajazi(){
for(int i1=0;i1<3;i1++){
    for(int j1=0;j1<4;j1++){
            //////////nafar1
        if((poreh[i1][j1]==1))
        {
                 if((poreh[i1+1][j1+1]==1))
                {
                                if((poreh[i1+2][j1+2]==1))
                                {
                                                if((poreh[i1+3][j1+3]==1))
                                                {
                                                   aaa=1;
                                                }
                                }
                }
        }
        //////nafar2
         if((poreh[i1][j1]==2))
        {
                 if((poreh[i1+1][j1+1]==2))
                {
                                if((poreh[i1+2][j1+2]==2))
                                {
                                                if((poreh[i1+3][j1+3]==2))
                                                {
                                                aaa=1;
                                                }
                                }
                }
        }
    }
}
}

//////////////////////////
void ghotrigharbi(int rang[])
{
for(int i1=3;i1<6;i1++){
    for(int j1=0;j1<4;j1++){
            //////////nafar1
        if((poreh[i1][j1]==1))
        {
                 if((poreh[i1-1][j1+1]==1))
                {
                                if((poreh[i1-2][j1+2]==1))
                                {
                                                if((poreh[i1-3][j1+3]==1))
                                                {
                                                    setcolor(rang[0]);
                                                    outtextxy(900,400,"PLAYER 1 WINS :=)"); aaa=1;
                                                    emtiaz[0]++;
                                                }
                                }
                }
        }
        //////nafar2
         if((poreh[i1][j1]==2))
        {
                 if((poreh[i1-1][j1+1]==2))
                {
                                if((poreh[i1-2][j1+2]==2))
                                {
                                                if((poreh[i1-3][j1+3]==2))
                                                {
                                                    setcolor(rang[1]);
                                                    outtextxy(900,400,"PLAYER 2 WINS :=)"); aaa=1;
                                                    emtiaz[1]++;
                                                }
                                }
                }
        }
    }
}
}
//////////////////////////////////////////////
void ghotrigharbimajazi()
{
for(int i1=3;i1<6;i1++){
    for(int j1=0;j1<4;j1++){
            //////////nafar1
        if((poreh[i1][j1]==1))
        {
                 if((poreh[i1-1][j1+1]==1))
                {
                                if((poreh[i1-2][j1+2]==1))
                                {
                                                if((poreh[i1-3][j1+3]==1))
                                                {
                                                     aaa=1;
                                                }
                                }
                }
        }
        //////nafar2
         if((poreh[i1][j1]==2))
        {
                 if((poreh[i1-1][j1+1]==2))
                {
                                if((poreh[i1-2][j1+2]==2))
                                {
                                                if((poreh[i1-3][j1+3]==2))
                                                {
                                                     aaa=1;
                                                }
                                }
                }
        }
    }
}
}
//////////////////////////////////////////mosalas harekat
void mosalassabz(int xmouse)
{

        if(125<xmouse&&xmouse<225)
       {
           //sanietime=1000+sanietime;
           setcolor(COLOR(0,0,0));
           line(169,70,189,70);
           line(169,70,179,95);
           line(189,70,179,95);
           delay(5);
            setcolor(COLOR(64,56,92));
           line(169,70,189,70);
           line(169,70,179,95);
           line(189,70,179,95);
       }
    if(225<xmouse&&xmouse<325)
        {
            //sanietime=1000+sanietime;
           setcolor(COLOR(0,0,0));
           line(269,70,289,70);
           line(269,70,279,95);
           line(289,70,279,95);
           delay(5);
            setcolor(COLOR(64,56,92));
           line(269,70,289,70);
           line(269,70,279,95);
           line(289,70,279,95);

       }
    if(325<xmouse&&xmouse<425)
        {
            //sanietime=1000+sanietime;
             setcolor(COLOR(0,0,0));
           line(369,70,389,70);
           line(369,70,379,95);
           line(389,70,379,95);
           delay(5);
            setcolor(COLOR(64,56,92));
           line(369,70,389,70);
           line(369,70,379,95);
           line(389,70,379,95);
       }
    if(425<xmouse&&xmouse<525)
        {
            //sanietime=1000+sanietime;
             setcolor(COLOR(0,0,0));
           line(469,70,489,70);
           line(469,70,479,95);
           line(489,70,479,95);
           delay(5);
            setcolor(COLOR(64,56,92));
            line(469,70,489,70);
            line(469,70,479,95);
            line(489,70,479,95);
       }
    if(525<xmouse&&xmouse<625)
          {
              //sanietime=1000+sanietime;
              setcolor(COLOR(0,0,0));
            line(569,70,589,70);
            line(569,70,579,95);
           line(589,70,579,95);
           delay(5);
            setcolor(COLOR(64,56,92));
            line(569,70,589,70);
           line(569,70,579,95);
           line(589,70,579,95);
       }
    if(625<xmouse&&xmouse<725)
          {
              //sanietime=1000+sanietime;
               setcolor(COLOR(0,0,0));
          line(669,70,689,70);
           line(669,70,679,95);
           line(689,70,679,95);
            delay(5);
            setcolor(COLOR(64,56,92));
           line(669,70,689,70);
           line(669,70,679,95);
           line(689,70,679,95);
       }

    if(725<xmouse&&xmouse<825)
          {
              //sanietime=1000+sanietime;
               setcolor(COLOR(0,0,0));
        line(769,70,789,70);
           line(769,70,779,95);
           line(789,70,779,95);
           delay(10);
            setcolor(COLOR(64,56,92));
             line(769,70,789,70);
           line(769,70,779,95);
           line(789,70,779,95);
       }
       else
       {
           delay(10);
       }
}
///////////////////////////////////
void mosalassabzkeybord(int xmouse)
{

        if(xmouse==1)
       {
           //sanietime=1000+sanietime;
           setcolor(COLOR(0,0,0));
           line(169,70,189,70);
           line(169,70,179,95);
           line(189,70,179,95);
           delay(5);
            setcolor(COLOR(64,56,92));
           line(169,70,189,70);
           line(169,70,179,95);
           line(189,70,179,95);
       }
    if(xmouse==2)
        {
            //sanietime=1000+sanietime;
           setcolor(COLOR(0,0,0));
           line(269,70,289,70);
           line(269,70,279,95);
           line(289,70,279,95);
           delay(5);
            setcolor(COLOR(64,56,92));
           line(269,70,289,70);
           line(269,70,279,95);
           line(289,70,279,95);

       }
    if(xmouse==3)
        {
            //sanietime=1000+sanietime;
             setcolor(COLOR(0,0,0));
           line(369,70,389,70);
           line(369,70,379,95);
           line(389,70,379,95);
           delay(5);
            setcolor(COLOR(64,56,92));
           line(369,70,389,70);
           line(369,70,379,95);
           line(389,70,379,95);
       }
    if(xmouse==4)
        {
            //sanietime=1000+sanietime;
             setcolor(COLOR(0,0,0));
           line(469,70,489,70);
           line(469,70,479,95);
           line(489,70,479,95);
           delay(5);
            setcolor(COLOR(64,56,92));
            line(469,70,489,70);
            line(469,70,479,95);
            line(489,70,479,95);
       }
    if(xmouse==5)
          {
              //sanietime=1000+sanietime;
              setcolor(COLOR(0,0,0));
            line(569,70,589,70);
            line(569,70,579,95);
           line(589,70,579,95);
           delay(5);
            setcolor(COLOR(64,56,92));
            line(569,70,589,70);
           line(569,70,579,95);
           line(589,70,579,95);
       }
    if(xmouse==6)
          {
              //sanietime=1000+sanietime;
               setcolor(COLOR(0,0,0));
          line(669,70,689,70);
           line(669,70,679,95);
           line(689,70,679,95);
            delay(5);
            setcolor(COLOR(64,56,92));
           line(669,70,689,70);
           line(669,70,679,95);
           line(689,70,679,95);
       }

    if(xmouse==7)
          {
              //sanietime=1000+sanietime;
               setcolor(COLOR(0,0,0));
        line(769,70,789,70);
           line(769,70,779,95);
           line(789,70,779,95);
           delay(10);
            setcolor(COLOR(64,56,92));
             line(769,70,789,70);
           line(769,70,779,95);
           line(789,70,779,95);
       }
       else
       {
           delay(10);
       }
}
//////////////////////////////////single player mulitplay
void single()
{
    setfillstyle(SOLID_FILL,BLACK);
    bar(180,300,655,400);
    bar(705,300,1180,400);
        settextstyle(8,0,6);
        setcolor(COLOR(200,150,0));
        outtextxy(185,323,"SINGLE PLAYER |");
        outtextxy(730,323,"MULTIPLAYER ||");
}
////////////////////
int singlemouse(int xxxxxmouse,int yyyyymouse)
{
    if(180<=xxxxxmouse&&xxxxxmouse<=655&&300<=yyyyymouse&&yyyyymouse<=400)
    {
        return 1;
    }
    if(705<=xxxxxmouse&&xxxxxmouse<=1180&&300<=yyyyymouse&&yyyyymouse<=400)
    {
        return 2;
    }
}
/////////////////////cleaning up

////////////////////easy meduim hard
void sath3(){
        settextstyle(8,0, 5);
        setcolor(WHITE);
outtextxy(150,70,"CHOOSE THE LEVEL OF THE GAME TO CONTINUE");
 setfillstyle(SOLID_FILL,BLACK);
    bar(100,500,475,600);
    bar(500,500,875,600);
    bar(900,500,1225,600);
    settextstyle(8,0, 5);
    setcolor(COLOR(200,150,0));
    outtextxy(200,525,"EASY :)");
    outtextxy(600,525,"MEDIUM :|");
    outtextxy(975,525,"HARD :O|");

}
///////////////////////////////////////choosing level
int mousesath3(int x1xmouse){
if(100<=x1xmouse&&x1xmouse<=475)
    return 1;
if(500<=x1xmouse&&x1xmouse<=875)
    return 2;
if(900<=x1xmouse&&x1xmouse<=1225)
    return 3;
}

/////////////////////////////easy
int easyai(){
    int randx=0;
randx = rand() % (825-125)+125;
cout << randx;
return mousepeidakon(randx);
}
//////////////////////////////meduim
int meduimaisotoni(){

if((poreh[0][0]==2&&poreh[1][0]==2&&poreh[2][0]==2&&poreh[3][0]==1)){
    return 0;
}
if((poreh[0][0]==2&&poreh[1][0]==2&&poreh[2][0]==2)){
    return 1;
}
if((poreh[1][0]==2&&poreh[2][0]==2&&poreh[3][0]==2&&poreh[4][0]==1)){
return 0;
}
if((poreh[1][0]==2&&poreh[2][0]==2&&poreh[3][0]==2)){
return 1;
}
if((poreh[2][0]==2&&poreh[3][0]==2&&poreh[4][0]==2&&poreh[5][0]==1)){
return 0;
}
if((poreh[2][0]==2&&poreh[3][0]==2&&poreh[4][0]==2)){
return 1;
}
//////////////////////////////////////////
if((poreh[0][1]==2&&poreh[1][1]==2&&poreh[2][1]==2&&poreh[3][1]==1)){
return 0;
}
if((poreh[0][1]==2&&poreh[1][1]==2&&poreh[2][1]==2)){
return 2;
}
if((poreh[1][1]==2&&poreh[2][1]==2&&poreh[3][1]==2&&poreh[4][1]==1)){
return 0;
}
if((poreh[1][1]==2&&poreh[2][1]==2&&poreh[3][1]==2)){
return 2;
}
if((poreh[2][1]==2&&poreh[3][1]==2&&poreh[4][1]==2&&poreh[5][1]==1)){
return 0;
}
if((poreh[2][1]==2&&poreh[3][1]==2&&poreh[4][1]==2)){
return 2;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if((poreh[0][2]==2&&poreh[1][2]==2&&poreh[2][2]==2&&poreh[3][2]==1)){
return 0;
}
if((poreh[0][2]==2&&poreh[1][2]==2&&poreh[2][2]==2)){
return 3;
}
if((poreh[1][2]==2&&poreh[2][2]==2&&poreh[3][2]==2&&poreh[4][2]==1)){
return 0;
}
if((poreh[1][2]==2&&poreh[2][2]==2&&poreh[3][2]==2)){
return 3;
}
if((poreh[2][2]==2&&poreh[3][2]==2&&poreh[4][2]==2&&poreh[5][2]==1)){
return 0;
}
if((poreh[2][2]==2&&poreh[3][2]==2&&poreh[4][2]==2)){
return 3;
}
//////////////////////////////////////////////////////////////////

if((poreh[0][3]==2&&poreh[1][3]==2&&poreh[2][3]==2&&poreh[3][3]==1)){
return 0;
}
if((poreh[0][3]==2&&poreh[1][3]==2&&poreh[2][3]==2)){
return 4;
}
if((poreh[1][3]==2&&poreh[2][3]==2&&poreh[3][3]==2&&poreh[4][3]==1)){
return 0;
}
if((poreh[1][3]==2&&poreh[2][3]==2&&poreh[3][3]==2)){
return 4;
}
if((poreh[2][3]==2&&poreh[3][3]==2&&poreh[4][3]==2&&poreh[5][3]==1)){
return 0;
}
if((poreh[2][3]==2&&poreh[3][3]==2&&poreh[4][3]==2)){
return 4;
}
/////////////////////////////////////////////////////////////////////////////////

if((poreh[0][4]==2&&poreh[1][4]==2&&poreh[2][4]==2&&poreh[3][4]==1)){
return 0;
}
if((poreh[0][4]==2&&poreh[1][4]==2&&poreh[2][4]==2)){
return 5;
}
if((poreh[1][4]==2&&poreh[2][4]==2&&poreh[3][4]==2&&poreh[4][4]==1)){
return 0;
}
if((poreh[1][4]==2&&poreh[2][4]==2&&poreh[3][4]==2)){
return 5;
}
if((poreh[2][4]==2&&poreh[3][4]==2&&poreh[4][4]==2&&poreh[5][4]==1)){
return 0;
}
if((poreh[2][4]==2&&poreh[3][4]==2&&poreh[4][4]==2)){
return 5;
}
///////////////////////////////////////////////////////////////////////

if((poreh[0][5]==2&&poreh[1][5]==2&&poreh[2][5]==2&&poreh[3][5]==1)){
return 0;
}
if((poreh[0][5]==2&&poreh[1][5]==2&&poreh[2][5]==2)){
return 6;
}
if((poreh[1][5]==2&&poreh[2][5]==2&&poreh[3][5]==2&&poreh[4][5]==1)){
return 0;
}
if((poreh[1][5]==2&&poreh[2][5]==2&&poreh[3][5]==2)){
return 6;
}
if((poreh[2][5]==2&&poreh[3][5]==2&&poreh[4][5]==2&&poreh[5][5]==1)){
return 0;
}
if((poreh[2][5]==2&&poreh[3][5]==2&&poreh[4][5]==2)){
return 6;
}
///////////////////////////////////////////////////

if((poreh[0][6]==2&&poreh[1][6]==2&&poreh[2][6]==2&&poreh[3][6]==1)){
return 0;
}
if((poreh[0][6]==2&&poreh[1][6]==2&&poreh[2][6]==2)){
return 7;
}

if((poreh[1][6]==2&&poreh[2][6]==2&&poreh[3][6]==2&&poreh[4][6]==1)){
return 0;
}
if((poreh[1][6]==2&&poreh[2][6]==2&&poreh[3][6]==2)){
return 7;
}

if((poreh[2][6]==2&&poreh[3][6]==2&&poreh[4][6]==2&&poreh[5][6]==1)){
return 0;
}
if((poreh[2][6]==2&&poreh[3][6]==2&&poreh[4][6]==2)){
return 7;
}

    return 0;
}
/////////////////////////////
int meduimradifichaprast3chasbide(){

if((poreh[0][0]==2&&poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][3]==1)){
    return 0;
}
if((poreh[0][0]==2&&poreh[0][1]==2&&poreh[0][2]==2)){
    return 4;
}
if((poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][4]==1)){
return 0;
}
if((poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][3]==2)){
return 5;
}
if((poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][5]==1)){
return 0;
}
if((poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][4]==2)){
return 6;
}
if((poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][5]==2&&poreh[0][6]==1)){
return 0;
}
if((poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][5]==2)){
return 7;
}


//////////////////////////////////////////

if((poreh[1][0]==2&&poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][3]==1)){
        narizagha=4;
    return 0;
}
if((poreh[1][0]==2&&poreh[1][1]==2&&poreh[1][2]==2)&&(poreh[0][3]==2||poreh[0][3]==1)){
    narizagha=4;
    return 4;
}
if((poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][4]==1)){
    narizagha=5;
return 0;
}
if((poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][3]==2)&&(poreh[0][4]==2||poreh[0][4]==1)){
    narizagha=5;
return 5;
}
if((poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][5]==1)){
    narizagha=6;
return 0;
}
if((poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][4]==2)&&(poreh[0][5]==2||poreh[0][5]==1)){
    narizagha=6;
return 6;
}
if((poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][5]==2&&poreh[1][6]==1)){
    narizagha=7;
return 0;
}
if((poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][5]==2)&&(poreh[0][6]==2||poreh[0][6]==1)){
    narizagha=7;
return 7;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if((poreh[2][0]==2&&poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[2][0]==2&&poreh[2][1]==2&&poreh[2][2]==2)&&(poreh[1][3]==1||poreh[1][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][4]==1)){
    narizagha=5;
return 0;
}
if((poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][3]==2)&&(poreh[1][4]==1||poreh[1][4]==2)){
    narizagha=5;
return 5;
}
if((poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][5]==1)){
    narizagha=6;
return 0;
}
if((poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][4]==2)&&(poreh[1][5]==1||poreh[1][5]==2)){
    narizagha=6;
return 6;
}
if((poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][5]==2&&poreh[2][6]==1)){
    narizagha=7;
return 0;
}
if((poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][5]==2)&&(poreh[1][6]==1||poreh[1][6]==2)){
    narizagha=7;
return 7;
}


//////////////////////////////////////////////////////////////////
if((poreh[3][0]==2&&poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[3][0]==2&&poreh[3][1]==2&&poreh[3][2]==2)&&(poreh[2][3]==1||poreh[2][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][4]==1)){
    narizagha=5;
return 0;
}
if((poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][3]==2)&&(poreh[2][4]==1||poreh[2][4]==2)){
    narizagha=5;
return 5;
}
if((poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][5]==1)){
    narizagha=6;
return 0;
}
if((poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][4]==2)&&(poreh[2][5]==1||poreh[2][5]==2)){
    narizagha=6;
return 6;
}
if((poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][5]==2&&poreh[3][6]==1)){
    narizagha=7;
return 0;
}
if((poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][5]==2)&&(poreh[2][6]==1||poreh[2][6]==2)){
    narizagha=7;
return 7;
}


/////////////////////////////////////////////////////////////////////////////////
if((poreh[4][0]==2&&poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[4][0]==2&&poreh[4][1]==2&&poreh[4][2]==2)&&(poreh[3][3]==1||poreh[3][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][4]==1)){
    narizagha=5;
return 0;
}
if((poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][3]==2)&&(poreh[3][4]==1||poreh[3][4]==2)){
    narizagha=5;
return 5;
}
if((poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][5]==1)){
    narizagha=6;
return 0;
}
if((poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][4]==2)&&(poreh[3][5]==1||poreh[3][5]==2)){
    narizagha=6;
return 6;
}
if((poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][5]==2&&poreh[4][6]==1)){
    narizagha=7;
return 0;
}
if((poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][5]==2)&&(poreh[3][6]==1||poreh[3][6]==2)){
    narizagha=7;
return 7;
}


///////////////////////////////////////////////////////////////////////

if((poreh[5][0]==2&&poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[5][0]==2&&poreh[5][1]==2&&poreh[5][2]==2)&&(poreh[4][3]==1||poreh[4][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][4]==1)){
    narizagha=5;
return 0;
}
if((poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][3]==2)&&(poreh[4][4]==1||poreh[4][4]==2)){
    narizagha=5;
return 5;
}
if((poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][5]==1)){
    narizagha=6;
return 0;
}
if((poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][4]==2)&&(poreh[4][5]==1||poreh[4][5]==2)){
    narizagha=6;
return 6;
}
if((poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][5]==2&&poreh[5][6]==1)){
    narizagha=7;
return 0;
}
if((poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][5]==2)&&(poreh[4][6]==1||poreh[4][6]==2)){
    narizagha=7;
return 7;
}

///////////////////////////////////////////////////

    return 0;

}
int meduimradifirastchap3chasbide(){

if((poreh[0][6]==2&&poreh[0][5]==2&&poreh[0][4]==2&&poreh[0][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[0][6]==2&&poreh[0][5]==2&&poreh[0][4]==2)){
    narizagha=4;
    return 4;
}
if((poreh[0][5]==2&&poreh[0][4]==2&&poreh[0][3]==2&&poreh[0][2]==1)){
    narizagha=3;
return 0;
}
if((poreh[0][5]==2&&poreh[0][4]==2&&poreh[0][3]==2)){
    narizagha=3;
return 3;
}
if((poreh[0][4]==2&&poreh[0][3]==2&&poreh[0][2]==2&&poreh[0][1]==1)){
    narizagha=2;
return 0;
}
if((poreh[0][4]==2&&poreh[0][3]==2&&poreh[0][2]==2)){
    narizagha=2;
return 2;
}
if((poreh[0][3]==2&&poreh[0][2]==2&&poreh[0][1]==2&&poreh[0][0]==1)){
    narizagha=1;
return 0;
}
if((poreh[0][3]==2&&poreh[0][2]==2&&poreh[0][1]==2)){
    narizagha=1;
return 1;
}


//////////////////////////////////////////

if((poreh[1][6]==2&&poreh[1][5]==2&&poreh[1][4]==2&&poreh[1][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[1][6]==2&&poreh[1][5]==2&&poreh[1][4]==2)&&(poreh[0][3]==1||poreh[0][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[1][5]==2&&poreh[1][4]==2&&poreh[1][3]==2&&poreh[1][2]==1)){
    narizagha=3;
return 0;
}
if((poreh[1][5]==2&&poreh[1][4]==2&&poreh[1][3]==2)&&(poreh[0][2]==1||poreh[0][2]==2)){
    narizagha=3;
return 3;
}
if((poreh[1][4]==2&&poreh[1][3]==2&&poreh[1][2]==2&&poreh[1][1]==1)){
    narizagha=2;
return 0;
}
if((poreh[1][4]==2&&poreh[1][3]==2&&poreh[1][2]==2)&&(poreh[0][1]==1||poreh[0][1]==2)){
    narizagha=2;
return 2;
}
if((poreh[1][3]==2&&poreh[1][2]==2&&poreh[1][1]==2&&poreh[1][0]==1)){
    narizagha=1;
return 0;
}
if((poreh[1][3]==2&&poreh[1][2]==2&&poreh[1][1]==2)&&(poreh[0][0]==1||poreh[0][0]==2)){
    narizagha=1;
return 1;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if((poreh[2][6]==2&&poreh[2][5]==2&&poreh[2][4]==2&&poreh[2][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[2][6]==2&&poreh[2][5]==2&&poreh[2][4]==2)&&(poreh[1][3]==1||poreh[1][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[2][5]==2&&poreh[2][4]==2&&poreh[2][3]==2&&poreh[2][2]==1)){
    narizagha=3;
return 0;
}
if((poreh[2][5]==2&&poreh[2][4]==2&&poreh[2][3]==2)&&(poreh[1][2]==1||poreh[1][2]==2)){
    narizagha=3;
return 3;
}
if((poreh[2][4]==2&&poreh[2][3]==2&&poreh[2][2]==2&&poreh[2][1]==1)){
    narizagha=2;
return 0;
}
if((poreh[2][4]==2&&poreh[2][3]==2&&poreh[2][2]==2)&&(poreh[1][1]==1||poreh[1][1]==2)){
    narizagha=2;
return 2;
}
if((poreh[2][3]==2&&poreh[2][2]==2&&poreh[2][1]==2&&poreh[2][0]==1)){
    narizagha=1;
return 0;
}
if((poreh[2][3]==2&&poreh[2][2]==2&&poreh[2][1]==2)&&(poreh[1][0]==1||poreh[1][0]==2)){
    narizagha=1;
return 1;
}


//////////////////////////////////////////////////////////////////
if((poreh[3][6]==2&&poreh[3][5]==2&&poreh[3][4]==2&&poreh[3][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[3][6]==2&&poreh[3][5]==2&&poreh[3][4]==2)&&(poreh[2][3]==1||poreh[2][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[3][5]==2&&poreh[3][4]==2&&poreh[3][3]==2&&poreh[3][2]==1)){
    narizagha=3;
return 0;
}
if((poreh[3][5]==2&&poreh[3][4]==2&&poreh[3][3]==2)&&(poreh[2][2]==1||poreh[2][2]==2)){
    narizagha=3;
return 3;
}
if((poreh[3][4]==2&&poreh[3][3]==2&&poreh[3][2]==2&&poreh[3][1]==1)){
    narizagha=2;
return 0;
}
if((poreh[3][4]==2&&poreh[3][3]==2&&poreh[3][2]==2)&&(poreh[2][1]==1||poreh[2][1]==2)){
    narizagha=2;
return 2;
}
if((poreh[3][3]==2&&poreh[3][2]==2&&poreh[3][1]==2&&poreh[3][0]==1)){
    narizagha=1;
return 0;
}
if((poreh[3][3]==2&&poreh[3][2]==2&&poreh[3][1]==2)&&(poreh[2][0]==1||poreh[2][0]==2)){
    narizagha=1;
return 1;
}


/////////////////////////////////////////////////////////////////////////////////
if((poreh[4][6]==2&&poreh[4][5]==2&&poreh[4][4]==2&&poreh[4][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[4][6]==2&&poreh[4][5]==2&&poreh[4][4]==2)&&(poreh[3][3]==1||poreh[3][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[4][5]==2&&poreh[4][4]==2&&poreh[4][3]==2&&poreh[4][2]==1)){
    narizagha=3;
return 0;
}
if((poreh[4][5]==2&&poreh[4][4]==2&&poreh[4][3]==2)&&(poreh[3][2]==1||poreh[3][2]==2)){
    narizagha=3;
return 3;
}
if((poreh[4][4]==2&&poreh[4][3]==2&&poreh[4][2]==2&&poreh[4][1]==1)){
    narizagha=2;
return 0;
}
if((poreh[4][4]==2&&poreh[4][3]==2&&poreh[4][4]==2)&&(poreh[3][1]==1||poreh[3][1]==2)){
    narizagha=2;
return 2;
}
if((poreh[4][3]==2&&poreh[4][2]==2&&poreh[4][1]==2&&poreh[4][0]==1)){
    narizagha=1;
return 0;
}
if((poreh[4][3]==2&&poreh[4][2]==2&&poreh[4][1]==2)&&(poreh[3][0]==1||poreh[3][0]==2)){
    narizagha=1;
return 1;
}


///////////////////////////////////////////////////////////////////////

if((poreh[5][6]==2&&poreh[5][5]==2&&poreh[5][4]==2&&poreh[5][3]==1)){
    narizagha=4;
    return 0;
}
if((poreh[5][6]==2&&poreh[5][5]==2&&poreh[5][4]==2)&&(poreh[4][3]==1||poreh[4][3]==2)){
    narizagha=4;
    return 4;
}
if((poreh[5][5]==2&&poreh[5][4]==2&&poreh[5][3]==2&&poreh[5][2]==1)){
    narizagha=3;
return 0;
}
if((poreh[5][5]==2&&poreh[5][4]==2&&poreh[5][3]==2)&&(poreh[4][2]==1||poreh[4][2]==2)){
    narizagha=3;
return 3;
}
if((poreh[5][4]==2&&poreh[5][3]==2&&poreh[5][2]==2&&poreh[5][1]==1)){
    narizagha=2;
return 0;
}
if((poreh[5][4]==2&&poreh[5][3]==2&&poreh[5][2]==2)&&(poreh[4][1]==1||poreh[4][1]==2)){
    narizagha=2;
return 2;
}
if((poreh[5][3]==2&&poreh[5][2]==2&&poreh[5][1]==2&&poreh[5][0]==1)){
    narizagha=1;
return 0;
}
if((poreh[5][3]==2&&poreh[5][2]==2&&poreh[5][1]==2)&&(poreh[4][0]==1||poreh[4][0]==2)){
    narizagha=1;
return 1;
}

///////////////////////////////////////////////////

    return 0;

}
////////////////////////////
int meduimradifi21chasbide(){

        if((poreh[0][0]==2&&poreh[0][1]==2&&poreh[0][3]==2&&poreh[0][2]==1)){
            narizagha=3;
            return 0;
        }
        if((poreh[0][0]==2&&poreh[0][1]==2&&poreh[0][3]==2)){
            narizagha=3;
            return 3;
        }
        if((poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][4]==2&&poreh[0][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[0][1]==2&&poreh[0][2]==2&&poreh[0][4]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][5]==2&&poreh[0][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][5]==2)){
            narizagha=5;
        return 5;
        }
        if((poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][6]==2&&poreh[0][5]==1)){
            narizagha=6;
        return 0;
        }
        if((poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][6]==2)){
            narizagha=6;
        return 6;
        }


        //////////////////////////////////////////

        if((poreh[1][0]==2&&poreh[1][1]==2&&poreh[1][3]==2&&poreh[1][2]==1)){
            narizagha=3;
            return 0;
        }
        if((poreh[1][0]==2&&poreh[1][1]==2&&poreh[1][3]==2)&&(poreh[0][2]==1||poreh[0][2]==2)){
            narizagha=3;
            return 3;
        }
        if((poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][4]==2&&poreh[1][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[1][1]==2&&poreh[1][2]==2&&poreh[1][4]==2)&&(poreh[0][3]==1||poreh[0][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][5]==2&&poreh[1][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][5]==2)&&(poreh[0][4]==1||poreh[0][4]==2)){
            narizagha=5;
        return 5;
        }
        if((poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][6]==2&&poreh[1][5]==1)){
            narizagha=6;
        return 0;
        }
        if((poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][6]==2)&&(poreh[0][5]==1||poreh[0][5]==2)){
            narizagha=6;
        return 6;
        }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        if((poreh[2][0]==2&&poreh[2][1]==2&&poreh[2][3]==2&&poreh[2][2]==1)){
            narizagha=3;
            return 0;
        }
        if((poreh[2][0]==2&&poreh[2][1]==2&&poreh[2][3]==2)&&(poreh[1][2]==1||poreh[1][2]==2)){
            narizagha=3;
            return 3;
        }
        if((poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][4]==2&&poreh[2][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[2][1]==2&&poreh[2][2]==2&&poreh[2][4]==2)&&(poreh[1][3]==1||poreh[1][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][5]==2&&poreh[2][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][5]==2)&&(poreh[1][4]==1||poreh[1][4]==2)){
            narizagha=5;
        return 5;
        }
        if((poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][6]==2&&poreh[2][5]==1)){
            narizagha=6;
        return 0;
        }
        if((poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][6]==2)&&(poreh[1][5]==1||poreh[1][5]==2)){
            narizagha=6;
        return 6;
        }


        //////////////////////////////////////////////////////////////////
        if((poreh[3][0]==2&&poreh[3][1]==2&&poreh[3][3]==2&&poreh[3][2]==1)){
            narizagha=3;
            return 0;
        }
        if((poreh[3][0]==2&&poreh[3][1]==2&&poreh[3][3]==2)&&(poreh[2][2]==1||poreh[2][2]==2)){
            narizagha=3;
            return 3;
        }
        if((poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][4]==2&&poreh[3][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[3][1]==2&&poreh[3][2]==2&&poreh[3][4]==2)&&(poreh[2][3]==1||poreh[2][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][5]==2&&poreh[3][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][5]==2)&&(poreh[2][4]==1||poreh[2][4]==2)){
            narizagha=5;
        return 5;
        }
        if((poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][6]==2&&poreh[3][5]==1)){
            narizagha=6;
        return 0;
        }
        if((poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][6]==2)&&(poreh[2][5]==1||poreh[2][5]==2)){
            narizagha=6;
        return 6;
        }


        /////////////////////////////////////////////////////////////////////////////////
        if((poreh[4][0]==2&&poreh[4][1]==2&&poreh[4][3]==2&&poreh[4][2]==1)){
            narizagha=3;
            return 0;
        }
        if((poreh[4][0]==2&&poreh[4][1]==2&&poreh[4][3]==2)&&(poreh[3][2]==1||poreh[3][2]==2)){
            narizagha=3;
            return 3;
        }
        if((poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][4]==2&&poreh[4][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[4][1]==2&&poreh[4][2]==2&&poreh[4][4]==2)&&(poreh[3][3]==1||poreh[3][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][5]==2&&poreh[4][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][5]==2)&&(poreh[3][4]==1||poreh[3][4]==2)){
            narizagha=5;
        return 5;
        }
        if((poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][6]==2&&poreh[4][5]==1)){
            narizagha=6;
        return 0;
        }
        if((poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][6]==2)&&(poreh[3][5]==1||poreh[3][5]==2)){
            narizagha=6;
        return 6;
        }


        ///////////////////////////////////////////////////////////////////////

        if((poreh[5][0]==2&&poreh[5][1]==2&&poreh[5][3]==2&&poreh[5][2]==1)){
            narizagha=3;
            return 0;
        }
        if((poreh[5][0]==2&&poreh[5][1]==2&&poreh[5][3]==2)&&(poreh[4][2]==1||poreh[4][2]==2)){
            narizagha=3;
            return 3;
        }
        if((poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][4]==2&&poreh[5][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[5][1]==2&&poreh[5][2]==2&&poreh[5][4]==2)&&(poreh[4][3]==1||poreh[4][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][5]==2&&poreh[5][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][5]==2)&&(poreh[4][4]==1||poreh[4][4]==2)){
            narizagha=5;
        return 5;
        }
        if((poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][6]==2&&poreh[5][5]==1)){
            narizagha=6;
        return 0;
        }
        if((poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][6]==2)&&(poreh[4][4]==1||poreh[4][4]==2)){
            narizagha=6;
        return 6;
        }

        ///////////////////////////////////////////////////

            return 0;



}
///////////////////////////
int meduimradifi12chasbide(){
    //////////////////////

        if((poreh[0][0]==2&&poreh[0][2]==2&&poreh[0][3]==2&&poreh[0][1]==1)){
            narizagha=2;
            return 0;
        }
        if((poreh[0][0]==2&&poreh[0][2]==2&&poreh[0][3]==2)){
            narizagha=2;
            return 2;
        }
        if((poreh[0][1]==2&&poreh[0][3]==2&&poreh[0][4]==2&&poreh[0][2]==1)){
            narizagha=3;
        return 0;
        }
        if((poreh[0][1]==2&&poreh[0][3]==2&&poreh[0][4]==2)){
            narizagha=3;
        return 3;
        }
        if((poreh[0][2]==2&&poreh[0][4]==2&&poreh[0][5]==2&&poreh[0][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[0][2]==2&&poreh[0][4]==2&&poreh[0][5]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[0][3]==2&&poreh[0][5]==2&&poreh[0][6]==2&&poreh[0][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[0][3]==2&&poreh[0][5]==2&&poreh[0][6]==2)){
            narizagha=5;
        return 5;
        }


        //////////////////////////////////////////

        if((poreh[1][0]==2&&poreh[1][2]==2&&poreh[1][3]==2&&poreh[1][1]==1)){
            narizagha=2;
            return 0;
        }
        if((poreh[1][0]==2&&poreh[1][2]==2&&poreh[1][3]==2)&&(poreh[0][1]==1||poreh[0][1]==2)){
            narizagha=2;
            return 2;
        }
        if((poreh[1][1]==2&&poreh[1][3]==2&&poreh[1][4]==2&&poreh[1][2]==1)){
        narizagha=3;
        return 0;
        }
        if((poreh[1][1]==2&&poreh[1][3]==2&&poreh[1][4]==2)&&(poreh[0][2]==1||poreh[0][2]==2)){
            narizagha=3;
        return 3;
        }
        if((poreh[1][2]==2&&poreh[1][4]==2&&poreh[1][5]==2&&poreh[1][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[1][2]==2&&poreh[1][4]==2&&poreh[1][5]==2)&&(poreh[0][3]==1||poreh[0][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[1][3]==2&&poreh[1][5]==2&&poreh[1][6]==2&&poreh[1][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[1][3]==2&&poreh[1][5]==2&&poreh[1][6]==2)&&(poreh[0][4]==1||poreh[0][4]==2)){
            narizagha=5;
        return 5;
        }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        if((poreh[2][0]==2&&poreh[2][2]==2&&poreh[2][3]==2&&poreh[2][1]==1)){
            narizagha=2;
            return 0;
        }
        if((poreh[2][0]==2&&poreh[2][2]==2&&poreh[2][3]==2)&&(poreh[1][1]==1||poreh[1][1]==2)){
            narizagha=2;
            return 2;
        }
        if((poreh[2][1]==2&&poreh[2][3]==2&&poreh[2][4]==2&&poreh[2][2]==1)){
            narizagha=3;
        return 0;
        }
        if((poreh[2][1]==2&&poreh[2][3]==2&&poreh[2][4]==2)&&(poreh[1][2]==1||poreh[1][2]==2)){
            narizagha=3;
        return 3;
        }
        if((poreh[2][2]==2&&poreh[2][4]==2&&poreh[2][5]==2&&poreh[2][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[2][2]==2&&poreh[2][4]==2&&poreh[2][5]==2)&&(poreh[1][3]==1||poreh[1][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[2][3]==2&&poreh[2][5]==2&&poreh[2][6]==2&&poreh[2][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[2][3]==2&&poreh[2][5]==2&&poreh[2][6]==2)&&(poreh[1][4]==1||poreh[1][4]==2)){
            narizagha=5;
        return 5;
        }


        //////////////////////////////////////////////////////////////////
        if((poreh[3][0]==2&&poreh[3][2]==2&&poreh[3][3]==2&&poreh[3][1]==1)){
            narizagha=2;
            return 0;
        }
        if((poreh[3][0]==2&&poreh[3][2]==2&&poreh[3][3]==2)&&(poreh[2][1]==1||poreh[2][1]==2)){
            narizagha=2;
            return 2;
        }
        if((poreh[3][1]==2&&poreh[3][3]==2&&poreh[3][4]==2&&poreh[3][2]==1)){
            narizagha=3;
        return 0;
        }
        if((poreh[3][1]==2&&poreh[3][3]==2&&poreh[3][4]==2)&&(poreh[2][2]==1||poreh[2][2]==2)){
            narizagha=3;
        return 3;
        }
        if((poreh[3][2]==2&&poreh[3][4]==2&&poreh[3][5]==2&&poreh[3][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[3][2]==2&&poreh[3][4]==2&&poreh[3][5]==2)&&(poreh[2][3]==1||poreh[2][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[3][3]==2&&poreh[3][5]==2&&poreh[3][6]==2&&poreh[3][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[3][3]==2&&poreh[3][5]==2&&poreh[3][6]==2)&&(poreh[2][4]==1||poreh[2][4]==2)){
            narizagha=5;
        return 5;
        }


        /////////////////////////////////////////////////////////////////////////////////
        if((poreh[4][0]==2&&poreh[4][2]==2&&poreh[4][3]==2&&poreh[4][1]==1)){
            narizagha=2;
            return 0;
        }
        if((poreh[4][0]==2&&poreh[4][2]==2&&poreh[4][3]==2)&&(poreh[3][1]==1||poreh[3][1]==2)){
            narizagha=2;
            return 2;
        }
        if((poreh[4][1]==2&&poreh[4][3]==2&&poreh[4][4]==2&&poreh[4][2]==1)){
            narizagha=3;
        return 0;
        }
        if((poreh[4][1]==2&&poreh[4][3]==2&&poreh[4][4]==2)&&(poreh[3][2]==1||poreh[3][2]==2)){
            narizagha=3;
        return 3;
        }
        if((poreh[4][2]==2&&poreh[4][4]==2&&poreh[4][5]==2&&poreh[4][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[4][2]==2&&poreh[4][4]==2&&poreh[4][5]==2)&&(poreh[3][3]==1||poreh[3][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[4][3]==2&&poreh[4][5]==2&&poreh[4][6]==2&&poreh[4][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[4][3]==2&&poreh[4][5]==2&&poreh[4][6]==2)&&(poreh[3][4]==1||poreh[3][4]==2)){
            narizagha=5;
        return 5;
        }


        ///////////////////////////////////////////////////////////////////////

        if((poreh[5][0]==2&&poreh[5][2]==2&&poreh[5][3]==2&&poreh[5][1]==1)){
            narizagha=2;
            return 0;
        }
        if((poreh[5][0]==2&&poreh[5][2]==2&&poreh[5][3]==2)&&(poreh[4][1]==1||poreh[4][1]==2)){
            narizagha=2;
            return 2;
        }
        if((poreh[5][1]==2&&poreh[5][3]==2&&poreh[5][4]==2&&poreh[5][2]==1)){
            narizagha=3;
        return 0;
        }
        if((poreh[5][1]==2&&poreh[5][3]==2&&poreh[5][4]==2)&&(poreh[4][2]==1||poreh[4][2]==2)){
            narizagha=3;
        return 3;
        }
        if((poreh[5][2]==2&&poreh[5][4]==2&&poreh[5][5]==2&&poreh[5][3]==1)){
            narizagha=4;
        return 0;
        }
        if((poreh[5][2]==2&&poreh[5][4]==2&&poreh[5][5]==2)&&(poreh[4][3]==1||poreh[4][3]==2)){
            narizagha=4;
        return 4;
        }
        if((poreh[5][3]==2&&poreh[5][5]==2&&poreh[5][6]==2&&poreh[5][4]==1)){
            narizagha=5;
        return 0;
        }
        if((poreh[5][3]==2&&poreh[5][5]==2&&poreh[5][6]==2)&&(poreh[4][4]==1||poreh[4][4]==2)){
            narizagha=5;
        return 5;
        }

        ///////////////////////////////////////////////////

            return 0;




}
/////////////////////
int meduimghotrisharghi3chasbidechapberast(){
    for(int i1=0;i1<3;i1++){
    for(int j1=0;j1<4;j1++){
            //////////nafar1
        if((poreh[i1][j1]==2))
        {
                 if((poreh[i1+1][j1+1]==2))
                {
                                if((poreh[i1+2][j1+2]==2))
                                {
                                                if(((poreh[i1+2][j1+3]==1)||(poreh[i1+2][j1+3]==2))&&poreh[i1+3][j1+3]==0)
                                                {
                                                    narizagha1=j1+4;
                                                    narizagha=j1+4;
                                                    return j1+4;
                                                }
                                }
                }
        }

}
    }
    narizagha=narizagha1;
    return 0;
}
//////////////////////
int meduimghotrisharghi3chasbiderastbechap(){
     for(int i1=5;i1>2;i1--){
    for(int j1=6;j1>2;j1--){
            //////////nafar1
        if((poreh[i1][j1]==2))
        {
                 if((poreh[i1-1][j1-1]==2))
                {
                                if((poreh[i1-2][j1-2]==2))
                                {
                                                if(((poreh[i1-4][j1-3]==1)||(poreh[i1-4][j1-3]==2))&&poreh[i1-3][j1-3]==0)
                                                {
                                                    narizagha1=j1-2;
                                                    narizagha=j1-2;
                                                    return j1-2;
                                                }
                                }
                }
        }

}
    }
    narizagha=narizagha1;
    return 0;
}
///////////////////////////////////////////
int meduimghotrisharghi21chapberast(){
for(int i1=0;i1<3;i1++){
    for(int j1=0;j1<4;j1++){
            //////////nafar1
        if((poreh[i1][j1]==2))
        {
                 if((poreh[i1+1][j1+1]==2))
                {
                                if((poreh[i1+3][j1+3]==2))
                                {
                                                if(((poreh[i1+1][j1+2]==1)||(poreh[i1+1][j1+2]==2))&&(poreh[i1+2][j1+2]==0))
                                                {
                                                    narizagha1=j1+3;
                                                    narizagha=j1+3;
                                                    return j1+3;
                                                }
                                }
                }
        }

}
    }
narizagha=narizagha1;
    return 0;
}
////////////////////////////////////
int meduimghotrisharghi21rastbechap(){
    for(int i1=5;i1>2;i1--){
    for(int j1=6;j1>2;j1--){
            //////////nafar1
        if((poreh[i1][j1]==2))
        {
                 if((poreh[i1-1][j1-1]==2))
                {
                                if((poreh[i1-3][j1-3]==2))
                                {
                                                if(((poreh[i1-3][j1-2]==1)||(poreh[i1-3][j1-2]==2))&&poreh[i1-2][j1-2]==0)
                                                {
                                                    narizagha1=j1-1;
                                                    narizagha=j1-1;
                                                    return j1-1;
                                                }
                                }
                }
        }

}
    }
    narizagha=narizagha1;
    return 0;
}
///////////////////////////////////
int meduimghotrigharbi3chasbidechapberast(){
    for(int i1=5;i1>2;i1--){
    for(int j1=0;j1<4;j1++){
        if((poreh[i1][j1]==2))
        {
                 if((poreh[i1-1][j1+1]==2))
                {
                                if((poreh[i1-2][j1+2]==2))
                                {
                                                if(((poreh[i1-4][j1+3]==2)||(poreh[i1-4][j1+3]==1))&&poreh[i1-3][j1+3]==0)
                                                {
                                                    narizagha1=j1+4;
                                                    narizagha=j1+4;
                                                    return j1+4;
                                                }
                                }
                }
        }
}
}
narizagha=narizagha1;
return 0;
}

////////////////////////////////////
int meduimghotrigharbi3chasbiderastbechap(){
    for(int i1=0;i1<3;i1++){
    for(int j1=6;j1>2;j1--){
        if((poreh[i1][j1]==2))
        {
                 if((poreh[i1+1][j1-1]==2))
                {
                                if((poreh[i1+2][j1-2]==2))
                                {
                                             if((poreh[i1+2][j1-3]==1||poreh[i1+2][j1-3]==2)&&poreh[i1+3][j1-3]==0){
                                                    narizagha1=j1-2;
                                                    narizagha=j1-2;
                                                return j1-2;
                                             }
                                }
                }
        }
}
}
narizagha=narizagha1;
return 0;

}

////////////////////////////////////
int meduimghotrigharbi21chapberast(){

for(int i1=5;i1>2;i1--){
    for(int j1=0;j1<4;j1++){
            //////////nafar1
        if((poreh[i1][j1]==2))
        {
                 if((poreh[i1-1][j1+1]==2))
                {
                                if((poreh[i1-3][j1+3]==2))
                                {
                                                if(((poreh[i1-3][j1+2]==1)||(poreh[i1-3][j1+2]==2))&&poreh[i1-2][j1+2]==0)
                                                {
                                                    narizagha1=j1+3;
                                                    narizagha=j1+3;
                                                    return j1+3;
                                                }
                                }
                }
        }

}
    }
narizagha=narizagha1;
return 0;
}
///////////////////////////////////

int meduimghotrigharbi21rastbechap(){
for(int i1=0;i1<3;i1++){
    for(int j1=6;j1>2;j1--){
            //////////nafar1
        if((poreh[i1][j1]==2))
        {
                 if((poreh[i1+1][j1-1]==2))
                {
                                if((poreh[i1+3][j1-3]==2))
                                {
                                                if(((poreh[i1+1][j1+2]==1)||(poreh[i1+1][j1+2]==2))&&poreh[i1+2][j1-2]==0)
                                                {
                                                    narizagha1=j1+3;
                                                    narizagha=j1+3;
                                                    return j1+3;
                                                }
                                }
                }
        }

}
    }
narizagha=narizagha1;
return 0;
}
void cleaning();
int beshmarakharghotrgharbi(int i,int j){
    int computer=0;
    int bazikon=0;
    int beshmar=0;
for(int k=0 ; k < 4 ;k++)
{
        if(poreh[i-k][j+k]==1)
            computer++;
        if(poreh[i-k][j+k]==2)
            bazikon++;
}
  if(computer==0&&bazikon==4)
        beshmar=beshmar-9500;
    if(computer==0&&bazikon==3)
        beshmar=beshmar-4;
    if(computer==0&&bazikon==2)
        beshmar=beshmar-0;
    if(computer==4&&bazikon==0)
        beshmar=beshmar+15000;
    if(computer==3&&computer==0)
        beshmar=beshmar+5;
    if(computer==2&&bazikon==0)
        beshmar=beshmar+2;
    return beshmar;
}
///////////////////////////////////int beshmar akhar
int beshmarakharghotrsharghi(int i,int j){
int computer=0;
int bazikon=0;
int beshmar=0;
for(int k=0 ; k < 4 ;k++)
{
        if(poreh[i+k][j+k]==1)
            computer++;
        if(poreh[i+k][j+k]==2)
            bazikon++;
}
if(computer==0&&bazikon==4)
        beshmar=beshmar-9500;
    if(computer==0&&bazikon==3)
        beshmar=beshmar-4;
    if(computer==0&&bazikon==2)
        beshmar=beshmar-0;
    if(computer==4&&bazikon==0)
        beshmar=beshmar+15000;
    if(computer==3&&computer==0)
        beshmar=beshmar+5;
    if(computer==2&&bazikon==0)
        beshmar=beshmar+2;
    return beshmar;

}
///////////////////////////////////int beshmar akhar
int beshmarakharsotonhara(int i,int j){
    int computer=0;
    int bazikon=0;
    int beshmar=0;
    for(int ii = i ;ii < i+4 ; ii++){
        if(poreh[ii][j]==1)
            computer++;
        if(poreh[ii][j]==2)
            bazikon++;
    }
  if(computer==0&&bazikon==4)
        beshmar=beshmar-9500;
    if(computer==0&&bazikon==3)
        beshmar=beshmar-4;
    if(computer==0&&bazikon==2)
        beshmar=beshmar-0;
    if(computer==4&&bazikon==0)
        beshmar=beshmar+15000;
    if(computer==3&&computer==0)
        beshmar=beshmar+5;
    if(computer==2&&bazikon==0)
        beshmar=beshmar+2;
    return beshmar;
}
///////////////////////////////////int beshmar akhar
int beshmarakharradifhara(int i,int j){
    int computer=0;
    int bazikon=0;
    int beshmar=0;
    for(int jj = j ; jj < j+4 ;jj++){
        if(poreh[i][jj]==1)
            computer++;
        if(poreh[i][jj]==2)
            bazikon++;
    }
    if(computer==0&&bazikon==4)
        beshmar=beshmar-9500;
    if(computer==0&&bazikon==3)
        beshmar=beshmar-4;
    if(computer==0&&bazikon==2)
        beshmar=beshmar-0;
    if(computer==4&&bazikon==0)
        beshmar=beshmar+15000;
    if(computer==3&&computer==0)
        beshmar=beshmar+5;
    if(computer==2&&bazikon==0)
        beshmar=beshmar+2;
    return beshmar;
}
///////////////////////////////////akhar
int akhar(){
int beshmararzesh=0;
/////////////////////////radif
for(int i = 0 ; i < 6 ;i++){
    for(int j = 0 ; j < 4 ; j++)
    {

        beshmararzesh=beshmararzesh+beshmarakharradifhara(i,j);
    }
}

for(int j=0 ; j<7 ;j++){
    for(int i = 0 ; i < 3;i++){

        beshmararzesh=beshmararzesh+beshmarakharsotonhara(i,j);
    }
}
for(int i = 0 ; i < 3;i++){
    for(int j = 0 ; j < 4 ; j++){

        beshmararzesh=beshmararzesh+beshmarakharghotrsharghi(i,j);
    }
}
for(int i = 5 ; i > 2;i--){
    for(int j = 0 ; j < 4 ; j++){

        beshmararzesh=beshmararzesh+beshmarakharghotrgharbi(i,j);
    }
}
return beshmararzesh;
}
/////////////////////////////////pair minimax
pair <int,int> minimax(int ooo ,int pishbini){

    int bozorge=-1000000,kochike=1000000;
//////////////////motaghaier
pair<int,int> harekatarzesh;
bordanradifimajazi();
barandesotonimajazi();
ghotrigharbimajazi();
ghotrisharghimajazi();
if(aaa==1&&ooo%2==1){
    harekatarzesh.first-1;
    harekatarzesh.second=15000;
    return harekatarzesh;
}
if(aaa==1&&ooo%2==0){
    harekatarzesh.first=-1;
    harekatarzesh.second=-9500;
    return harekatarzesh;
}
if(pishbini>3){

    harekatarzesh.first=-1;
    harekatarzesh.second=akhar();
    return  harekatarzesh;
}
/////////////////
for(int j = 0 ; j < 7 ;j++){
    if((poreh[5][j]==1)||(poreh[5][j]==2))
        continue;
    if(ooo%2==1)
        poreh[checkpore(j+1)][j]=1;
    else
       poreh[checkpore(j+1)][j]=2;
       bordanradifimajazi();
       barandesotonimajazi();
       ghotrigharbimajazi();
       ghotrisharghimajazi();
    if(aaa==1&&ooo%2==1)
    {
        harekatarzesh.first=j;
        harekatarzesh.second=15000;
        aaa=0;
        poreh[checkpore(j+1)-1][j]=0;
        return harekatarzesh;
    }
    if(aaa==1&&ooo%2==0)
    {
        harekatarzesh.first=j;
        harekatarzesh.second=-9500;
        aaa=0;
        poreh[checkpore(j+1)-1][j]=0;
        return harekatarzesh;
    }
    if(ooo%2==1){
        if(bozorge<minimax(ooo+1,pishbini+1).second){
            bozorge=minimax(ooo+1,pishbini+1).second;
            harekatarzesh.first=j;
        }
    }
    if(ooo%2==0){
         if(kochike>minimax(ooo+1,pishbini+1).second){
            kochike=minimax(ooo+1,pishbini+1).second;
            harekatarzesh.first=j;
        }
    }
    poreh[checkpore(j+1)-1][j]=0;
}
    if(ooo%2==1){
        harekatarzesh.second=bozorge;
    }
    else
        harekatarzesh.second=kochike;
    return harekatarzesh;
}

/////////////////////////////////drawwwww
void draw(){
for(int i = 0 ; i < 6 ; i++){
    for(int j = 0 ; j < 7 ;j++){
        if(poreh[i][j]!=0)
        {
              if(i==5&&j==6){
             setcolor(BROWN);
             settextstyle(8,0,6);
        outtextxy(900,400,"DRAW :=]");
        aaa=1;

        }
            continue;
        }
        else
            return;
        }
    }
}

////////////////////////////////jadval emtiazat

/////////////////////////////////saat analog



void saat(){
sadomtime=sadomtime+5;
char atime[200];
char saatime[200];
if(sanietime==60)
{
    mintime=sanietime/60+mintime;
    sanietime=sanietime%60;
    sanietime=0;
}
if(sadomtime==240){
    sanietime=sadomtime/240+sanietime;
    sadomtime=sadomtime%240;
    sadomtime=0;
}
if(clockk==1)
{
    sprintf(atime,"%d",sanietime);
sprintf(saatime,"%d",mintime);
setcolor(WHITE);
settextstyle(8,0,5);
setcolor(DARKGRAY);
if(sanietime<10)
{
     outtextxy(1200,80,"0");
     outtextxy(1225,80,atime);
}
else{
outtextxy(1200,80,atime);
}
outtextxy(1175,80,":");
outtextxy(1155,80,saatime);
}
}


///////////////////////choose your weopon
void weapon()
{
    setfillstyle(SOLID_FILL,BLACK);
    bar(180,575,655,675);
    bar(705,575,1180,675);
        settextstyle(8,0, 5);
        setcolor(COLOR(200,150,0));
        outtextxy(230,600,"MOUSE");
        outtextxy(770,600,"KEYBOARD");
        rectangle(1100,630,1110,640);
        rectangle(1083,630,1093,640);
        rectangle(1066,630,1076,640);
        rectangle(1049,630,1059,640);
        rectangle(1057,613,1067,623);
        rectangle(1074,613,1084,623);
        rectangle(1091,613,1101,623);
        rectangle(1082,596,1092,606);
        rectangle(1065,596,1075,606);
        ////////////////////////
        setlinestyle(0,0,3);
        fillellipse(550,625,20,30);
        fillellipse(545,610,2,2);
        fillellipse(555,610,2,2);
       fillellipse(550,625,2,6);
        line(550,595,550,585);
          ////////////////////////////////ghaleb
         /*   setfillstyle(SOLID_FILL,COLOR(238,153,153));
        bar(0,20,1400,250);*/
        //////////////////////////////////////c
        setfillstyle(SOLID_FILL,BLACK);
        bar(150,30,230,40);
        bar(150,30,160,110);
        bar(150,110,230,120);
        ////////////////////////////h
        bar(245,30,255,120);
        bar(245,70,325,80);
        bar(315,30,325,120);
        ////////////////////////////s
        bar(340,35,420,115);
        bar(435,35,515,115);
          setfillstyle(SOLID_FILL,COLOR(255,153,102));
        bar(360,55,400,95);
           setfillstyle(SOLID_FILL,COLOR(255,153,102));
        bar(455,55,495,95);
         setfillstyle(SOLID_FILL,BLACK);
        bar(530,30,610,40);
        bar(530,70,610,80);
        bar(530,110,610,120);
        bar(530,30,540,70);
        bar(600,70,610,120);
        ///////////////////////////e
         bar(625,30,635,120);
        bar(625,30,705,40);
        bar(625,70,705,80);
        bar(625,110,705,120);
        ////////////////////////////c
        bar(580,140,660,150);
        bar(580,150,590,230);
        bar(580,220,660,230);
        ///////////////////////////o
        bar(675,145,755,225);
        setfillstyle(SOLID_FILL,COLOR(255,153,102));
        bar(698,165,735,205);
         setfillstyle(SOLID_FILL,BLACK);
        //////////////////////////n
        bar(770,140,780,230);
        setcolor(BLACK);
        setlinestyle(0,0,9);
        line(776,143,835,226);
        bar(830,140,840,230);
        //////////////////////////t
        bar(845,115,945,125);
        bar(890,115,900,230);
        //////////////////////////r
        bar(925,140,1005,200);
        bar(920,145,935,230);
        bar(965,145,980,230);
           setfillstyle(SOLID_FILL,COLOR(255,153,102));
        bar(945,160,985,180);
         setfillstyle(SOLID_FILL,BLACK);
        //////////////////////o
        bar(1020,145,1100,225);
          setfillstyle(SOLID_FILL,COLOR(255,153,102));
        bar(1040,165,1080,205);
         setfillstyle(SOLID_FILL,BLACK);
        /////////////////////////L
         bar(1108,113,1113,238);
         bar(1102,120,1107,245);
         bar(1108,238,1188,244);
         bar(1102,245,1182,251);
        ///////////////////////////e
        bar(1115,145,1125,235);
        bar(1115,145,1195,155);
        bar(1115,184,1195,194);
        bar(1115,225,1195,235);
           //////////////////////////r
        bar(1210,140,1290,200);
        bar(1205,145,1220,230);
        bar(1245,145,1260,230);
         setfillstyle(SOLID_FILL,COLOR(255,153,102));
        bar(1230,160,1270,180);
         setfillstyle(SOLID_FILL,BLACK);
}
///////////////////mouse
int makan(int xmouse)
{
    if(xmouse>=180&&xmouse<=655)
        return 1;
    if(xmouse>=705&&xmouse<=1180)
        return 2;
}
/////////////////////////////limitation
int limitationn(int rang[],int ooo){
setfillstyle(SOLID_FILL,WHITE);
bar(30,670,60,70);
time(&ennnddlimit);
if(((int)ennnddlimit-startlimit)>=30){
time(&startlimit);
setfillstyle(SOLID_FILL,WHITE);
bar(30,670,60,70);
ooo++;
nobat(ooo,rang);
}
if(((int)ennnddlimit-startlimit)<30){
    setfillstyle(SOLID_FILL,BLACK);
bar(30,70+20*((int)ennnddlimit-startlimit),60,70);
}
return ooo;
}

int main()
 {
     //saaat();
     time_t start, eend;
     srand(time(NULL));
     string clean;
     for(int ii = 0 ; ii < 6 ; ii++){
    for(int jjj=0;jjj<7;jjj++){
        poreh[ii][jjj]=0;
    }
}

////////////////////////loading
        initwindow(1400,700);
        charchob2();
        loading();
        delay(500);
        closegraph();
/////////////////////////////mouse keyboard
initwindow(1400,700);
int weaponnn=0;
   charchob2();
   int kjjjjjj=0;
    weapon();
    while(!kbhit()){
    if(ismouseclick(WM_LBUTTONDOWN))
        {
            int xxmousex=mousex();
            clearmouseclick(WM_LBUTTONDOWN);
            weaponnn=makan(xxmousex);
   kjjjjjj++;
        }
        if(kjjjjjj==1)
            break;
    }
closegraph();

//////////////////////////////choosing
initwindow(1400,700);
 charchob2();
 settextstyle(8,0, 5);
 single();
           settextstyle(8,0, 3);
        setcolor(WHITE);
outtextxy(240,100,"WELCOME TO THE GAME PLEASE CHOOSE YOUR MODE TO CONTINUE PLAYING");
setcolor(DARKGRAY);
outtextxy(0,660,"PRESS M DURING THE GAME TO GO TO THE SETTING");
setcolor(LIGHTBLUE);
outtextxy(0,660,"USE CHEATCODE IN SINGLEPLAYER AT THE END OF THE GAME");
delay(1000);
setcolor(LIGHTRED);
outtextxy(0,660,"PRESS CTRL+Z DURING THE MULTIPLAY GAME TO TAKE ONE STEP BACK ");
delay(1000);
setcolor(BLACK);

int jjjjjjjjj = 0 ;
    int modee=0;
    int xxmousex=0,yymousey=0;
   while(!kbhit()){

    if(ismouseclick(WM_LBUTTONDOWN))
        {
            xxmousex=mousex();
            yymousey=mousey();
            clearmouseclick(WM_LBUTTONDOWN);
            modee=singlemouse(xxmousex,yymousey);
            cout <<modee;
   jjjjjjjjj++;
        }
        if(jjjjjjjjj==1)
            break;
    }

closegraph();
//////////////////////////////
     initwindow(1400,700);
     charchob2();
     settextstyle(8,0, 3);
    outtextxy(10,10,"PLEASE CHOOSE YOUR COLORS BY CLICKING ON THE COLOR");
    outtextxy(10,30,"TO CONTINUE");
    rangha();
int jj = 0 ;
    int rang[2];
    int xxmouse=0,yymouse=0;
    while(!kbhit()){
                if((ismouseclick(WM_LBUTTONDOWN)))
        {
            cout << 1;
        xxmouse=mousex();
            yymouse=mousey();
            clearmouseclick(WM_LBUTTONDOWN);
            rang[jj]=rangmouse(xxmouse,yymouse);
        jj++;
        }
        if(jj==2)
        break;
    }
closegraph();
/////////////////////////
if(modee==2){
     int ooo=0;
    //int R=253,G=149,B=0;
	initwindow(1400,700);
	time(&start);
    charchob();
    gomboli();
       setlinestyle(0,0,5);
    settextstyle(8,0, 5);
    setcolor(COLOR(102, 153, 255));
      outtextxy(900,150,"4 IN A ROW GAME");
      jadvalemtiaz(rang);
      setlinestyle(0,0,5);
      setbkcolor(BLACK);
    int xmouse,ymouse,radif,oo=0;
    nobat(ooo,rang);
    if(weaponnn==1)
    {
        time(&startlimit);
        while(1){
        if(ooo%2==1&&aaa==0&&timelimiter==1)
            ooo=limitationn(rang,ooo);
        if(ooo%2==0&&aaa==0&&timelimiter==1)
           ooo=limitationn(rang,ooo);
            saat();
         mosalassabz(mousex());
       if((ismouseclick(WM_LBUTTONDOWN))){
            time(&startlimit);
             ejazez=1;
            ooo=ooo+1;
        xmouse=mousex();
        ymouse=mousey();
        saat();
       radif=mousepeidakon(xmouse);
       clearmouseclick(WM_LBUTTONDOWN);
        pore(radif-1,ooo);
       int tedadchecking1=checkpore(radif);
       bargasht = tedadchecking1;
      barandesotoni(radif-1,ooo,rang);
      saat();
   //   cout <<tedadchecking1;
   bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
       nobat(ooo,rang);

    }
     if(aaa==0)
        {
            draw();
        }
      if(aaa==1)
            break;

 if(kbhit()){
            char ch=getch();
    if(ch=='m')
    {
        setting(rang);
    }
     if(ch==27)
         break;
    if(ch==26&&ejazez==1&&ctrlz==1)
    {
        ejazez=0;
        ooo--;
        poreh[bargasht-1][radif-1]=0;
    if(radif==1)
    {
      setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(175,615,50,50);
        if(bargasht==2)
        fillellipse(175,514,50,50);
        if(bargasht==3)
        fillellipse(175,413,50,50);
        if(bargasht==4)
        fillellipse(175,312,50,50);
        if(bargasht==5)
        fillellipse(175,211,50,50);
        if(bargasht==6)
        fillellipse(175,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
   if(radif==2)
    {
        setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(276,615,50,50);
        if(bargasht==2)
        fillellipse(276,514,50,50);
        if(bargasht==3)
        fillellipse(276,413,50,50);
        if(bargasht==4)
        fillellipse(276,312,50,50);
        if(bargasht==5)
        fillellipse(276,211,50,50);
        if(bargasht==6)
        fillellipse(276,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
if(radif==3)
    {
     setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(377,615,50,50);
        if(bargasht==2)
        fillellipse(377,514,50,50);
        if(bargasht==3)
        fillellipse(377,413,50,50);
        if(bargasht==4)
        fillellipse(377,312,50,50);
        if(bargasht==5)
        fillellipse(377,211,50,50);
        if(bargasht==6)
        fillellipse(377,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
    if(radif==4)
    {
       setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(478,615,50,50);
        if(bargasht==2)
        fillellipse(478,514,50,50);
        if(bargasht==3)
        fillellipse(478,413,50,50);
        if(bargasht==4)
        fillellipse(478,312,50,50);
        if(bargasht==5)
        fillellipse(478,211,50,50);
        if(bargasht==6)
        fillellipse(478,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
    if(radif==5)
    {
        setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(579,615,50,50);
        if(bargasht==2)
        fillellipse(579,514,50,50);
        if(bargasht==3)
        fillellipse(579,413,50,50);
        if(bargasht==4)
        fillellipse(579,312,50,50);
        if(bargasht==5)
        fillellipse(579,211,50,50);
        if(bargasht==6)
        fillellipse(579,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
    if(radif==6)
    {
        setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(680,615,50,50);
        if(bargasht==2)
        fillellipse(680,514,50,50);
        if(bargasht==3)
        fillellipse(680,413,50,50);
        if(bargasht==4)
        fillellipse(680,312,50,50);
        if(bargasht==5)
        fillellipse(680,211,50,50);
        if(bargasht==6)
        fillellipse(680,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
    if(radif==7)
    {
        setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(781,615,50,50);
        if(bargasht==2)
        fillellipse(781,514,50,50);
        if(bargasht==3)
        fillellipse(781,413,50,50);
        if(bargasht==4)
        fillellipse(781,312,50,50);
        if(bargasht==5)
        fillellipse(781,211,50,50);
        if(bargasht==6)
        fillellipse(781,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
        continue;
    }

        }
}
time(&eend);
settextstyle(8,0, 3);
outtextxy(990,650,"Duration time:");
   int time_taken = (int)(eend - start);
    int time_taken1=time_taken%60;
     char zaman[20];
     char zaman1[20];
    if(time_taken%60!=0){
          sprintf(zaman,"%d",time_taken/60);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1270,650,zaman1);
    }
   if(time_taken%60==0){
          sprintf(zaman,"%d",(time_taken/60)+1);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1255,650,zaman1);
   }
   outtextxy(950,620,"PRESS R TO RESTART THE GAME");
   sanietime=time_taken%60;
   mintime=(time_taken/60);
   saat();
   jadvalemtiaz(rang);
char ch11=getch();
   if(ch11==114)
      {
          closegraph();
          cleaning();
      }

getch();
    }
    if(weaponnn==2)
    {
        time(&startlimit);
        radif=1;
        char zarbe;
        mosalassabzkeybord(radif);
        while(1){
                if(ooo%2==1&&aaa==0&&timelimiter==1)
            ooo=limitationn(rang,ooo);
        if(ooo%2==0&&aaa==0&&timelimiter==1)
           ooo=limitationn(rang,ooo);
        mosalassabzkeybord(radif);
        saat();
       if(kbhit()){
            zarbe=getch();
            ejazez=1;
            saat();
            if(zarbe=='m')
    {
        setting(rang);
    }
       if(zarbe=='a'&&radif!=1)
       {
       radif=radif-1;
       }
       if(zarbe=='d'&&radif!=7)
       {
        radif=radif+1;
       }
       if(zarbe==26&&ejazez==1&&ctrlz==1)
       {
        ejazez=0;
        ooo--;
        poreh[bargasht-1][radif-1]=0;
    if(radif==1)
    {
      setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(175,615,50,50);
        if(bargasht==2)
        fillellipse(175,514,50,50);
        if(bargasht==3)
        fillellipse(175,413,50,50);
        if(bargasht==4)
        fillellipse(175,312,50,50);
        if(bargasht==5)
        fillellipse(175,211,50,50);
        if(bargasht==6)
        fillellipse(175,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
   if(radif==2)
    {
        setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(276,615,50,50);
        if(bargasht==2)
        fillellipse(276,514,50,50);
        if(bargasht==3)
        fillellipse(276,413,50,50);
        if(bargasht==4)
        fillellipse(276,312,50,50);
        if(bargasht==5)
        fillellipse(276,211,50,50);
        if(bargasht==6)
        fillellipse(276,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
if(radif==3)
    {
     setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(377,615,50,50);
        if(bargasht==2)
        fillellipse(377,514,50,50);
        if(bargasht==3)
        fillellipse(377,413,50,50);
        if(bargasht==4)
        fillellipse(377,312,50,50);
        if(bargasht==5)
        fillellipse(377,211,50,50);
        if(bargasht==6)
        fillellipse(377,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
    if(radif==4)
    {
       setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(478,615,50,50);
        if(bargasht==2)
        fillellipse(478,514,50,50);
        if(bargasht==3)
        fillellipse(478,413,50,50);
        if(bargasht==4)
        fillellipse(478,312,50,50);
        if(bargasht==5)
        fillellipse(478,211,50,50);
        if(bargasht==6)
        fillellipse(478,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
    if(radif==5)
    {
        setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(579,615,50,50);
        if(bargasht==2)
        fillellipse(579,514,50,50);
        if(bargasht==3)
        fillellipse(579,413,50,50);
        if(bargasht==4)
        fillellipse(579,312,50,50);
        if(bargasht==5)
        fillellipse(579,211,50,50);
        if(bargasht==6)
        fillellipse(579,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
    if(radif==6)
    {
        setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(680,615,50,50);
        if(bargasht==2)
        fillellipse(680,514,50,50);
        if(bargasht==3)
        fillellipse(680,413,50,50);
        if(bargasht==4)
        fillellipse(680,312,50,50);
        if(bargasht==5)
        fillellipse(680,211,50,50);
        if(bargasht==6)
        fillellipse(680,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
    if(radif==7)
    {
        setcolor(COLOR(212,58,64));
        setfillstyle(SOLID_FILL,COLOR(64,56,92));
        setlinestyle(0,0,5);
        if(bargasht==1)
        fillellipse(781,615,50,50);
        if(bargasht==2)
        fillellipse(781,514,50,50);
        if(bargasht==3)
        fillellipse(781,413,50,50);
        if(bargasht==4)
        fillellipse(781,312,50,50);
        if(bargasht==5)
        fillellipse(781,211,50,50);
        if(bargasht==6)
        fillellipse(781,110,50,50);
        bargasht=0;
        nobat(ooo,rang);
    }
        continue;
       }
   //   cout <<tedadchecking1;

   if(zarbe==' ')
   {
       time(&startlimit);
            pore(radif-1,ooo);
       int tedadchecking1=checkpore(radif);
       bargasht = tedadchecking1;
      barandesotoni(radif-1,ooo,rang);
      saat();
         bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
       nobat(ooo,rang);
ooo=ooo+1;
   }
    }
     if(aaa==0)
        {
            draw();
        }
      if(aaa==1)
            break;
       }
time(&eend);
settextstyle(8,0, 3);
outtextxy(990,650,"Duration time:");
   int time_taken = (int)(eend - start);
    int time_taken1=time_taken%60;
     char zaman[20];
     char zaman1[20];
    if(time_taken%60!=0){
          sprintf(zaman,"%d",time_taken/60);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1270,650,zaman1);
    }
   if(time_taken%60==0){
          sprintf(zaman,"%d",(time_taken/60)+1);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1255,650,zaman1);
   }
   outtextxy(950,620,"PRESS R TO REASTART THE GAME");
   sanietime=time_taken%60;
   sanietime=time_taken%60;
   mintime=(time_taken/60);
   saat();
   jadvalemtiaz(rang);
char ch11=getch();
   if(ch11==114)
      {
          closegraph();
          cleaning();
      }

getch();
    }

}

if(modee==1){
///////////////////////////////easy medium hard
        initwindow(1400,700);
        charchob2();
        sath3();
        int jjjjjjjjj1 = 0 ;
    int modee1=0;
    int x1xmousex=0,y1ymousey=0;
   while(!kbhit()){
    if(ismouseclick(WM_LBUTTONDOWN))
        {
            x1xmousex=mousex();
            y1ymousey=mousey();
            clearmouseclick(WM_LBUTTONDOWN);
            modee1=mousesath3(x1xmousex);
            cout <<modee1;
   jjjjjjjjj1++;
        }
        if(jjjjjjjjj1==1)
            break;
    }

closegraph();
////////////////////////////////////easy
if(modee1==1)
{
    int ooo=0;
    //int R=253,G=149,B=0;
	initwindow(1400,700);
	time(&start);
    charchob();
    gomboli();
    settextstyle(8,0,6);
    setcolor(COLOR(102, 153, 255));
      outtextxy(880,150,"4 IN A ROW GAME");
      jadvalemtiaz(rang);
      setlinestyle(0,0,5);
      setbkcolor(BLACK);
    int xmouse,ymouse,radif,oo=0;
    nobat(ooo,rang);
    if(weaponnn==1)
    {
        time(&startlimit);
       while(1){
            if(ooo%2==1&&aaa==0&&timelimiter==1)
            ooo=limitationn(rang,ooo);
        if(ooo%2==0&&aaa==0&&timelimiter==1)
           ooo=limitationn(rang,ooo);
            saat();
        mosalassabz(mousex());
       if((ismouseclick(WM_LBUTTONDOWN))&&ooo%2==0){
            time(&startlimit);
        xmouse=mousex();
        ymouse=mousey();
       radif=mousepeidakon(xmouse);
       clearmouseclick(WM_LBUTTONDOWN);
    saat();
        pore(radif-1,ooo);
        settextstyle(8,0,6);
        saat();
       int tedadchecking1=checkpore(radif);
      barandesotoni(radif-1,ooo,rang);
   //   cout <<tedadchecking1;
   bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
saat();
       nobat(ooo,rang);
       ooo=ooo+1;
    }
    if(!(ismouseclick(WM_LBUTTONDOWN))&&ooo%2==1&&aaa==0)
    {
         radif=easyai();
            if(poreh[5][radif-1]==0)
        {

                   pore(radif-1,ooo);
        int tedadchecking1=checkpore(radif);
        settextstyle(8,0,6);
        barandesotoni(radif-1,ooo,rang);
         bordanradifi(ooo,rang);
         saat();
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
      //PlaySound(TEXT("barkhord1 .wav"),NULL,SND_SYNC);
       nobat(ooo,rang);
       ooo++;
        }
    }
    if(aaa==0)
        {
            draw();
        }
      if(aaa==1)
            break;
            if(kbhit()){
            char ch=getch();
            if(ch=='m')
    {
        setting(rang);
    }
     if(ch==27)
         break;
            }
}

    }
    if(weaponnn==2){
            time(&startlimit);
          radif=1;
        char zarbe;
        mosalassabzkeybord(radif);
        while(1){
                if(ooo%2==1&&aaa==0&&timelimiter==1)
            ooo=limitationn(rang,ooo);
        if(ooo%2==0&&aaa==0&&timelimiter==1)
           ooo=limitationn(rang,ooo);
        mosalassabzkeybord(radif);
        saat();
        if(ooo%2==0&&aaa==0)
        {
             if(kbhit()){
            zarbe=getch();
            ejazez=1;
            saat();
            if(zarbe=='m')
    {
        setting(rang);
    }
       if(zarbe=='a'&&radif!=1)
       {
       radif=radif-1;
       }
       if(zarbe=='d'&&radif!=7)
       {
        radif=radif+1;
       }

   //   cout <<tedadchecking1;

   if(zarbe==' ')
   {
       time(&startlimit);
            pore(radif-1,ooo);
       int tedadchecking1=checkpore(radif);
       bargasht = tedadchecking1;
      barandesotoni(radif-1,ooo,rang);
      saat();
         bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
       nobat(ooo,rang);
ooo=ooo+1;
   }
        }

    }
        if(ooo%2==1&&aaa==0)
      {
           radif=easyai();
            if(poreh[5][radif-1]==0)
        {
            time(&startlimit);
                   pore(radif-1,ooo);
        int tedadchecking1=checkpore(radif);
        settextstyle(8,0,6);
        barandesotoni(radif-1,ooo,rang);
         bordanradifi(ooo,rang);
         saat();
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
      //PlaySound(TEXT("barkhord1 .wav"),NULL,SND_SYNC);
       nobat(ooo,rang);
       ooo++;
        }
      }

     if(aaa==0)
        {
            draw();
        }
      if(aaa==1)
            break;
       }
    }
    time(&eend);
settextstyle(8,0, 3);
outtextxy(990,650,"Duration time:");
   int time_taken = (int)(eend - start);
    int time_taken1=time_taken%60;
     char zaman[20];
     char zaman1[20];
    if(time_taken%60!=0){
          sprintf(zaman,"%d",time_taken/60);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1270,650,zaman1);
    }
   if(time_taken%60==0){
          sprintf(zaman,"%d",(time_taken/60)+1);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1255,650,zaman1);
   }
   outtextxy(950,620,"PRESS R TO REASTART THE GAME");
   sanietime=time_taken%60;
   mintime=(time_taken/60);
   saat();
   jadvalemtiaz(rang);
    char ch11=getch();
   if(ch11==114)
      {
          closegraph();
          cleaning();
      }
      if(ch11==104&&cheatcode==1){
    char ch22=getch();
    if(ch22==101){
        char ch33=getch();
        if(ch33==115){
                    char ch44=getch();
        if(ch44==111)
        {
            char ch55=getch();
        if(ch55==121){
            char ch66=getch();
        if(ch66==97){
            char ch77=getch();
        if(ch77==109)
        {
                   emtiaz[0]--;
          jadvalemtiaz(rang);
        }
        }

        }
        }

        }

    }
}


        getch();

}
////////////////////////////////////medium

if(modee1==2)
{
    int ooo=0;
    //int R=253,G=149,B=0;
	initwindow(1400,700);
	time(&start);
    charchob();
    gomboli();
    settextstyle(8,0,6);
    setcolor(COLOR(102, 153, 255));
      outtextxy(880,150,"4 IN A ROW GAME");
      jadvalemtiaz(rang);
      setlinestyle(0,0,5);
      setbkcolor(BLACK);
    int xmouse,ymouse,radif,oo=0;
settextstyle(8,0, 3);
nobat(ooo,rang);
if(weaponnn==1)
{
    time(&startlimit);
     while(1){
            if(ooo%2==1&&aaa==0&&timelimiter==1)
            ooo=limitationn(rang,ooo);
        if(ooo%2==0&&aaa==0&&timelimiter==1)
           ooo=limitationn(rang,ooo);
            saat();
        mosalassabz(mousex());
       if((ismouseclick(WM_LBUTTONDOWN))&&ooo%2==0){
            time(&startlimit);
        xmouse=mousex();
        ymouse=mousey();
       radif=mousepeidakon(xmouse);
       clearmouseclick(WM_LBUTTONDOWN);
        pore(radif-1,ooo);
        settextstyle(8,0,6);
       int tedadchecking1=checkpore(radif);
        settextstyle(8,0,6);
      barandesotoni(radif-1,ooo,rang);
    saat();
   //   cout <<tedadchecking1;
   bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
      //PlaySound(TEXT("barkhord1 .wav"),NULL,SND_SYNC);
       nobat(ooo,rang);
       ooo=ooo+1;
    }
    if(!(ismouseclick(WM_LBUTTONDOWN))&&ooo%2==1&&aaa==0)
    {
        time(&startlimit);
        if(meduimghotrigharbi3chasbiderastbechap()!=0)
            radif=meduimghotrigharbi3chasbiderastbechap();
        if(meduimghotrigharbi3chasbidechapberast()!=0)
            radif=meduimghotrigharbi3chasbidechapberast();
        if(meduimghotrigharbi21rastbechap()!=0)
            radif=meduimghotrigharbi21rastbechap();
        if(meduimghotrigharbi21chapberast()!=0)
            radif=meduimghotrigharbi21chapberast();
        if(meduimghotrisharghi21chapberast()!=0)
           radif=meduimghotrisharghi21chapberast();
        if(meduimghotrisharghi21rastbechap()!=0)
           radif=meduimghotrisharghi21rastbechap();
        if(meduimghotrisharghi3chasbiderastbechap()!=0)
           radif=meduimghotrisharghi3chasbiderastbechap();
        if(meduimghotrisharghi3chasbidechapberast()!=0)
            radif=meduimghotrisharghi3chasbidechapberast();
        if(meduimradifi21chasbide()!=0)
            radif=meduimradifi21chasbide();
        if(meduimradifi12chasbide()!=0)
            radif=meduimradifi12chasbide();
        if(meduimradifichaprast3chasbide()!=0)
            radif=meduimradifichaprast3chasbide();
        if(meduimaisotoni()!=0)
            radif=meduimaisotoni();
        if(meduimradifirastchap3chasbide()!=0)
            radif=meduimradifirastchap3chasbide();
        else if (meduimaisotoni()==0&&meduimradifichaprast3chasbide()==0&&meduimradifirastchap3chasbide()==0&&meduimradifi12chasbide()==0&&meduimradifi21chasbide()==0&&meduimghotrisharghi3chasbidechapberast()==0&&meduimghotrisharghi3chasbiderastbechap()==0&&meduimghotrisharghi21rastbechap()==0&&meduimghotrisharghi21chapberast()==0&&meduimghotrigharbi21chapberast()==0&&meduimghotrigharbi21rastbechap()==0&&meduimghotrigharbi3chasbidechapberast()==0&&meduimghotrigharbi3chasbiderastbechap()==0)
           {
               while(1){
                radif=easyai();
                if(radif!=narizagha){
                    break;
                }
               }
           }

            if(poreh[5][radif-1]==0)
        {
                   pore(radif-1,ooo);
        int tedadchecking1=checkpore(radif);
        settextstyle(8,0,6);
         settextstyle(8,0,6);
         barandesotoni(radif-1,ooo,rang);
         saat();
         bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
      //PlaySound(TEXT("barkhord1 .wav"),NULL,SND_SYNC);
       nobat(ooo,rang);
       ooo++;
        }
    }
     if(aaa==0)
        {
            draw();

        }
      if(aaa==1)
            break;
              if(kbhit()){
            char ch=getch();
            if(ch=='m')
    {
        setting(rang);
    }
     if(ch==27)
         break;
            }

}
}
if(weaponnn==2){
        time(&startlimit);
        radif=1;
        char zarbe;
        mosalassabzkeybord(radif);
        while(1){
                if(ooo%2==1&&aaa==0&&timelimiter==1)
            ooo=limitationn(rang,ooo);
        if(ooo%2==0&&aaa==0&&timelimiter==1)
           ooo=limitationn(rang,ooo);
        mosalassabzkeybord(radif);
        saat();
        if(ooo%2==0&&aaa==0)
        {
             if(kbhit()){
            zarbe=getch();
            ejazez=1;
            saat();
            if(zarbe=='m')
    {
        setting(rang);
    }
       if(zarbe=='a'&&radif!=1)
       {
       radif=radif-1;
       }
       if(zarbe=='d'&&radif!=7)
       {
        radif=radif+1;
       }

   //   cout <<tedadchecking1;

   if(zarbe==' ')
   {
       time(&startlimit);
            pore(radif-1,ooo);
       int tedadchecking1=checkpore(radif);
       bargasht = tedadchecking1;
      barandesotoni(radif-1,ooo,rang);
      saat();
         bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
       nobat(ooo,rang);
ooo=ooo+1;
   }
        }

    }
        if(ooo%2==1&&aaa==0)
      {
          time(&startlimit);
            if(meduimghotrigharbi3chasbiderastbechap()!=0)
            radif=meduimghotrigharbi3chasbiderastbechap();
        if(meduimghotrigharbi3chasbidechapberast()!=0)
            radif=meduimghotrigharbi3chasbidechapberast();
        if(meduimghotrigharbi21rastbechap()!=0)
            radif=meduimghotrigharbi21rastbechap();
        if(meduimghotrigharbi21chapberast()!=0)
            radif=meduimghotrigharbi21chapberast();
        if(meduimghotrisharghi21chapberast()!=0)
           radif=meduimghotrisharghi21chapberast();
        if(meduimghotrisharghi21rastbechap()!=0)
           radif=meduimghotrisharghi21rastbechap();
        if(meduimghotrisharghi3chasbiderastbechap()!=0)
           radif=meduimghotrisharghi3chasbiderastbechap();
        if(meduimghotrisharghi3chasbidechapberast()!=0)
            radif=meduimghotrisharghi3chasbidechapberast();
        if(meduimradifi21chasbide()!=0)
            radif=meduimradifi21chasbide();
        if(meduimradifi12chasbide()!=0)
            radif=meduimradifi12chasbide();
        if(meduimradifichaprast3chasbide()!=0)
            radif=meduimradifichaprast3chasbide();
        if(meduimaisotoni()!=0)
            radif=meduimaisotoni();
        if(meduimradifirastchap3chasbide()!=0)
            radif=meduimradifirastchap3chasbide();
        else if (meduimaisotoni()==0&&meduimradifichaprast3chasbide()==0&&meduimradifirastchap3chasbide()==0&&meduimradifi12chasbide()==0&&meduimradifi21chasbide()==0&&meduimghotrisharghi3chasbidechapberast()==0&&meduimghotrisharghi3chasbiderastbechap()==0&&meduimghotrisharghi21rastbechap()==0&&meduimghotrisharghi21chapberast()==0&&meduimghotrigharbi21chapberast()==0&&meduimghotrigharbi21rastbechap()==0&&meduimghotrigharbi3chasbidechapberast()==0&&meduimghotrigharbi3chasbiderastbechap()==0)
           {
               while(1){
                radif=easyai();
                if(radif!=narizagha){
                    break;
                }
               }
           }

            if(poreh[5][radif-1]==0)
        {
                   pore(radif-1,ooo);
        int tedadchecking1=checkpore(radif);
        settextstyle(8,0,6);
         settextstyle(8,0,6);
         barandesotoni(radif-1,ooo,rang);
         saat();
         bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
      //PlaySound(TEXT("barkhord1 .wav"),NULL,SND_SYNC);
       nobat(ooo,rang);
       ooo++;
        }
      }

     if(aaa==0)
        {
            draw();
        }
      if(aaa==1)
            break;
       }

}
    time(&eend);
settextstyle(8,0, 3);
outtextxy(990,650,"Duration time:");
   int time_taken = (int)(eend - start);
    int time_taken1=time_taken%60;
     char zaman[20];
     char zaman1[20];
    if(time_taken%60!=0){
          sprintf(zaman,"%d",time_taken/60);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1270,650,zaman1);
    }
   if(time_taken%60==0){
          sprintf(zaman,"%d",(time_taken/60)+1);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1255,650,zaman1);
   }
   outtextxy(950,620,"PRESS R TO REASTART THE GAME");
   sanietime=time_taken%60;
   mintime=(time_taken/60);
   saat();
   jadvalemtiaz(rang);
char ch11=getch();
   if(ch11==114)
      {
          closegraph();
          cleaning();
      }
if(ch11==104){
    char ch22=getch();
    if(ch22==101){
        char ch33=getch();
        if(ch33==115){
                    char ch44=getch();
        if(ch44==111)
        {
            char ch55=getch();
        if(ch55==121){
            char ch66=getch();
        if(ch66==97){
            char ch77=getch();
        if(ch77==109)
        {
                   emtiaz[0]--;
          jadvalemtiaz(rang);
        }
        }

        }
        }

        }

    }
}
ch11=getch();
   if(ch11==114)
      {
                  closegraph();
          cleaning();
      }

getch();

}


////////////////////////////////////hard
if(modee1==3)
{
    int ooo=0;
    //int R=253,G=149,B=0;
	initwindow(1400,700);
	time(&start);
    charchob();
    gomboli();
     settextstyle(8,0,6);
    setcolor(COLOR(102, 153, 255));
     outtextxy(880,150,"4 IN A ROW GAME");
    int xmouse,ymouse,radif,oo=0;
    jadvalemtiaz(rang);
    setlinestyle(0,0,5);
    setbkcolor(BLACK);
    nobat(ooo,rang);
    if(weaponnn==1){
        time(&startlimit);
        while(1){
                if(ooo%2==1&&aaa==0&&timelimiter==1)
            ooo=limitationn(rang,ooo);
        if(ooo%2==0&&aaa==0&&timelimiter==1)
           ooo=limitationn(rang,ooo);
        saat();
        mosalassabz(mousex());
       if((ismouseclick(WM_LBUTTONDOWN))&&ooo%2==0&&aaa==0  ){
            time(&startlimit);
          //  sanietime=0;
          saat();
        xmouse=mousex();
        ymouse=mousey();
       radif=mousepeidakon(xmouse);
       clearmouseclick(WM_LBUTTONDOWN);
        pore(radif-1,ooo);
        settextstyle(8,0,6);
       int tedadchecking1=checkpore(radif);
       saat();
       //////////////////////////////////////
      barandesotoni(radif-1,ooo,rang);
   //   cout <<tedadchecking1;
   bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
       nobat(ooo,rang);
       ooo=ooo+1;
    }
    if(!(ismouseclick(WM_LBUTTONDOWN))&&ooo%2==1&&aaa==0)
    {
        time(&startlimit);
        // sanietime=0;
        saat();
        radif=minimax(0,0).first+1;

        //   if(poreh[5][radif-1]==0)
          // {
            settextstyle(8,0,6);
         //////////////////////////////////////////////////baziai
      pore(radif-1,ooo);
      int tedadchecking1=checkpore(radif);
      saat();
        //////////////////////////////
         settextstyle(8,0,6);
         settextstyle(8,0,6);
    barandesotoni(radif-1,ooo,rang);
   bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
      //PlaySound(TEXT("barkhord1 .wav"),NULL,SND_SYNC);
       nobat(ooo,rang);
       ooo++;
        }
        if(aaa==0)
        {
            draw();
        }

          if(aaa==1)
                break;
                  if(kbhit()){
            char ch=getch();
            if(ch=='m')
    {
        setting(rang);
    }
     if(ch==27)
         break;
            }
    }
    }
    if(weaponnn==2){
        time(&startlimit);
          radif=1;
        char zarbe;
        mosalassabzkeybord(radif);
        while(1){
                 if(ooo%2==1&&aaa==0&&timelimiter==1)
            ooo=limitationn(rang,ooo);
        if(ooo%2==0&&aaa==0&&timelimiter==1)
           ooo=limitationn(rang,ooo);
        mosalassabzkeybord(radif);
        saat();
        if(ooo%2==0&&aaa==0)
        {
             if(kbhit()){
            zarbe=getch();
            ejazez=1;
            saat();
            if(zarbe=='m')
    {
        setting(rang);
    }
       if(zarbe=='a'&&radif!=1)
       {
       radif=radif-1;
       }
       if(zarbe=='d'&&radif!=7)
       {
        radif=radif+1;
       }

   //   cout <<tedadchecking1;

   if(zarbe==' ')
   {
       time(&startlimit);
            pore(radif-1,ooo);
       int tedadchecking1=checkpore(radif);
       bargasht = tedadchecking1;
      barandesotoni(radif-1,ooo,rang);
      saat();
         bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
       nobat(ooo,rang);
ooo=ooo+1;
   }
        }

    }
        if(ooo%2==1&&aaa==0)
      {
          time(&startlimit);
            // sanietime=0;
        saat();
        radif=minimax(0,0).first+1;

        //   if(poreh[5][radif-1]==0)
          // {
            settextstyle(8,0,6);
         //////////////////////////////////////////////////baziai
      pore(radif-1,ooo);
      int tedadchecking1=checkpore(radif);
      saat();
        //////////////////////////////
         settextstyle(8,0,6);
         settextstyle(8,0,6);
    barandesotoni(radif-1,ooo,rang);
   bordanradifi(ooo,rang);
   ghotrisharghi(rang);
   ghotrigharbi(rang);
   saat();
      dayerebendaz(radif,ooo,rang,tedadchecking1);
      saat();
      //PlaySound(TEXT("barkhord1 .wav"),NULL,SND_SYNC);
       nobat(ooo,rang);
       ooo++;
      }
     if(aaa==0)
        {
            draw();
        }
      if(aaa==1)
            break;
       }
    }
           time(&eend);
settextstyle(8,0, 3);
outtextxy(990,650,"Duration time:");
   int time_taken = (int)(eend - start);
    int time_taken1=time_taken%60;
     char zaman[20];
     char zaman1[20];
    if(time_taken%60!=0){
          sprintf(zaman,"%d",time_taken/60);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1270,650,zaman1);
    }
   if(time_taken%60==0){
          sprintf(zaman,"%d",(time_taken/60)+1);
     sprintf(zaman1,"%d",time_taken%60);
     outtextxy(1210,650,zaman);
     outtextxy(1240,650,":");
     outtextxy(1255,650,zaman1);
   }
   outtextxy(950,620,"PRESS R TO REASTART THE GAME");
   sanietime=time_taken%60;
   mintime=(time_taken/60);
   saat();
   jadvalemtiaz(rang);
char ch11=getch();
   if(ch11==114)
      {
          closegraph();
          cleaning();
      }
if(ch11==104){
    char ch22=getch();
    if(ch22==101){
        char ch33=getch();
        if(ch33==115){
                    char ch44=getch();
        if(ch44==111)
        {
            char ch55=getch();
        if(ch55==121){
            char ch66=getch();
        if(ch66==97){
            char ch77=getch();
        if(ch77==109)
        {
                   emtiaz[0]--;
          jadvalemtiaz(rang);
        }
        }

        }
        }

        }

    }
}
ch11=getch();
   if(ch11==114)
      {
          closegraph();
          cleaning();
      }

    }


    }

}


void cleaning(){
 s[1000000];
 poreh[6][7];
 for(int i = 0 ; i < 6 ;i++){
    for(int j = 0 ; j < 7 ;j++){
        poreh[i][j]=0;
    }
 }
 sadomtime=0;
 mintime=0;
 sanietime=0;
 bargasht=0;
barkhorddddd=0;
ejazez=0;
 scoreboard=1;
 timelimiter=1;
 ctrlz=1;
 clockk=1;
 save=0;

 aaa=0;
 k1=0;
 k2=0;
 k3=0;
 k4=0;
 k5=0;
 k6=0;
 k7=0;
 j = 0 ;
 for(int i= 0 ; i < 999999 ;i++){
    s[i]=0;
 }
 narizagha=0;
 narizagha1=0;
 main();
}
