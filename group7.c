#include<stdio.h>
#include<stdlib.h>

char group7(char response)
{	
	 int Ccountp=0,i;
        static int countp = 0;
	static char *yourChoicep;
	if(countp<11){
        	if (countp == 0){
			yourChoicep = (char *)malloc(sizeof(char));
			countp = countp + 1;
			*(yourChoicep + (countp - 1)) = response;
                	return 'C';
        	}
		else {
			countp = countp + 1;
			*(yourChoicep + (countp - 1)) = response;
			return response;
		}
	}else{
		for(i=0;i<11; i++)
			if(yourChoicep[i]=='C')
				Ccountp=Ccountp+1;
	//printf("  %d  ",Ccountp);
	if(Ccountp>=6){
		countp++;
		return 'C';}
	else{
		countp++;		
		return 'D';}
	}
}

