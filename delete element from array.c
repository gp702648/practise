/*#include <stdio.h>
int main()
{
   int array[100], position, c, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter  elements\n");

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   return 0;
}*/
#include<stdio.h>
/*int main()
{
    int n,i,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        fact=fact*i;
    printf("%d",fact);

}*/
int main()
{
    int n,a=0,b=1,res;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         printf("%d\n",a);
        res=a+b;

        a=b;
        b=res;
    }













}
