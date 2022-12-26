#include<stdio.h>
//#pragma pack(1)
struct name{
    char name[10];
    int num;


  };
  void main()
  {


  struct name s1[2];
  int i;
  for(i=0;i<2;i++)
  {
  printf("enter the name %d:-",i+1);
  scanf("%s",&s1[i].name);
   printf("enter the num %d:-",i+1);
  scanf("%d",&s1[i].num);
  }
  printf("\n");
  for(i=0;i<2;i++)
  {
  //printf("enter the name:-");
  printf("%s\n",s1[i].name);
  // printf("enter the num:-");
  printf("%d\n",s1[i].num);
  // printf("enter the name");

  }
  return ;
  }



