// In C
#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0; i<arr.length; i++){
        printf("%d\n", arr.A[i]);
    }
    
}
int main(){
    struct Array arr;
    int n,i;
    printf("Enter size of an array ");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length =0;
    
    printf("Enter number of numbers ");
    scanf("%d", &n);
    
    printf("Enter all numbers \n");
    for(i =0; i<n; i++){
        scanf("%d", &arr.A[i]);
    arr.length=n;
    }
    
    Display(arr);
    
    return 0;
}



// In C++

#include <iostream>
using namespace std;

class Array{
    
private:
    int*A;
    int size;
    int length;
    
public:
    Array(int size){
        this->size =size;
        A = new int [size];
    }

    void create(){
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array element " << endl;
        for(int i =0; i <length; i++){
            cout << "Array element: " << i << "=" << flush;
            cin >> A[i];
        }
    }
    
    void display(){
        for(int i = 0; i < length; i++){
            cout << A[i]<< " ";
        }
    }
};
    
int main(){
        Array arr(10);
        arr.create();
        arr.display();
        return 0;
}












    
    
    
    
    
    
