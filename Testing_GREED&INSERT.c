#include <stdio.h>

void Insertion(int ARR[],int size,int *count){
    *count = 0;
    for(int i = 0; i < size; i++){
        int temp = ARR[i];
        int j = i - 1;

        while(j >= 0 && ARR[j] > temp){
            ARR[j+1] = ARR[j];
            j--;
            (*count)++;
        }
        ARR[j+1] = temp;
    }
}

int main () {
    int SIZE = 0;
    int COUNT = 0;

    printf("Enter num. of numbers: ");
    scanf("%d",&SIZE);

    int arr[SIZE];
    for(int i = 0; i < SIZE; i++){
        printf("%d. Number: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Unsorted Arr: ");
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ",arr[i]);
    }

    Insertion(arr,SIZE,&COUNT);
    printf("\nSorted ARR: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ",arr[i]);
    }
    
    printf("\nNum. of Shift: %d",COUNT);

    return 0;

}