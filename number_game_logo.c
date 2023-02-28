#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
void logo();
int main2 ()
{

    logo();
	return 0;
}
void logo()
{
	int i;
	char key;
	system("color 03");
	printf("\n\n\n\n");
	printf("\t  ===========            /\\             ||\\               /||        =========\n");
	printf("\t||                      /  \\            || \\             / ||      ||         \n");
	printf("\t||                     /    \\           ||  \\           /  ||      ||         \n");
	printf("\t||                    /      \\          ||   \\         /   ||      ||=========\n");
	printf("\t||   =======         /========\\         ||    \\       /    ||      ||         \n");
	printf("\t||          |       /          \\        ||     \\     /     ||      ||         \n");
	printf("\t||          |      /            \\       ||      \\   /      ||      ||         \n");
	printf("\t||==========|     /              \\      ||       \\ /       ||      ||=========\n\n");


    printf("\t\t\t =============           ==============                       \n");
    printf("\t\t\t|             |        ||                                     \n");  
    printf("\t\t\t|             |        ||                                     \n"); 
    printf("\t\t\t|             |        ||                                     \n"); 
    printf("\t\t\t|             |        ||=============                         \n"); 
    printf("\t\t\t|             |        ||                                     \n");
    printf("\t\t\t|             |        ||                                     \n");
    printf("\t\t\t|             |        ||                                     \n");	
    printf("\t\t\t =============         ||                                     \n\n");


    printf("\t||\\       ||      ||             ||       ||\\              /||\n");                 
    printf("\t|| \\      ||      ||             ||       || \\            / || \n");               
    printf("\t||  \\     ||      ||             ||       ||  \\          /  || \n");
    printf("\t||   \\    ||      ||             ||       ||   \\        /   ||  \n");
    printf("\t||    \\   ||      ||             ||       ||    \\      /    || \n");
    printf("\t||     \\  ||      ||             ||       ||     \\    /     ||\n");
    printf("\t||      \\ ||      ||             ||       ||      \\  /      ||\n");
    printf("\t||       \\||      ||=============||       ||       \\/       ||\n");
    printf("\t                                                               BY BALKISHAN :).....");
    
    
    
    
    enter: 
    printf("\n\nPress Enter to continue....\nPress esc to close the game....\nPress R for viewing the rules...");
    Sleep(500);
    start:
    key=getch();
    if (key==13)
   {
   	system("color a4");
   	
   	for ( i=3;i>=1;i--)
   	{
   	   system("cls");
	   printf("\n\n\n\n\n\t\t\n\n\t\t\t\t\t\t\t%d",i);
	   Sleep(1500);
	}
    system("cls");	
   	printf("\n\n\n\n\n\n\t\t\n\n\t\t\t\t\t\tWelcome to the game");
   	Sleep(1500);
   	
   }
   else if(key==27)
   {
   	printf("\nClosing the game......");
   	exit(1);
   }
   else if((key==114)||(key==82))
   {
   	system("cls");
   	system("color 0D");
   	printf("\t\t\n\n\n\n\t\t*****RULES OF THE GAME OF NUMBERS*****\n");
   	printf("\t\t     ============================      \n");
   	printf("\n\t=> The game will start with 4 players.\n");
   	printf("\t=> If any player gets 6 then it will get another chance and other players will be skiped for of time.\n");
   	printf("\t=> The snakes are wating for you at 9 15 23 37 56 87 98.\n\t\tBy the effects of snakes your overall score will be reduced by 10\n");
   	printf("\t=> The ladeders are wating for you at 17 29 37 41 57 64 77 84 92. \n\t\tBy the ladder you will get an extra 5 points in your overall score \n");
   	printf("\n\nPress Enter to continue....\nPress esc to close the game....\n");
   	goto start;
   }
   else 
   {
   	
   	printf("\nInvalid key press...\nPlease try again");
   	goto enter;
   	
   }
}