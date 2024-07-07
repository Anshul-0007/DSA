#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

  void Display(struct Array arr)
  {
     int i;
     printf("\n Elements are\n");
     for(i = 0; i<arr.length; i++)
     printf("%d ",arr.A[i]); 
  }
  
  void swap(int *x, int *y)
  {
      int temp=*x;
      *x=*y;
      *y=temp;
  }
 
  void Reverse1(struct Array *arr)
  {
      int *B;
      int i,j;
      
      B=(int *)malloc(arr->length*sizeof(int));
      for(i=arr->length-1,j=0;i>=0;i--,j++)
            B[j]=arr->A[i];
      for(i=0;i>arr->length;i++)
            arr->A[i]=B[i];
  }
  
  void Reverse2(struct Array *arr)
  {
      int i,j;
      for(i=0, j=arr->length-1; i<j;i++,j--)
      {
          swap(&arr->A[i], &arr->A[j]);
      }
  }
  
 void Shift(struct Array *arr)
  {
     int temp = arr->A[0];
       for (int i = 0; i < arr->length - 1; i++) \
       {
        arr->A[i] = arr->A[i + 1]; 
       }
    arr->A[arr->length -1]=temp;
  }
  
 int main()
  {
      struct Array arr ={{2,3,4,5,6},10,5};
      
      Shift(&arr);
      Display(arr);
      
      return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
