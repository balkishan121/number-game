/*
                 A game of numbers created by: 
				 Balkishan Padihar (PC21-IST-021) 
				                 &&
				 Subrat kumar Pradhan (PC21-IST-011)
                 Bsc IST (Information Science & telecommuniction)
                 Under the guidnace of: Mr. Manoj Guru
                 Date stared:29/03/2022
                 Last modified: 09/04/2022
*/

#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<conio.h> 
#include "number_game_logo.c" 
/* 
in a separate c file statring interface is created so in order to get the 
stating interface we have included the file "number_game_logo.c"
this helps to reduce the size of the code 
*/

int snake (int);//function to get sanke in the game
int ladder(int);//function to get ladder

//==============================================
//*************main function********************
//==============================================

int main ()
{
    logo(); // to get the starting interface defined in another c file 
    Sleep(1000);
    system("cls");
	system("color 0A");
	int sum1=0,sum2=0,num=0,sum3=0,sum4=0;
    //*********displaying the players*******
	printf("\tplayer:1\t\t\tplayer:2\t\t\tplayer:3\t\t\tplayer:4\n");
	printf("\t_________\t\t\t_______\t\t\t\t________\t\t\t________");
	srand(time(0));
	
    //*****printing the numbers*****
	while(1)
	{
		//******player-1*********
	p1:	
	    printf("\n\t%d",sum1);
        num=(rand()%6)+1;		
		printf("+%d\t\t\t",num);
		sum1=sum1+num;
		
      sum1=snake(sum1); // calling snake function
      sum1=ladder(sum1); // calling ladder function
	  
	  if (sum1<0)
	  {
		  sum1=0;
	  }
	  if(sum1==100)
		{
			printf("\n\t\t\t\t\a_______******player:1 is your winner******_______"); 
			break;
		}
		else if (sum1>100)
		{
			sum1=sum1-num;
		}
		if(num==6)
		{
			goto p1;
		}
		Sleep(500);
		
		//******player-2*********
		p2:
	    printf("\t%d",sum2);
        num=(rand()%6)+1;		
		printf("+%d\t\t\t",num);
		sum2=sum2+num;
		
      sum2=snake(sum2);
	  sum2=ladder(sum2);
	  
    	if (sum2<0)
	     {
		   sum2=0;
	     }
	   
	   if(sum2==100)
	   {
	    	printf("\n\t\t\t\t\a_______******player:2 is your winner******_______");
 		    break;	
       }
	   else if (sum2>100)
	  {
		sum2=sum2-num;
	  }
    	if(num==6)
		{
			printf("\n\t\t\t\t");
			goto p2;
		}	
		Sleep(500);
		
		//******player-3*********
		p3: 
		printf("\t%d",sum3);
        num=(rand()%6)+1;		
        printf("+%d\t\t\t",num);
		sum3=sum3+num;

      sum3=snake(sum3);	
	  sum3=ladder(sum3);
	   if (sum3<0)
    	{
		  sum3=0;
	    }
	  
		if(sum3==100)
		{
			printf("\n\t\t\t\t\a_______******player:3 is your winner******_______");
			break;
		}
		else if (sum3>100)
		{
			sum3=sum3-num;
		}
		if(num==6)
		{
			printf("\n\t\t\t\t\t\t\t\t");
			goto p3;
		}

		Sleep(500);
	
      //******player-4*********
		p4: 		
	    printf("\t%d",sum4);
        num=(rand()%6)+1;		
        printf("+%d\t\t\t",num);
		sum4=sum4+num;	

       sum4=snake(sum4);
       sum4=ladder(sum4);
	   if (sum4<0)
	  {
		  sum4=0;
	  }
	  
		if(sum4==100)
		{
			printf("\n\t\t\t\t\a_______******player:4 is your winner******_______");
			break;
		}
		else if (sum4>100)
		{
			sum4=sum4-num;
		}
        if(num==6)
        {
        	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t");
        	goto p4;
		}
		Sleep(500);
	}
	
	return 0;
}

//=================================================
//**************end of main function**************
//=================================================


//=================================================
//*********definitation of snake fuction************
//=================================================
int snake (int sum1)
{
	
	switch (sum1) 
	  {
	      case 9: 
		  sum1=sum1-10;
		  break; 
		  case 15: 
		  sum1=sum1-10;
		  break;
		  case 23:
		  sum1=sum1-10; 
		  break;
		  case 37: 
		  sum1=sum1-10;
		  break;
		  case 56: 
		  sum1=sum1-10;
		  break;
		  case 87: 
		  sum1=sum1-10;
		  break;
		  case 98: 
		  sum1=sum1-10;
		  break;
	  }
	return sum1;
}
//=================================================
//*********definitation of lader fuction************
//=================================================
int ladder(int sum1)
{
		switch (sum1) 
	  {
	      case 17: 
		  sum1=sum1+5;
		  break; 
		  case 29: 
		  sum1=sum1+5;
		  break;
		  case 37:
		  sum1=sum1+5; 
		  break;
		  case 41: 
		  sum1=sum1+5;
		  break;
		  case 57: 
		  sum1=sum1+5;
		  break;
		  case 64: 
		  sum1=sum1+5;
		  break;
		  case 77: 
		  sum1=sum1+5;
		  break;
		  case 84:
		  sum1=sum1+5;
		  break;
		  case 92:
		  sum1=sum1+5;
	  }
	return sum1;
}
