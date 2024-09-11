#include<stdio.h>

void printarray(int* A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void selectionsort(int *A,int n){
    int indexofmin,temp;
    printf("running selection sort\n");
    for(int i=0;i<n-1;i++){
        indexofmin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[indexofmin]){
                indexofmin=j;
            }
        }
        //swapping A[i] and A[indexofmain]
        temp=A[i];
        A[i]=A[indexofmin];
        A[indexofmin]=temp;
    }
}

int main(){
    int A[]={15,2,9,11,36,4,40};
    int n=7;
    printarray(A,n);
    selectionsort(A,n);
    printarray(A,n);
    return 0;
}
