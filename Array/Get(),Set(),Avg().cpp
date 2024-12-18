#include <stdio.h>
#include <stdlib.h>
 
struct Array
{
    int A[10];
    int size;
    int length;
};

    void Display(struct Array arr)
    {
    int i;
    printf("\n Elements are\n");
    for(i = 0; i<arr.length; i++)
        printf("%d",arr.A[i]);
    }

 void swap(int *x, int *y)
 {
     int temp=*x;
     *x=*y;
     *y=temp;
 }
 
 int Get (struct Array arr, int index)
 {
        if(index>=0 && index<arr.length)
            return arr.A[index];
        return -1;
 }
 
 void Set(struct Array *arr, int index, int x)
 {
     if(index>=0 && index<arr->length)
        arr->A[index]=x;
 }
 
 int Max(struct Array arr)
 {
     int max=arr.A[0];
     int i;
     for(i=0; i<arr.length; i++)
     {
        if(arr.A[i]>max)
            max=arr.A[i];
     }        
 return max;
 }

int Min(struct Array arr)
{
    int Min=arr.A[0];
    int i;
    for(i=1; i<arr.length; i++)
    {
        if(arr.A[i]<Min)
            Min=arr.A[i];
    }
    return Min;
}

int Sum(struct Array arr)
{
    int s=0;
    int i;
    for(i =0; i<arr.length; i++)
        s+=arr.A[i];
    return s;
}

float avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main()
{
    struct Array arr={{2,3,14,25,6},10,5};
    
    //printf("%d\n",Get(arr,2));
    //Set(&arr,3,15);
    //printf("%f\n",Max(arr));     //Max/Max
    //printf("%d\n",Sum(arr));
    printf("%f\n",avg(arr));
    Display(arr);
    
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
