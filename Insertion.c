void Insertion(int ARR[],int Size,int *count){
    *count = 0;
    for(int i = 0; i < Size; i++){
        int temp = ARR[i];
        int j = i - 1;

        while( j >= 0 && ARR[j] < temp){
            ARR[j+1] = ARR[j];
            j--;
            (*count)++;
        }

        ARR[j+1] = temp;
    }
}

#include <stdio.h>

int main () {
    int size,num = 0;

    printf("Enter number of N: ");
    if(scanf("%d",&size) != 1 || size <= 0){
        printf("byee...");
        return 1;
    }
    

    int arr[size];
    for(int i = 0; i < size; i++){
        printf("%d. Number: ",i+1);
        scanf("%d",&arr[i]);
    }

    Insertion(arr,size,&num);

    for(int i = 0; i < size; i++){
        printf("%d  ",arr[i]);
    }
    printf("\nThe loop has looped %d times.",num);

    return 0;
}