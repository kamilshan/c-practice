#include <stdio.h>
int main()
{
int n,i,arr[20];
printf("enter the number of elements in array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("enter the element arr[%d] ",i);
    scanf("%d",&arr[i]);
}
printf("the elements in array are:\n");
for (i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
    
}
return 0;
}
