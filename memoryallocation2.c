#include <stdio.h>
#include <stdlib.h>
int n;
int *pointer(){
    int i;
    int *ptr;
   
   
    printf("enter the number of elements");
    scanf("%d",&n);
     int size=n*sizeof(*ptr);
      ptr= (int *)malloc(size);
      printf("enter the elements");
      for(i=0;i<n;i++)
      scanf("%d",ptr+i);
      return ptr;
}
int main() 
{
    int i ,sum=0;
    int *ptr2= pointer();
    for (i=0;i<n;i++){
        sum += *(ptr2+i);
    }
    printf("sum is %d",sum);
  
    free(ptr2);
    ptr2=NULL;
    return 0;
    
}
