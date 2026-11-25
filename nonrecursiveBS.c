#include <stdio.h>

#include <stdlib.h>
#include <string.h>

int BS(int array[], int low,int high, int key){
   for(;low<=high;){
    int mid = (low + high) / 2;
    if(array[mid]==key){
        return mid;

    }
    else if(array[mid]<key){
        low=mid+1;

    }
    else{
        high=mid-1;
    }
   } 
   return -1;
      
}



