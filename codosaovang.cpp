#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

#include<iostream>

void main()

{int gdrv=DETECT,gmode,errorcode,mx,my;

initgraph(&gdrv,&gmode,"..\\BGI");

errorcode=graphresult();

if (errorcode!=grOk)

{printf("Graphics error : %s\n",grapherrormsg(errorcode));

printf("Press any key to halt ...");

getch();

exit(1);

}

mx=getmaxx()/2;my=getmaxy()/2;

setbkcolor(BLUE);

setcolor(RED);

setfillstyle(1,RED);

bar(mx-150,my-100,mx+150,my+100);

setcolor(YELLOW);

setfillstyle(1,YELLOW);

moveto(mx,my-70);

lineto(mx+50,my+60);

lineto(mx-70,my-25);

lineto(mx+70,my-25);

lineto(mx-50,my+60);

lineto(mx,my-70);

floodfill(mx,my,YELLOW);

floodfill(mx,my-30,YELLOW);

floodfill(mx+20,my+30,YELLOW);

floodfill(mx-20,my+30,YELLOW);

floodfill(mx-50,my-20,YELLOW);

floodfill(mx+50,my-20,YELLOW);

getch();

closegraph();

}
