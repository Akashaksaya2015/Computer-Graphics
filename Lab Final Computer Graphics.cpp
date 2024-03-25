#include <graphics.h>
#include <iostream>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int c;

    cout<<"[1] Name \n";
    cout<<"[2] National Flag\n";
    cout<<"[3] Emoji\n";
    cout<<"[4] Sahidaminara\n";
    cout<<"[5] Smrtisaudha\n";
    cout<<"[6] Town Home\n";
    cout<<"[7] Village home \n";
    cout<<"[8] Flower \n";
    cout<<"[9] Boat\n";
    cout<<"[10] tee shart & pant \n";
    cout<<"[11] Exit \n";
   while(true){
    cout << "\nEnter your choice: ";
    cin >> c;

    switch(c)
    {

    case 1:    //Name
    {

    initgraph(&gd,&gm,"");
    initwindow(800,700,"without Color ",300);

    //A
    line(120,105,105,150);
    line(120,105,130,150);
    line(110,130,125,130);
   //K
    line(135,105,135,150);
    line(135,130,145,105);
    line(135,130,145,150);
    //A
    line(165,105,150,150);
    line(165,105,175,150);
    line(155,130,170,130);
    //s
    line(180,105,195,105);
    line(180,105,180,130);
    line(180,130,195,130);
    line(195,130,195,150);
    line(180,150,195,150);
    //H
    line(200,105,200,150);
    line(230,105,230,150);
    line(200,130,230,130);
    //T
    line(260,105,280,105);
    line(270,105,270,150);
    //A
    line(290,105,280,150);
    line(290,105,305,150);
    line(285,130,298,130);
    //L
    line(310,105,310,150);
    line(310,150,330,150);
    //U
    line(335,105,335,150);
    line(335,150,355,150);
    line(355,105,355,150);
   //K
    line(360,105,360,150);
    line(380,105,360,130);
    line(360,130,380,150);
     //D
    line(390,105,390,150);
    line(390,105,420,105);
    line(390,150,420,150);
    line(420,105,420,150);
     //E
    line(425,105,425,150);
    line(425,105,440,105);
    line(425,130,440,130);
    line(425,150,440,150);
    //R
    line(445,105,445,150);
    line(445,105,465,105);
    line(465,105,465,130);
    line(445,130,465,130);
    line(445,130,465,150);


    //--------------------------With Color  --------------------------

    initwindow(800,700,"Colorful Name");

    //A
     setcolor(YELLOW);
    line(120,105,105,150);
    line(120,105,130,150);
    line(110,130,125,130);
   //K
    line(135,105,135,150);
    line(135,130,145,105);
    line(135,130,145,150);
    //A
    line(165,105,150,150);
    line(165,105,175,150);
    line(155,130,170,130);
    //s
    line(180,105,195,105);
    line(180,105,180,130);
    line(180,130,195,130);
    line(195,130,195,150);
    line(180,150,195,150);
    //H
    line(200,105,200,150);
    line(230,105,230,150);
    line(200,130,230,130);
    //T
    line(260,105,280,105);
    line(270,105,270,150);
    //A
    line(290,105,280,150);
    line(290,105,305,150);
    line(285,130,298,130);
    //L
    line(310,105,310,150);
    line(310,150,330,150);
    //U
    line(335,105,335,150);
    line(335,150,355,150);
    line(355,105,355,150);
   //K
    line(360,105,360,150);
    line(380,105,360,130);
    line(360,130,380,150);
     //D
    line(390,105,390,150);
    line(390,105,420,105);
    line(390,150,420,150);
    line(420,105,420,150);
    //E
    line(425,105,425,150);
    line(425,105,440,105);
    line(425,130,440,130);
    line(425,150,440,150);
    //R
    line(445,105,445,150);
    line(445,105,465,105);
    line(465,105,465,130);
    line(445,130,465,130);
    line(445,130,465,150);

     break;
    }
    case 2: //National Flag
    {

    initgraph(&gd,&gm,"");

    //.....................Without Color of National Flag....................
    rectangle(50,55,250,180);
    circle(150,120,35);
    rectangle(50,40,40,400);
    rectangle(20,400,100,420);
    rectangle(10,450,120,420);

    setcolor(GREEN);
    setfillstyle(1,BLUE);
    rectangle(5,490,130,450);
    floodfill(120,455,GREEN);

    //--------------With Color of National Flag--------------

    initwindow(700,600,"The National Flag",650);

    setcolor(WHITE);
    setfillstyle(1,GREEN);

    rectangle(50,55,250,180);
    floodfill(55,60,WHITE);

    setcolor(RED);
    setfillstyle(1,RED);
    circle(150,120,35);
    floodfill(150,120,RED);

    setcolor(WHITE);
    setfillstyle(1,BROWN);
    rectangle(50,40,40,400);
    floodfill(45,55,WHITE);


    setcolor(GREEN);
    setfillstyle(1,BLUE);
    rectangle(20,400,100,420);
    floodfill(25,405,GREEN);

    setcolor(GREEN);
    setfillstyle(1,YELLOW);
    rectangle(10,450,120,420);
    floodfill(20,445,GREEN);

    setcolor(GREEN);
    setfillstyle(1,BLUE);
    rectangle(5,490,130,450);
    floodfill(120,455,GREEN);
    break;
    }

    case 3: // Emoji
    {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    initwindow(1000,800,"Without Color Emoji");
    //1st Emoji
    circle(150,150,100);//head
    circle(110,110,10);//left eye
    circle(190,110,10);//right eye
    //2nd Emoji
    circle(150,360,100);//head

    line(100,330,125,330);//left eye
    line(100,331,125,331);//left eye
    line(180,330,205,330);//right eye
    line(180,331,205,331);//right eye
    line(140,400,165,400);//mouth eye
    line(140,401,165,401);//mouth eye

    /////3rd Emoji

    circle(400,150,100);//head
    circle(360,110,10);//left eye
    ellipse(450,115,360,180,15,10);//smaile
    ellipse(445,160,230,370,30,25);
    //floodfill(405,110,BLACK);

    ///////4th Emoji
    circle(400,360,100);//head
    circle(360,330,15);//left eye
    circle(450,330,15);//right eye
    circle(400,395,15);//mouth

    ellipse(150,170,180,360,50,30);


    //------------------------------------ Emoji With Color---------------------
    initwindow(1000,800,"Emoji",0,50);

       //1st Emoji
    setcolor(WHITE);
    setfillstyle(1,YELLOW);
    circle(150,150,100);//head
    floodfill(150,150,WHITE);

    setfillstyle(1,RED);
    circle(110,110,10);//left eye
    floodfill(110,110,WHITE);


    setfillstyle(1,RED);
    circle(190,110,10);//right eye
    floodfill(195,110,WHITE);
    ///// 2nd Emoji
     setcolor(WHITE);
    setfillstyle(1,YELLOW);
    circle(150,360,100);//head
    floodfill(150,365,WHITE);

    setcolor(BLACK);
    line(100,330,125,330);//left eye
    line(100,331,125,331);//left eye
    line(180,330,205,330);//right eye
    line(180,331,205,331);//right eye
    line(140,400,165,400);//mouth eye
    line(140,401,165,401);//mouth eye

    /////3rd Emoji
    setcolor(WHITE);
    setfillstyle(1,YELLOW);
    circle(400,150,100);//head
    floodfill(405,150,WHITE);

    setfillstyle(1,RED);
    circle(360,110,10);//left eye
    floodfill(365,110,WHITE);
    //right eye
    setcolor(BLACK);
    ellipse(450,115,360,180,15,10);
    //smaile
    setcolor(BLACK);
    ellipse(445,160,230,370,30,25);
    //floodfill(405,110,BLACK);

    ///////4th Emoji
    setcolor(WHITE);
    setfillstyle(1,YELLOW);
    circle(400,360,100);//head
    floodfill(405,365,WHITE);

     setfillstyle(1,RED);
    circle(360,330,15);//left eye
    floodfill(365,335,WHITE);

    setfillstyle(1,RED);
    circle(450,330,15);//right eye
    floodfill(455,335,WHITE);

    setfillstyle(1,RED);
    circle(400,395,15);//mouth
    floodfill(405,405,WHITE);
    /////

    setcolor(BLACK);
    ellipse(150,170,180,360,50,30);


    break;
    }


    case 4: //Sahidaminara
    {
        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

     initwindow(640,500,"Sahidaminara",0,50);


    line(40,140,140,140),
    line(40,140,40,380),
    line(40,380,140,380),
    line(140,380,140,140),
    //inner line
    line(60,160,120,160),
    line(60,160,60,360),
    line(60,360,120,360),
    line(120,360,120,160),


    //mid line

    line(60,240,120,240),
    line(60,270,120,270),

    //upper line

    line(70,160,70,240),
    line(80,160,80,240),
    line(90,160,90,240),
    line(100,160,100,240),
    line(110,160,110,240),

    //lower line
    line(70,270,70,360),
    line(80,270,80,360),
    line(90,270,90,360),
    line(100,270,100,360),
    line(110,270,110,360),

    //2nd
    //outer line

    line(200,20,200,380),
    line(200,20,380,20),
    line(380,20,380,380),
    line(380,380,200,380),
    //inner line
    line(220,40,360,40),
    line(220,40,220,360),
    line(220,360,360,360),
    line(360,360,360,40),

    //1st mid  line

    line(220,120,360,120),
    line(220,140,360,140),

    //2nd mid  line

    line(220,240,360,240),
    line(220,260,360,260),

    //upper line
    line(240,40,240,120);
    line(260,40,260,120);
    line(280,40,280,120);
    line(300,40,300,120);
    line(320,40,320,120);
    line(340,40,340,120);
    //lower line
    line(240,260,240,360);
    line(260,260,260,360);
    line(280,260,280,360);
    line(300,260,300,360);
    line(320,260,320,360);
    line(340,260,340,360);
    //circle

    circle(290,190,30);


    //setfillstyle(1,WHITE);
    line(220,140,270,170);
    line(360,240,310,210);
    line(220,240,270,210);
    line(360,140,310,170);
    line(290,140,290,160);
    line(290,240,290,220);
    line(220,190,260,190);
    line(360,190,320,190);

    //3rd
    //outer line
    line(460,140,560,140);
    line(460,140,460,380);
    line(460,380,560,380);
    line(560,380,560,140);

    //inner line
    line(480,160,540,160);
    line(480,160,480,360);
    line(480,360,540,360);
    line(540,360,540,160);

    //mid line

    line(480,240,540,240);
    line(480,270,540,270);

    //upper line
    line(490,160,490,240);
    line(500,160,500,240);
    line(510,160,510,240);
    line(520,160,520,240);
    line(530,160,530,240);
    //lower line
    line(490,270,490,360);
    line(500,270,500,360);
    line(510,270,510,360);
    line(520,270,520,360);
    line(530,270,530,360);


    line(0,380,800,380);
    line(0,380,800,380);
    line(0,380,100,500);
    line(640,380,500,500);


////////////////With color//////////

    initwindow(650,500,"Sahidaminara",0,50);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    line(40,140,140,140),
    line(40,140,40,380),
    line(40,380,140,380),
    line(140,380,140,140),
    //inner line
    line(60,160,120,160),
    line(60,160,60,360),
    line(60,360,120,360),
    line(120,360,120,160),
    floodfill(45,145,WHITE);

    //mid line
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    line(60,240,120,240),
    line(60,270,120,270),
    floodfill(65,245,WHITE);
    //upper line

    line(70,160,70,240),
    line(80,160,80,240),
    line(90,160,90,240),
    line(100,160,100,240),
    line(110,160,110,240),

    //lower line
    line(70,270,70,360),
    line(80,270,80,360),
    line(90,270,90,360),
    line(100,270,100,360),
    line(110,270,110,360),

    //2nd
    //outer line
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    line(200,20,200,380),
    line(200,20,380,20),
    line(380,20,380,380),
    line(380,380,200,380),
    //inner line
    line(220,40,360,40),
    line(220,40,220,360),
    line(220,360,360,360),
    line(360,360,360,40),
    floodfill(205,25,WHITE);
    //1st mid  line
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    line(220,120,360,120),
    line(220,140,360,140),
    floodfill(225,125,WHITE);
    //2nd mid  line
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    line(220,240,360,240),
    line(220,260,360,260),
    floodfill(225,245,WHITE);
    //upper line
    line(240,40,240,120);
    line(260,40,260,120);
    line(280,40,280,120);
    line(300,40,300,120);
    line(320,40,320,120);
    line(340,40,340,120);
    //lower line
    line(240,260,240,360);
    line(260,260,260,360);
    line(280,260,280,360);
    line(300,260,300,360);
    line(320,260,320,360);
    line(340,260,340,360);
    //circle
    setcolor(WHITE);
    setfillstyle(1,RED);
    circle(290,190,30);
    floodfill(295,195,WHITE);

    setcolor(WHITE);
    //setfillstyle(1,WHITE);
    line(220,140,270,170);
    line(360,240,310,210);
    line(220,240,270,210);
    line(360,140,310,170);
    line(290,140,290,160);
    line(290,240,290,220);
    line(220,190,260,190);
    line(360,190,320,190);

    //3rd
    //outer line
    setcolor(WHITE);
    setfillstyle(1,WHITE);

    line(460,140,560,140);
    line(460,140,460,380);
    line(460,380,560,380);
    line(560,380,560,140);

    //inner line
    line(480,160,540,160);
    line(480,160,480,360);
    line(480,360,540,360);
    line(540,360,540,160);
    floodfill(465,145,WHITE);
    //mid line
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    line(480,240,540,240);
    line(480,270,540,270);
    floodfill(485,245,WHITE);
    //upper line
    line(490,160,490,240);
    line(500,160,500,240);
    line(510,160,510,240);
    line(520,160,520,240);
    line(530,160,530,240);
    //lower line
    line(490,270,490,360);
    line(500,270,500,360);
    line(510,270,510,360);
    line(520,270,520,360);
    line(530,270,530,360);

    setcolor(WHITE);
    setfillstyle(1,RED);
    line(0,380,800,380);
    floodfill(5,385,WHITE);
    line(0,380,800,380);
    setfillstyle(8,DARKGRAY);
    floodfill(5,370,WHITE);

    setcolor(WHITE);
    setfillstyle(1,GREEN);
    line(0,380,100,500);
    line(640,380,500,500);
    floodfill(10,385,WHITE);
    break;
    }


    case 5: ////Smrtisaudha
    {
        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


     initwindow(650,500,"Smrtisaudha",0,50);

    ////////without color////////////

    //main line
    line(300,20,300,300);
    //traialgle

    line(300,300,240,360);
    line(300,300,360,360);
    //lower line

     line(650,360,0,360);
     line(650,360,0,360);

    //left side line

    line(300,20,240,360);

    line(283,120,200,360);
    line(265,170,160,360);
    line(236,220,120,360);
    line(195,270,80,360);
    line(130,320,40,360);
    line(97,335,10,360);
    //right side line
    line(300,20,360,360);
    line(317,120,400,360);
    line(335,170,440,360);
    line(362,220,480,360);
    line(405,270,520,360);
    line(470,320,560,360);
    line(503,335,600,360);

           //flag

        rectangle(610,20,620,360);

        rectangle(450,30,610,120);

        circle(530,75,30);


        //SUN

        circle(60,60,40);


        //river

    line(100,360,10,500);
    line(500,360,620,500);


////////////////With color//////////

    initwindow(650,500,"Smrtisaudha",0,50);

    //main line
    line(300,20,300,300);
    //traialgle

    line(300,300,240,360);
    line(300,300,360,360);
    //lower line
    setcolor(WHITE);
    setfillstyle(1,RED);
     line(650,360,0,360);
    floodfill(10,365,WHITE);
     setcolor(WHITE);
    setfillstyle(1,BLUE);
     line(650,360,0,360);
    floodfill(10,355,WHITE);
    //left side line
    setcolor(WHITE);
    setfillstyle(1,LIGHTGRAY);
    line(300,20,240,360);
    floodfill(295,235,WHITE);


    line(283,120,200,360);
    line(265,170,160,360);
    line(236,220,120,360);
    line(195,270,80,360);
    line(130,320,40,360);
    line(97,335,10,360);
    //right side line
    line(300,20,360,360);
    line(317,120,400,360);
    line(335,170,440,360);
    line(362,220,480,360);
    line(405,270,520,360);
    line(470,320,560,360);
    line(503,335,600,360);

    //left side
    floodfill(205,355,WHITE);
    floodfill(190,355,WHITE);
    floodfill(140,355,WHITE);
    floodfill(120,355,WHITE);
    floodfill(85,355,WHITE);
    floodfill(45,355,WHITE);
    //Right side
    floodfill(305,255,WHITE);
    floodfill(355,255,WHITE);
    floodfill(400,355,WHITE);
    floodfill(450,355,WHITE);
    floodfill(510,355,WHITE);
    floodfill(540,355,WHITE);
    floodfill(555,355,WHITE);
    //triangle
    floodfill(305,358,WHITE);


           //flag
        setcolor(WHITE);
        setfillstyle(1,BROWN);
        rectangle(610,20,620,360);
        floodfill(612,25,WHITE);

        setcolor(GREEN);
        setfillstyle(1,GREEN);
        rectangle(450,30,610,120);
        floodfill(455,35,GREEN);

        setcolor(RED);
        setfillstyle(1,RED);
        circle(530,75,30);
        floodfill(535,70,RED);

        //SUN
           setcolor(YELLOW);
        setfillstyle(1,YELLOW);
        circle(60,60,40);
        floodfill(55,70,YELLOW);

        //river

    setcolor(WHITE);
    setfillstyle(1,LIGHTCYAN);
    line(100,360,10,500);
    line(500,360,620,500);
    floodfill(105,362,WHITE);

    break;
    }


    case 6: //Town Home
    {
        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    //Field
     initwindow(650,500,"Town Home",0,50);
     ////////without color////////////

    circle(560,60,40);


    line(560,40,560,0);
    line(540,60,500,60);
    line(580,60,620,60);
    line(560,80,560,120);
    line(550,45,520,20);
    line(575,45,610,20);
    line(550,75,520,105);
    line(570,75,600,105);


    //line(150,150,105,200);
    line(150,150,108,200);
    line(105,200,130,200);



    //setcolor(WHITE);
    //setfillstyle(1,YELLOW);



    line(150,150,400,150);
    line(400,150,430,200);
    line(130,200,230,200);


    //setcolor(WHITE);
    //setfillstyle(1,CYAN);
    line(300,110,230,200);
    line(300,110,350,200);
    line(230,200,350,200);
    //floodfill(305,115,WHITE);
    line(350,200,430,200);


circle(300,175,20);


line(120,200,120,300);
line(120,300,420,300);
line(420,200,420,300);

line(190,200,190,300);
line(200,200,200,300);

line(375,200,375,300);
line(380,200,380,300);



line(250,210,350,210);
line(255,215,255,300);

line(250,210,250,300);
line(255,215,345,215);


line(350,210,350,300);
line(345,215,345,300);

line(300,215,300,300);
line(305,215,305,300);

line(300,250,255,215);
line(300,260,255,215);

line(300,255,255,300);
line(300,265,255,300);


line(300,250,345,215);
line(300,260,345,215);

line(300,255,345,300);
line(300,265,345,300);

line(300,255,255,245);
line(300,255,255,265);

line(300,255,345,245);
line(300,255,345,265);
//window

rectangle(140,220,180,280);


rectangle(145,225,175,275);


//seri 1

line(265,300,330,300);
line(265,300,265,320);
line(265,320,330,320);
line(330,320,330,300);


//seri 2

line(265,320,250,330);
line(250,330,340,330);
line(340,330,330,320);

//road
//setcolor(WHITE);
//setfillstyle(1,LIGHTGRAY);
line(10,300,20,300);
line(20,300,30,305);
line(30,305,60,290);
line(60,290,115,300);
//floodfill(15,305,WHITE);
//car

line(20,370,60,370);
line(60,370,90,330);
line(90,330,200,330);
line(200,330,230,370);
line(230,370,285,370);
line(285,370,285,410);
line(230,410,285,410);



circle(210,410,20);
circle(210,410,10);
circle(210,410,5);


line(190,410,100,410);

circle(80,410,20);
circle(80,410,10);
circle(80,410,5);


line(60,410,20,410);
line(20,410,20,370);

line(150,330,135,310);
line(150,330,150,310);
line(150,330,160,310);
//inner box

line(110,350,180,350);
line(110,350,110,380);
line(110,380,180,380);
line(180,350,180,380);

//tree

//line(500,220,495,400);
//line(530,220,535,400);

//setcolor(WHITE);
//setfillstyle(1,RED);
//circle(510,180,60);
//circle(530,170,60);
//circle(550,175,60);
//circle(580,180,50);
//floodfill(515,185,WHITE);

//line(10,450,300,450);

line(275,330,410,500);
//line(320,400,410,500);
//line(340,330,400,360);
line(340,330,750,600);

line(0,450,360,450);


//sky

line(5,100,280,100);

ellipse(10,100,360,180,20,50);
ellipse(50,100,360,180,20,60);
ellipse(90,100,360,180,25,80);
ellipse(140,100,360,180,30,60);
ellipse(220,100,360,180,50,60);


//bard

ellipse(420,130,360,180,10,20);
ellipse(440,130,360,180,10,20);

ellipse(450,70,360,180,10,20);
ellipse(465,70,360,180,10,20);



////////////////With color//////////

initwindow(650,500,"Town Home",0,50);

    setcolor(WHITE);
setfillstyle(1,WHITE);
circle(560,60,40);
floodfill(565,65,WHITE);

line(560,40,560,0);
line(540,60,500,60);
line(580,60,620,60);
line(560,80,560,120);
line(550,45,520,20);
line(575,45,610,20);
line(550,75,520,105);
line(570,75,600,105);

setcolor(WHITE);
setfillstyle(1,MAGENTA);
//line(150,150,105,200);
line(150,150,108,200);
line(105,200,130,200);
floodfill(110,198,WHITE);


//setcolor(WHITE);
//setfillstyle(1,YELLOW);



line(150,150,400,150);
line(400,150,430,200);
line(130,200,230,200);

floodfill(395,155,WHITE);

//setcolor(WHITE);
//setfillstyle(1,CYAN);
line(300,110,230,200);
line(300,110,350,200);
line(230,200,350,200);
//floodfill(305,115,WHITE);
line(350,200,430,200);

setcolor(WHITE);
setfillstyle(1,BLUE);
circle(300,175,20);
floodfill(305,176,WHITE);

line(120,200,120,300);
line(120,300,420,300);
line(420,200,420,300);

line(190,200,190,300);
line(200,200,200,300);

line(375,200,375,300);
line(380,200,380,300);



line(250,210,350,210);
line(255,215,255,300);

line(250,210,250,300);
line(255,215,345,215);


line(350,210,350,300);
line(345,215,345,300);

line(300,215,300,300);
line(305,215,305,300);

line(300,250,255,215);
line(300,260,255,215);

line(300,255,255,300);
line(300,265,255,300);


line(300,250,345,215);
line(300,260,345,215);

line(300,255,345,300);
line(300,265,345,300);

line(300,255,255,245);
line(300,255,255,265);

line(300,255,345,245);
line(300,255,345,265);
//window
setcolor(WHITE);
setfillstyle(1,RED);
rectangle(140,220,180,280);
floodfill(141,222,WHITE);
setcolor(WHITE);
setfillstyle(1,CYAN);
rectangle(145,225,175,275);
floodfill(146,226,WHITE);

//seri 1
setcolor(WHITE);
setfillstyle(1,RED);
line(265,300,330,300);
line(265,300,265,320);
line(265,320,330,320);
line(330,320,330,300);
floodfill(270,305,WHITE);

//seri 2
setcolor(WHITE);
setfillstyle(1,CYAN);
line(265,320,250,330);
line(250,330,340,330);
line(340,330,330,320);
floodfill(267,325,WHITE);
//road
//setcolor(WHITE);
//setfillstyle(1,LIGHTGRAY);
line(10,300,20,300);
line(20,300,30,305);
line(30,305,60,290);
line(60,290,115,300);
//floodfill(15,305,WHITE);
//car
setcolor(WHITE);
setfillstyle(1,LIGHTGRAY);
line(20,370,60,370);
line(60,370,90,330);
line(90,330,200,330);
line(200,330,230,370);
line(230,370,285,370);
line(285,370,285,410);
line(230,410,285,410);
floodfill(25,375,WHITE);

setcolor(WHITE);
setfillstyle(1,BLUE);
circle(210,410,20);
circle(210,410,10);
circle(210,410,5);
floodfill(215,415,WHITE);
floodfill(215,420,WHITE);

line(190,410,100,410);
setcolor(WHITE);
setfillstyle(1,BLUE);
circle(80,410,20);
circle(80,410,10);
circle(80,410,5);
floodfill(85,415,WHITE);
floodfill(85,420,WHITE);
floodfill(85,425,WHITE);

line(60,410,20,410);
line(20,410,20,370);

line(150,330,135,310);
line(150,330,150,310);
line(150,330,160,310);
//inner box
setcolor(WHITE);
setfillstyle(1,WHITE);
line(110,350,180,350);
line(110,350,110,380);
line(110,380,180,380);
line(180,350,180,380);
floodfill(115,355,WHITE);
//tree
//tree

//line(500,220,495,400);
//line(530,220,535,400);

//setcolor(WHITE);
//setfillstyle(1,RED);
//circle(510,180,60);
//circle(530,170,60);
//circle(550,175,60);
//circle(580,180,50);
//floodfill(515,185,WHITE);

//line(10,450,300,450);
//road
setcolor(WHITE);
setfillstyle(1,BLACK);

line(275,330,410,500);
//line(320,400,410,500);
//line(340,330,400,360);
line(340,330,750,600);
floodfill(410,200,WHITE);

setcolor(WHITE);
setfillstyle(1,BLACK);
line(0,450,360,450);

floodfill(5,470,WHITE);
//sky
setcolor(WHITE);
setfillstyle(1,LIGHTCYAN);
line(5,100,280,100);

ellipse(10,100,360,180,20,50);
ellipse(50,100,360,180,20,60);
ellipse(90,100,360,180,25,80);
ellipse(140,100,360,180,30,60);
ellipse(220,100,360,180,50,60);

floodfill(50,60,WHITE);
floodfill(90,80,WHITE);
floodfill(150,60,WHITE);
floodfill(220,60,WHITE);


//bard
setcolor(BLACK);
ellipse(420,130,360,180,10,20);
ellipse(440,130,360,180,10,20);

ellipse(450,70,360,180,10,20);
ellipse(465,70,360,180,10,20);


    break;
    }


case 7: //Village
     {
        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    //Field
     initwindow(650,500,"Village",0,50);

    //.....................Without Color of Village....................


line(90,110,50,150);
line(90,110,60,160);
line(50,150,60,160);

line(90,110,170,110);
line(90,110,130,160);
line(170,110,210,160);
line(130,160,210,160);


line(60,160,60,210);
line(60,210,130,220);
line(130,160,130,220);

rectangle(90,180,110,200);

line(130,220,200,210);
line(210,160,200,210);


line(160,180,180,180);
line(180,180,180,212);
line(160,180,160,215);

line(185,130,210,110);
line(210,110,280,110);
line(280,110,260,150);
line(200,150,260,150);

line(280,110,320,150);
line(280,110,310,160);
line(320,150,310,160);

line(310,160,310,200);
line(310,200,260,210);
line(260,150,260,210);
line(200,190,260,210);

line(150,70,190,50);
line(190,50,160,80);
line(150,70,160,80);

line(190,50,210,80);
line(190,50,280,50);
line(280,50,300,80);
line(210,80,300,80);

line(290,80,290,120);
line(210,80,210,110);
line(160,80,160,110);

line(160,215,150,230);
line(150,230,130,240);
line(130,240,100,250);
line(100,250,70,280);
line(70,280,40,320);
line(40,320,0,400);

line(195,210,170,240);
line(170,240,150,270);
line(150,270,120,320);

line(290,200,260,230);
line(260,230,240,240);
line(240,240,220,250);
line(220,250,180,280);
line(180,280,120,320);

line(310,200,290,240);
line(290,240,280,250);
line(280,250,240,280);
line(240,280,200,300);
line(200,300,160,320);
line(160,320,100,340);

line(100,340,80,360);
line(80,360,60,400);
line(60,400,40,440);
line(40,440,0,500);

line(400,140,400,180);
line(400,180,400,220);
line(400,220,400,260);
line(400,260,400,320);


line(420,140,420,180);
line(420,180,430,220);
line(430,220,440,260);
line(440,260,460,320);

line(400,160,410,150);
line(410,150,420,160);
line(400,320,460,320);

line(160,320,700,320);

circle(370,120,50);

circle(400,70,50);

circle(445,70,50);

circle(450,120,50);

//circle(410,150,50);
//floodfill(415,155,RED);
//sun

circle(570,60,40);

rectangle(280,160,300,180);

rectangle(180,90,200,110);

line(220,170,240,170);
line(240,170,240,203);
line(220,170,220,200);



    //--------------With Color of Village--------------
    initwindow(650,500,"Village",0,50);


setcolor(WHITE);
setfillstyle(1,GREEN);
line(90,110,50,150);
line(90,110,60,160);
line(50,150,60,160);
 floodfill(55,150,WHITE);

setcolor(WHITE);
setfillstyle(1,GREEN);
line(90,110,170,110);
line(90,110,130,160);
line(170,110,210,160);
line(130,160,210,160);
 floodfill(100,115,WHITE);

setcolor(WHITE);
setfillstyle(1,RED);
line(60,160,60,210);
line(60,210,130,220);
line(130,160,130,220);
 floodfill(65,165,WHITE);
 setcolor(WHITE);
setfillstyle(1,BLUE);
rectangle(90,180,110,200);
floodfill(95,185,WHITE);
 setcolor(WHITE);
setfillstyle(1,MAGENTA);
line(130,220,200,210);
line(210,160,200,210);
floodfill(135,215,WHITE);
//rectangle(160,180,180,220);
 setcolor(WHITE);
setfillstyle(1,BLUE);
line(160,180,180,180);
line(180,180,180,212);
line(160,180,160,215);
floodfill(165,185,WHITE);

 setcolor(WHITE);
setfillstyle(1,GREEN);
line(185,130,210,110);
line(210,110,280,110);
line(280,110,260,150);
line(200,150,260,150);
floodfill(275,115,WHITE);


 setcolor(WHITE);
setfillstyle(1,GREEN);
line(280,110,320,150);
line(280,110,310,160);
line(320,150,310,160);

floodfill(315,150,WHITE);


 setcolor(WHITE);
setfillstyle(1,RED);
line(310,160,310,200);
line(310,200,260,210);
line(260,150,260,210);
line(200,190,260,210);
floodfill(305,165,WHITE);


 setcolor(WHITE);
setfillstyle(1,GREEN);
line(150,70,190,50);
line(190,50,160,80);
line(150,70,160,80);
floodfill(155,70,WHITE);

 setcolor(WHITE);
setfillstyle(1,GREEN);
line(190,50,210,80);
line(190,50,280,50);
line(280,50,300,80);
line(210,80,300,80);
floodfill(215,70,WHITE);

setcolor(WHITE);
setfillstyle(1,RED);
line(290,80,290,120);
line(210,80,210,110);
line(160,80,160,110);
floodfill(285,85,WHITE);

setcolor(WHITE);
setfillstyle(1,DARKGRAY);
line(160,215,150,230);
line(150,230,130,240);
line(130,240,100,250);
line(100,250,70,280);
line(70,280,40,320);
line(40,320,0,400);

line(195,210,170,240);
line(170,240,150,270);
line(150,270,120,320);

line(290,200,260,230);
line(260,230,240,240);
line(240,240,220,250);
line(220,250,180,280);
line(180,280,120,320);

line(310,200,290,240);
line(290,240,280,250);
line(280,250,240,280);
line(240,280,200,300);
line(200,300,160,320);
line(160,320,100,340);

line(100,340,80,360);
line(80,360,60,400);
line(60,400,40,440);
line(40,440,0,500);
floodfill(10,450,WHITE);
//tree
 setcolor(WHITE);
setfillstyle(1,GREEN);
line(400,140,400,180);
line(400,180,400,220);
line(400,220,400,260);
line(400,260,400,320);


line(420,140,420,180);
line(420,180,430,220);
line(430,220,440,260);
line(440,260,460,320);
setcolor(WHITE);
setfillstyle(1,LIGHTGRAY);
line(400,160,410,150);
line(410,150,420,160);
line(400,320,460,320);
floodfill(405,160,WHITE);

setcolor(DARKGRAY);

setfillstyle(1,LIGHTCYAN);
line(160,320,700,320);
floodfill(165,325,DARKGRAY);


setcolor(GREEN);
setfillstyle(1,GREEN);
circle(370,120,50);
floodfill(375,125,GREEN);
circle(400,70,50);
floodfill(405,75,GREEN);
circle(445,70,50);
floodfill(450,75,GREEN);
circle(450,120,50);
floodfill(455,125,GREEN);
//circle(410,150,50);
//floodfill(415,155,RED);
//sun
 setcolor(WHITE);
setfillstyle(1,WHITE);
circle(570,60,40);

floodfill(575,65,WHITE);

setcolor(YELLOW);
setfillstyle(1,BLUE);
rectangle(280,160,300,180);
floodfill(285,165,YELLOW);

setcolor(YELLOW);
setfillstyle(1,BLUE);
rectangle(180,90,200,110);
floodfill(185,95,YELLOW);

setcolor(YELLOW);
setfillstyle(1,RED);
line(220,170,240,170);
line(240,170,240,203);
line(220,170,220,200);
floodfill(220,175,YELLOW);
    break;
    }



case 8: //Flower
    {


        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


     initwindow(650,500,"Flower",0,50);

    //.....................Without Color of Flower....................

    circle(300,220,60);

    circle(570,60,50);

    circle(245,165,60);

    circle(340,140,60);

    circle(385,210,60);
    circle(335,280,60);

    circle(250,260,60);

//tree left side

    line(250,319,200,390);

    line(250,319,270,317);
     line(270,317,280,310);
    line(280,310,290,320);
    //line(240,390,150,420);

    line(200,390,171,419);
    line(170,420,130,450);
    line(130,450,90,490);

//tree right side
    line(290,319,240,390);
    line(240,390,200,450);
    line(200,450,150,500);

    line(50,550,300,400);
    line(300,400,250,550);
    //line(-20,477,600,477);
  // floodfill(52,475,WHITE);

     line(160,550,400,400);
    line(400,400,300,550);



    line(-50,550,80,400);
    line(80,400,40,550);
    line(5,550,120,400);
    line(120,400,80,550);
    //line(-100,550,600,550);



    //--------------With Color of Flower--------------
    initwindow(650,490,"Flower",0,50);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(300,220,60);
    floodfill(305,225,WHITE);


    setcolor(WHITE);
    setfillstyle(8,DARKGRAY);
    floodfill(10,20,WHITE);

    setcolor(WHITE);
    setfillstyle(1,WHITE);
    circle(570,60,50);
    floodfill(575,65,WHITE);

    setcolor(RED);
    setfillstyle(1,RED);
    circle(245,165,60);
    floodfill(245,165,RED);
    setcolor(RED);
    setfillstyle(1,RED);
    circle(340,140,60);
    floodfill(345,155,RED);

    setcolor(RED);
    setfillstyle(1,RED);
    circle(385,210,60);
    floodfill(385,205,RED);

    setcolor(RED);
    setfillstyle(1,RED);
    circle(335,280,60);
    floodfill(345,295,RED);

    setcolor(RED);
    setfillstyle(1,RED);
    circle(250,260,60);
    floodfill(255,275,RED);


//tree left side
    setcolor(WHITE);
    setfillstyle(1,GREEN);

    line(250,319,200,390);

    line(250,319,270,317);
     line(270,317,280,310);
    line(280,310,290,320);
    //line(240,390,150,420);

    line(200,390,171,419);
    line(170,420,130,450);
    line(130,450,90,490);

//tree right side
    line(290,319,240,390);
    line(240,390,200,450);
    line(200,450,150,500);
     floodfill(260,320,WHITE);

    setcolor(WHITE);
    setfillstyle(1,GREEN);
    line(50,550,300,400);
    line(300,400,250,550);
    //line(-20,477,600,477);
  // floodfill(52,475,WHITE);

     line(160,550,400,400);
    line(400,400,300,550);


    setcolor(WHITE);
    setfillstyle(1,GREEN);
    line(-50,550,80,400);
    line(80,400,40,550);
    line(5,550,120,400);
    line(120,400,80,550);
    //line(-100,550,600,550);
    floodfill(75,475,WHITE);
    floodfill(35,475,WHITE);

    floodfill(245,475,WHITE);
    floodfill(305,475,WHITE);
    break;
    }

case 9: //Boat
    {


        int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


     initwindow(650,500,"Boat",0,50);

    //.....................Without Color of Boat....................


    circle(400,50,40);

line(150,80,0,300);
line(160,80,0,350);
line(160,80,150,80);
line(0,350,0,300);

//ellipse(50,200,180,360,80,50);

line(50,100,75,140);
line(75,140,100,180);
line(100,180,125,220);
line(125,220,135,230);
line(135,230,160,250);
line(160,250,180,260);
line(180,260,250,270);
line(250,270,280,270);
line(280,270,300,265);
line(300,265,320,260);
line(320,260,340,250);
line(340,250,360,235);
line(360,235,380,220);
line(380,220,420,180);
line(420,180,435,160);
line(435,160,470,100);

line(470,100,470,140);
line(470,140,465,180);
line(465,180,460,220);
line(460,220,455,260);
line(455,260,445,290);
line(445,290,430,320);
line(430,320,400,360);
line(400,360,370,390);
line(370,390,340,410);
line(340,410,300,420);
line(300,420,280,425);
line(280,425,240,425);
line(240,425,200,420);
line(200,420,180,410);
line(180,410,160,400);
line(160,400,140,380);
line(140,380,120,360);
line(120,360,80,300);
line(80,300,60,250);
line(60,250,50,200);
line(50,200,50,100);
//left

line(250,270,250,20);
line(250,20,200,80);
line(200,80,185,100);
line(185,100,170,130);
line(170,130,165,150);
line(165,150,163,170);
line(163,170,165,230);
line(165,230,170,255);

//right

line(250,60,280,100);
line(280,100,310,150);
line(310,150,325,180);
line(325,180,330,200);
line(330,200,340,250);



//daw
line(0,380,15,375);
line(15,375,50,375);
line(50,375,100,390);
line(100,390,150,430);
line(150,430,200,440);
line(200,440,300,440);
line(300,440,400,400);
line(400,400,450,380);
line(450,380,490,370);
line(490,370,550,380);
line(550,380,700,430);

//daw
line(0,400,15,390);
line(15,390,50,390);
line(50,390,100,400);
line(100,400,150,440);
line(150,440,200,460);
line(200,460,300,450);
line(300,450,400,420);
line(400,420,450,400);
line(450,400,490,390);
line(490,390,550,420);
line(550,420,700,450);

//daw
line(0,420,15,410);
line(15,410,50,420);
line(50,420,100,430);
line(100,430,150,450);
line(150,450,200,470);
line(200,470,300,460);
line(300,460,400,440);
line(400,440,450,430);
line(450,430,490,410);
line(490,410,550,450);
line(550,450,700,500);


    //--------------With Color of Boat--------------
    initwindow(650,490,"Boat",0,50);
    setcolor(WHITE);
    setfillstyle(1,YELLOW);
    circle(400,50,40);
    floodfill(405,55,WHITE);

    setcolor(WHITE);
    setfillstyle(1,BROWN);
//boita//
line(150,80,0,300);
line(160,80,0,350);
line(160,80,150,80);
line(0,350,0,300);
floodfill(155,81,WHITE);
floodfill(5,305,WHITE);

    setcolor(WHITE);
    setfillstyle(1,BLACK);
    //ellipse(50,200,180,360,80,50);

   line(50,100,75,140);
    line(75,140,100,180);
line(100,180,125,220);
line(125,220,135,230);
line(135,230,160,250);
line(160,250,180,260);
line(180,260,250,270);
line(250,270,280,270);
line(280,270,300,265);
line(300,265,320,260);
line(320,260,340,250);
line(340,250,360,235);
line(360,235,380,220);
line(380,220,420,180);
line(420,180,435,160);
line(435,160,470,100);

line(470,100,470,140);
line(470,140,465,180);
line(465,180,460,220);
line(460,220,455,260);
line(455,260,445,290);
line(445,290,430,320);
line(430,320,400,360);
line(400,360,370,390);
line(370,390,340,410);
line(340,410,300,420);
line(300,420,280,425);
line(280,425,240,425);
line(240,425,200,420);
line(200,420,180,410);
line(180,410,160,400);
line(160,400,140,380);
line(140,380,120,360);
line(120,360,80,300);
line(80,300,60,250);
line(60,250,50,200);
line(50,200,50,100);

floodfill(55,205,WHITE);
//left
setcolor(WHITE);
    setfillstyle(1,RED);
line(250,270,250,20);
line(250,20,200,80);
line(200,80,185,100);
line(185,100,170,130);
line(170,130,165,150);
line(165,150,163,170);
line(163,170,165,230);
line(165,230,170,255);
floodfill(245,30,WHITE);
//right
setcolor(WHITE);
    setfillstyle(1,RED);
line(250,60,280,100);
line(280,100,310,150);
line(310,150,325,180);
line(325,180,330,200);
line(330,200,340,250);
floodfill(285,110,WHITE);

setcolor(WHITE);
    setfillstyle(1,LIGHTCYAN);

floodfill(0,10,WHITE);
//daw
line(0,380,15,375);
line(15,375,50,375);
line(50,375,100,390);
line(100,390,150,430);
line(150,430,200,440);
line(200,440,300,440);
line(300,440,400,400);
line(400,400,450,380);
line(450,380,490,370);
line(490,370,550,380);
line(550,380,700,430);

//daw
line(0,400,15,390);
line(15,390,50,390);
line(50,390,100,400);
line(100,400,150,440);
line(150,440,200,460);
line(200,460,300,450);
line(300,450,400,420);
line(400,420,450,400);
line(450,400,490,390);
line(490,390,550,420);
line(550,420,700,450);

//daw
line(0,420,15,410);
line(15,410,50,420);
line(50,420,100,430);
line(100,430,150,450);
line(150,450,200,470);
line(200,470,300,460);
line(300,460,400,440);
line(400,440,450,430);
line(450,430,490,410);
line(490,410,550,450);
line(550,450,700,500);

    break;
    }

case 10: //tee Shart & Pant
    {


        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");


     initwindow(650,500,"tee Shart & Pant",0,50);
    //.....................Without Color of tee Shart & Pant....................


    ellipse(300,95,180,360,60,20);

    //left side

    line(240,94,200,180);
    line(200,180,225,200);
    line(225,200,250,180);
    line(250,180,245,350);


    //right side
    line(360,94,410,160);
    line(410,160,390,180);
    line(390,180,360,170);
    line(360,170,365,350);
    line(245,350,365,350);


    //emoji

    circle(305,200,50);


    //left eye

    circle(280,190,15);

    circle(280,190,10);

    circle(280,190,5);


    //right eye

    circle(330,190,15);

    circle(330,190,10);

    circle(330,190,5);

    //smile

    ellipse(305,220,180,360,20,10);
    //nose

    ellipse(305,200,180,360,6,10);
    //cap

    ellipse(305,160,360,180,30,20);

        //pant

    ellipse(500,90,180,360,60,20);


    //left side
    line(440,90,390,300);
    line(390,300,440,300);
    line(440,300,500,150);


  //right side
    line(560,90,620,300);
    line(620,300,570,300);
    line(570,300,500,150);

    //--------------With Color of tee Shart & Pant--------------

    initwindow(650,490,"tee Shart & Pant",0,50);

    setcolor(WHITE);
    setfillstyle(1,RED);
    ellipse(300,95,180,360,60,20);
    floodfill(305,100,WHITE);
    //left side

    line(240,94,200,180);
    line(200,180,225,200);
    line(225,200,250,180);
    line(250,180,245,350);


    //right side
    line(360,94,410,160);
    line(410,160,390,180);
    line(390,180,360,170);
    line(360,170,365,350);
    line(245,350,365,350);


    //emoji
    setcolor(WHITE);
    setfillstyle(1,YELLOW);
    circle(305,200,50);
    floodfill(305,200,WHITE);

    //left eye
    setcolor(WHITE);
    setfillstyle(1,BLUE);
    circle(280,190,15);
    floodfill(280,190,WHITE);
    circle(280,190,10);
    floodfill(280,190,WHITE);
    circle(280,190,5);
    floodfill(280,190,WHITE);


    //right eye
    setcolor(WHITE);
    setfillstyle(1,BLUE);
    circle(330,190,15);
    floodfill(330,190,WHITE);
    circle(330,190,10);
    floodfill(330,190,WHITE);
    circle(330,190,5);
    floodfill(330,190,WHITE);
    //smile
    setcolor(BLACK);
    ellipse(305,220,180,360,20,10);
    //nose
    setcolor(BLACK);
    ellipse(305,200,180,360,6,10);
    //cap
    setcolor(WHITE);
    ellipse(305,160,360,180,30,20);

    //pant
    setcolor(WHITE);
    setfillstyle(1,BLUE);
    ellipse(500,90,180,360,60,20);


    //left side
    line(440,90,390,300);
    line(390,300,440,300);
    line(440,300,500,150);


    //right side
    line(560,90,620,300);
    line(620,300,570,300);
    line(570,300,500,150);
    floodfill(510,95,WHITE);

    break;
    }

     case 11:{
         closegraph();
     cout<<"Existing........."<<endl;
        return 0;
     }

    default:
           cout << "\nInvalid input, Try again...\n" << endl;
    }

    }

    return 0;
}



