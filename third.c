#include<conio.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void n_game();
void instruction();
int main()
{
int ch;
char s;
//clrscr();
printf("*     *  *****  *     *  *****     *      *       \n");
printf("* * * *  *      * *   *    *      * *     *       \n");
printf("*  *  *  *****  *  *  *    *     *****    *       \n");
printf("*     *  *      *   * *    *    *     *   *       \n");
printf("*     *  *****  *    **    *   *       *  ******  \n");
printf("*     *                                           \n\n");
printf("         *     *      *      ******  *   *   \n");
printf("         *     *     * *     *       *  *   \t\t PRESS ANY KEY  \n");
printf("         *******    *****    *       * *     \n");
printf("         *     *   *     *   *       **      \n");
printf("         *     *  *       *  ******  * *     \n");
printf("                                     *  *    \n");
printf("\n\n\n");
printf("            __________________                                  \n   ");
printf("       /                  /|    \t    ************************  \n   ");
printf("     /        ?         /  |    \t   *   TEST               *   \n   ");
printf("   /__________________/ ? /     \t  *      YOUR            *    \n   ");
printf("  |         ?        |  /       \t *         KNOWLEDGE    *     \n   ");
printf("  |__________________|/         \t************************      \n   ");
scanf("%c",&s);
A:
//clrscr();
printf("\n\n\n\n\n \t1.  NEW GAME  ");
printf("\n\n\t2.  INSTRUCTIONS  ");
printf("\n\n\t3.  QUIT  \n\t");
scanf("%d",&ch);
switch(ch)
{
case 1:
n_game();
break;
case 2:
instruction();
break;
case 3:
exit(0);
default:
goto A;
}
getch();
return 0;
}
void n_game()
{
char name[20];
int x=1,y=1;
//clrscr();
printf("\n\n\t\t ENTER PLAYER NAME ->");
scanf("%s",name);
printf(" \n\n\t\t WELCOME %s \n\t\t LETS START ",name);
printf("press any key to start the game ");
getch();
switch(y)
{
case 1:
Q:
//clrscr();
printf("\n!!!!!!!  LEVEL 1  !!!!!!!\n");
printf(" \n1: At what age do the judges of the supreme court retire");
printf("\n a) 55 years \t  b) 58 years\n");
printf(" c) 65 years \t  d) 60 years ");
printf("\npress H three times for hint ");
getche();
if(toupper(getche())=='C')
{printf(" \nRIGHT ANSWER \n");
printf("\n****!!!!! CONGRATULATION YOU WON 100000 Rs   !!!!!****\n");
getch();}
else if(toupper(getche())=='H' && x>=0)
{printf("  \n\nIt is between 58 and 66     ");
x--;
getch();
goto Q;}
else
{printf("\nWRONG ANSWER");
getch();
break;
}
case 2:
W:
//clrscr();
printf("\n 2: Who developed Yahoo?");
printf("\n a)Dennis Ritchie & ken thompson \t  b)David filo & Jerry yang\n");
printf(" c)Vint Cerf & robert kahn \t     d)Steve case & Jeff Bezos\n");
printf("press H three times for hint ");
getche();
if(toupper(getche())=='B')
{printf("\nRIGHT ANSWER");
printf("\n****!!!!! CONGRATULATION YOU WON 200000 Rs   !!!!!****\n");
getch();
}
else if(toupper(getche())=='H' && x>=0)
{printf("  \n\nOne scientist is American and the other is Chinese.  ");
x--;
getch();
goto W;}
else
{printf("\nWRONG ANSWER");
getch();
break;}
case 3:
C:
//clrscr();
printf("\n 3: When the world environment day observed worldwide every year?");
printf("\n a) 6 june \t  b) 5 june\n");
printf(" c) 5 july \t  d) 5 september\n");
printf("press H three times for hint ");
getche();
if(toupper(getche())=='B')
{printf("\nRIGHT ANSWER");
printf("\n****!!!!! CONGRATULATION YOU WON 300000 Rs   !!!!!****\n");
getch();}
else if(toupper(getche())=='H' && x>=0)
{printf(" \n\nIt comes in the month of june");
x--;
getch();
goto C;
}
else
{printf("\nWRONG ANSWER");
getch();
break;}
case 4:
R:
//clrscr();
printf("\n 4: Who is the father of geometry?");
printf("\n a) Aristotle \t  b) Euclid");
printf("\n c) pythagoras \t d)Kepler\n");
printf("press H three times for hint ");
getche();
if(toupper(getche())=='B')
{printf("RIGHT ANSWER");
printf("\n****!!!!! CONGRATULATION YOU WON 400000 Rs   !!!!!****\n");
getch();}
else if(toupper(getche())=='H' && x>=0)
{printf(" \n\nHe was a grek scientist who also wrote works on Conic \nSections and Spherical Geometry . ");
x--;
getch();
goto R;}
else
{printf("WRONG ANSWER");
getch();
break;
}
case 5:
T:
//clrscr();
printf("\n !!!!! LEVEL 2 !!!!!\n");
printf("\n 5: Which is the smallest country in the world?");
printf("\n a) Naura \t  b) Tonga");
printf("\n c) vantica city   d) Monaco\n");
printf("\n press H three times for Hint");
getche();
if(toupper(getche())=='C')
{printf("RIGHT ANSWER");
printf("\n****!!!!! CONGRATULATION YOU WON 500000 Rs   !!!!!****\n");
getch();}
else if(toupper(getche())=='H' && x>=0)
{printf(" \n\nIt's a country which sounds like a name of city. ");
x--;
getch();
goto T;}
else
{
printf("WRONG ANSWER");
getch();
break;
}
case 6:
I:
//clrscr();
printf("\n 6: Which is the national game of India?");
printf("\n a) Cricket \t  b) Football");
printf("\n c) Tennis \t  d) Hockey\n");
printf("press H three times for hint ");
getche();
if(toupper(getche())=='D')
{printf("RIGHT ANSWER");
printf("\n****!!!!! CONGRATULATION YOU WON 600000 Rs   !!!!!****\n");
getch();}
else if(toupper(getche())=='H' && x>=0)
{printf(" \n\nThis game has a rule of penalty cornaer. ");
x--;
getch();
goto I;}
else
{
printf("WRONG ANSWER");
getch();
break;}
case 7:
O:
//clrscr();
printf("\n 7: Oscar Awards is accociated with ");
printf("\n a) Films \t  b) Sports");
printf("\n c) Music \t  c) Literature\n");
printf("press H three times for hint ");
getche();
if(toupper(getche())=='A')
{printf("RIGHT ANSWER");
printf("\n****!!!!! CONGRATULATION YOU WON 700000 Rs   !!!!!****\n");
getch();}
else if(toupper(getche())=='H' && x>=0)
{printf(" \n\nLeonardo Dicaprio was awarded oscar in year 2016. ");
x--;
getch();
goto O;}
else
{printf("WRONG ANSWER");
getch();
break;
}
case 8:
P:
//clrscr();
printf("\n!!!!!!! LEVEL 3 !!!!!!!!\n");
printf("\n 8: Which metal remains in the liquid form under normal condition?");
printf("\n a) Zinc \t  b) Radium");
printf("\n c) Uranium \t  d) Mercury\n");
printf("press H three times for hint ");
getche();
if(toupper(getche())=='D')
{
printf("RIGHT ANSWER");
printf("\n****!!!!! CONGRATULATION YOU WON 800000 Rs   !!!!!****\n");
getch();
}
else if(toupper(getche())=='H' && x>=0)
{printf(" \n\nThe scientific symbol of this element is Hg ");
x--;
getch();
goto P;}
else
{
printf("WRONG ANSWER");
getch();
break;
}
case 9:
M:
//clrscr();
printf("\n 9: The purpose of choke in tubelight is: ");
printf("\n a) Decrease Current \t  b) Increase Current\n");
printf("\n c) Increase voltage \t  d) Decrease voltage\n");
printf("press H three times for hint ");
getche();
if(toupper(getche())=='C')
{
printf("RIGHT ANSWER");
printf("\n****!!!!! CONGRATULATION YOU WON 900000 Rs   !!!!!****\n");
getch();
}
else if(toupper(getche())=='H' && x>=0)
{printf(" \n\nChoke is used to increase some physical quantity. ");
x--;
getch();
goto M;}
else
{
printf("WRONG ANSWER");
getch();
break;
}
case 10:
N:
//clrscr();
printf("\n 10: Which Instrument is used for measuring humidity?");
printf("\n a) Barometer \t  b) Anemometer\n");
printf("\n c) Hygrometer \t d) Thermometer\n");
printf("press H three times for hint ");
getche();
if(toupper(getche())=='C')
{printf("  CONGRATULATIONS %s YOU WON 10000000 Rs ",name);}
else if(toupper(getche())=='H' && x>=0)
{printf("\n\n This device uses two thermometers ");
x--;
getch();
goto N;}
else
{printf(" WRONG ANSWER");
getch();
break;}
}
printf("\n Thanks For Playing");
getch();
}
void instruction()
{ //clrscr();
printf(" HOW TO PLAY \n");
printf("\n\n 1. 3 LEVELS \n");
printf("\n There are 3 levels in this quiz \n");
printf("\n Level 1 has 4 questions\n");
printf("\n Level 2 has 3 questions\n");
printf("\n Level 3 has 3 questions\n");
printf("\n Total questions are equal to 10 \n");
printf("\n\n 2. HELPLINE \n");
printf("\n There are 2 helpline which is only use when you are not able to answer the question \n");
printf("\n Helpline 1 is HINT \n");
printf("\n Helpline 2 is 50-50 \n");
printf("                    \tPress ENTER for next page        ");
getch();
printf("\n\n 3. OPTIONS \n");
printf("\n There are 4 options in every question\n");
printf("\n\n 4. RULES AND REGULATIONS \n");
printf("\n There are some rules and regulation \n");
printf("\n For coreect answer level wise proceed\n");
printf("\n For wrong answer exit\n");
getch();
}
