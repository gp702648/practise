#include<stdio.h>
#pragma pack(1)
struct name{
    char name;
    int num;
    char n1;

  };
  void main()
  {


  struct name s1={ 's',4,'r'};
  printf("%c\n",s1.name);
  printf("%d\n",s1.num);
  printf("\n%d",sizeof(s1));
  }
