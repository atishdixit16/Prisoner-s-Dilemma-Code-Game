#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int main()
{
  int nrounds=10;
  int itr,i,j,score2=0,score1=0;
  int *score_;
  char response1,response2,prev_response1,prev_response2;
  
  int nteams=7;
  char (*fun_ptr_arr[])(char) = {dummy1, group1, group2, group3, group5, group6, group7};

  int *array[nteams];
  for (i=0; i<nteams; i++)
  	array[i] = (int *)malloc(nteams * sizeof(int));

  for (i = 0; i < nteams; i++)
      for (j = 0; j < nteams; j++)
         array[i][j] = 0;

  for (i=0;i<nteams;i++)  {
	for (j=i;j<nteams; j++) {
		score1=0;
		score2=0;
		for (itr=1;itr<=nrounds;itr++) {
        		response1 = (*fun_ptr_arr[i])(prev_response2);
        		response2 = (*fun_ptr_arr[j])(prev_response1);
			prev_response1 = response1;
			prev_response2 = response2;
		        score_ = score(response1,response2);
		        score1 = score1 + score_[0];
		        score2 = score2 + score_[1];
  		}
		array[j][i]=score2;
		array[i][j]=score1;
  	}
  }
  
  for (i = 0; i <  nteams; i++) {
      for (j = 0; j < nteams; j++) {
         printf("%d ", array[i][j]);
      }
      printf("\n");
  }
  
  return 0;
}
