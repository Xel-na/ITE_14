#include <stdio.h>

void Greedy_Choice_P(int Coin[],int size,int amount,int *count){
    for(int i = 0; i < size; i++){
        while(amount >= Coin[i]){
            amount = amount - Coin[i];
            (*count)++;

            printf("%d  ",Coin[i]);
        }// 
    }
}

int main (){
    int Cash[] = {1000,500,200,100,50,20,10,5,1};
    int Amount = 0;
    int Count = 0;
    int Size = sizeof(Cash)/sizeof(Cash[0]);

    printf("Enter the Amount: ");
    if(scanf("%d",&Amount) != 1 || Amount < 0){
        printf("Invalid Input.");
        return 1;
    }

    printf("Cash Used:\n");
    Greedy_Choice_P(Cash,Size,Amount,&Count);
    printf("\nTotal Cash Used: %d",Count);

    return 0;

}