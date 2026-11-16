#include <stdio.h>

void Insertion_Input(int ARR[],int size,int *Count){
    *Count = 0;

    // {10,4,2,1}
    for(int i = 1   ; i < size; i++){
        int temp = ARR[i]; //key
        int j = i - 1;

        while(j >= 0 && ARR[j] > temp){ // 10 > 4
            ARR[j + 1] = ARR[j]; // 10 , 10 {10,10,2,1}
            j--; 
            (*Count)++;
        }//shift

        ARR[j+1] = temp; //index - 1 = index 0
        // {4,10,2,1}
    }// pass
}

int main (){
    int num = 0;
    int Pass = 0;

    printf("Num. Of Numbers: ");
    if(scanf("%d",&num) != 1 && num <= 0){
        printf("Invalid Input...");
        return 1;
    }
    

    int arr[num];
    for(int i = 0; i < num; i++){
        printf("%d. Number: ",i+1);
        if(scanf("%d",&arr[i]) != 1){
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("\nUnsorted: ");
    for(int i = 0; i < num; i++){
        printf("%d ",arr[i]);
    }

    Insertion_Input(arr,num,&Pass);

    printf("\nSorted: ");
    for(int i = 0; i < num; i++){
        printf("%d ",arr[i]);
    }
    printf("\n\nTotal shift: %d",Pass);

    return 0;
}