#include<stdio.h>
#include<stdlib.h>

char group5(char response)
{	
	static int Ccount=0,i;
        static int count1 = 0;
	static char *yourChoice;
	if(count1<=3){
        	if (count1 == 0){
			yourChoice = (char *)malloc(sizeof(char));
			count1 = count1 + 1;
			*(yourChoice + (count1 - 1)) = response;
                	return 'C';
        	}
		else {
			count1 = count1 + 1;
			*(yourChoice + (count1 - 1)) = response;
			return response;
		}
	}
	else if(count1 == 4){
		for(i=0;i<=3; i++)
			{if(yourChoice[i]=='C')
				Ccount=Ccount+1;}
	if(Ccount>=2)
		{count1 = count1 + 1;
		return 'C';}
	else{
		count1 = count1 + 1;
		return 'D';}
	
	}
     else{return 'D';}
}