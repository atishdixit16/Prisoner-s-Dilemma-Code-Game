#include<stdio.h>
#include<stdlib.h>

char group6(char response){

        static int count = 0;
        static char *myChoice, *yourChoice;
	char choice[1000];
	int i;
        while(count <1000)
         {
		if (count<3)
		{	
			myChoice = (char *)malloc(sizeof(char));
	                
	                *myChoice = 'C';
	                choice[count]=response;
	                count = count + 1; 
			      
	                return 'C';
        	}
		
		if (count >=3)
		{	choice[count]=response;
			
			if( choice[count] == 'C' && choice[count-1] == 'C' )
			{
 		          myChoice = (char *)malloc(sizeof(char));
                          
	                  *myChoice = 'C';
                          count = count + 1;
                          return 'C';
			  }
		else{
		      choice[count]=response;
		      myChoice = (char *)malloc(sizeof(char));
                      
	              *myChoice = 'D';
                        count = count + 1;
                         return 'D';		
		} 

		}

	}
}
