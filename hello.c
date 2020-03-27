/*
 ============================================================================
 Name        : 2-D.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
  int q,i,j;
  char s[10][10];

  scanf("%d",&q);
  for(i=0;i<q;i++)
  {
	  scanf("%s",&s[i]);
  }

  int ans =0;
  for(j=0;j<q;j++)
  {
	  for(i=0;s[i]!='\0';i++)
	  {
	  if(strcmp(s[i],s[i+1])== 0)
	  {
		  ans++;
	  }
	  printf("%d\n",ans);

	  }
  }

    return 0;
}
