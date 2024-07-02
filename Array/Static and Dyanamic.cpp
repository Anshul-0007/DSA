// Creating arrays in stack or heap

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6] = {2,4,6,8,10,12};          //for stack
    int *p;
    int i;
    
    p=(int *)malloc(6*sizeof(int));      // for heap
    p[0] =3;
    p[1] =5;
    p[2] =7;
    p[3] =9;
    p[4] =11;
    p[5] =13;
    
    for(i =0; i<6; i++){
        printf("%d ",A[i]);
    } 
    printf("\n");
    for(i=0; i<6; i++){
        printf("%d ", p[i]);
    }
    
return 0;
}
