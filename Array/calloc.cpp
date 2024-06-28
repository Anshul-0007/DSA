// use of calloc for allocating dynamic memory

#include <stdio.h>
#include <stdlib.h>

int main(){
    //use of calloc
   int * ptr;
   int n;
   printf("enter the size of array you want to create\n");
   scanf("%d", &n);
   
   ptr = (int *)calloc(n, sizeof(int));
 for (int i = 0; i<n; i++)
   {
        printf("enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
   }
   for (int i = 0; i <n; i++){
       printf ("the value at %d of this array %d\n",i, ptr[i]);
   }
   return 0;
   
}
