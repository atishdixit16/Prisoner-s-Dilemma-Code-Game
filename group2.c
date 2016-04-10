#include<stdio.h>
#include<stdlib.h>

char group2(char response) {
        static int count = 0;
        static char *myChoice, *yourChoice;
        if (count == 0)  { 
                myChoice = (char *)malloc(sizeof(char));
                yourChoice = (char *)malloc(sizeof(char));
                *myChoice = 'C';
                count = count + 1;
                return 'C';
        }
        *(yourChoice + (count - 1)) = response;
        int *score1;
        static int YourScore=0,MyScore=0;
        score1 = score(yourChoice[count-1],myChoice[count-1]);
        YourScore = YourScore + score1[0];
        MyScore = MyScore + score1[1];

        if (MyScore > YourScore) {
                *(myChoice + count) = 'C';
                count = count + 1;
                return 'C';
        }
        if (MyScore < YourScore) {
                *(myChoice + count) = 'D';
                count = count + 1;
                return 'D';
        }
        if (MyScore == YourScore) {
                int num = rand()%10;
                if (num <= 5) {
                        *(myChoice + count) = 'C';
                        count = count + 1;
                        return 'C';
                }
                else {
                        *(myChoice + count) = 'D';
                        count = count + 1;
                        return 'D';
                }
        }
}


