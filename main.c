#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int main()
{
  int nrounds=10;
  int i=1,score2=0,score1=0;
  int *score_;
  char response1,response2,prev_response1,prev_response2;

  printf("\n*** Prisoner's Dilemma! ***\n");

  printf("\nChoice : C to cooperate,D to defect\n");
  for (i=1;i<=nrounds;i++) {
        response1 = group1(prev_response2);
        response2 = group7(prev_response1);
	prev_response1 = response1;
	prev_response2 = response2;
        printf("\nRound %d : group1 = %c , group4 = %c",i,response1,response2);
        score_ = score(response1,response2);
        score1 = score1 + score_[0];
        score2 = score2 + score_[1];
  }
  printf("\nScores:\ngroup1=%d,\ngroup4=%d",score1,score2);
  if (score1 < score2)
        printf("\n\ngroup4 won\n");
  else if (score1 > score2)
        printf("\n\ngroup1 won\n");
  else
        printf("\nIts a tie!\n");
  
  return 0;
}
