#include<stdio.h>
#include<stdlib.h>

char dummy1(char PrevResp)
{
        static int count1 = 0;
        if (count1 == 0)         {
                count1 = count1 + 1;
                return 'C';
        }
        return PrevResp;
}


