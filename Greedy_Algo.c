#include <stdio.h>

void Input_Coin(int Coin[],int Size){
    Coin[Size];
    for(int i = 0; i < Size; i++){
        printf("Enter Coins: ");
        scanf("%d",&Coin[i]);

        for(int j = 0; j < i; j++){
            if(Coin[i] == Coin[j]){
                printf("No duplicate pls\n");
                i--;
                break;
            }
        }
    }
}

void Greedy_Choice_Property(int Coin[],int amount,int *count,int Size){
        for(int i = 0; i < Size; i++){
        while(amount >= Coin[i]){
            amount = amount - Coin[i];
            (*count)++;

            printf("%d  ",Coin[i]);
        }
    }
}
int main () {
    int num;
    int Amount;
    int Count=0;

    printf("Enter num. numbers: ");
    if(scanf("%d",&Amount) != 1 || Amount < 0){
        printf("Byess...\n");
        return 1;
    }
    
    int Coins[num];

    Input_Coin(Coins,num);

    printf("\nEnter the Amount: ");
    scanf("%d",&Amount);

    printf("Coins Used: ");
    Greedy_Choice_Property(Coins,Amount,&Count,num);
    printf("\nTotal Coins: %d",Count);

    return 0;
}