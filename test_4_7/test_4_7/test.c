#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
 int num=0;
    scanf("%d",&num);
    
    char arr[num]={0};
    scanf("%s",arr);
    int m=0;
    scanf("%d",&m);
    int i=0;
    int position=-1;
    for(i=0;i<num;i++)
    {
        if(arr[i]==m)
        {
            position=i;
        }
        
    }
   if(position!=-1)
   {
     printf("It's position is %d!",position);
   }
    else
    {
      printf("No data!");
    }
}