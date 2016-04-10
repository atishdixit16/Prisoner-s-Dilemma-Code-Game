#include<stdio.h>
#include<stdlib.h>


char group1(char response) {
        static int count = 0,triger=0;
        if (count == 0)
		count = 1;

	if( response=='D' )
		triger=1;

	if( triger==1 )
		return 'D';
	else
		return 'C';	
}


