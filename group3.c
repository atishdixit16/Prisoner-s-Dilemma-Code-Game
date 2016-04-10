//group 3 subroutine

#include<stdio.h>
#include<stdlib.h>

char group3(char response)
{
   static int count =0;
   static char *yourChoice;
   if(count==0)
      {
           yourChoice = (char *)malloc(sizeof(char));
 	   *yourChoice= response;
           count = count + 1;
           return 'D';
      }
    if(count==1)
      {
           count = count + 1;
           *(yourChoice +1)= response;
           return 'D';
      }
      
    if(yourChoice[0] == 'C' && yourChoice[1] == 'C')
       {
	   count++;
	   yourChoice[0]=yourChoice[1];
	   yourChoice[1]=response;
           return 'C';
       }
     else{
	   count++;
	   yourChoice[0]=yourChoice[1];
	   yourChoice[1]=response;
           return 'D';
       } 
 }