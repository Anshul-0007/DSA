// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main(){git
    //use of malloc
    int*ptr;
    int n;
    printf("enter the size of array you want to create\n");
    scanf("%d", &n);
    
    ptr = (int*) malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("enter the value at %d of this array %d\n",i, ptr[i]);
    }
    return 0;
   
}
