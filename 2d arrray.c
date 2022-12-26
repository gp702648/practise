#include<stdio.h>
int main()
{
    int i,j,m,n;


printf("enter the row size:-");
scanf("%d",&m);
printf(" enter the column size:-");
scanf("%d",&n);
int arr[m][n];
printf("enter the number of elements in 2d array:-\t");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)

 {


scanf("%d",&arr[i][j]);
 }


}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
  {


printf("%2d ",arr[i][j]);

}
printf("\n");
}
}
