//
//  main.c
//  XOX
//
//  Created by Sıla on 22.06.2023.
//

#include <stdio.h>
#define X 1
#define O 2
#include <stdlib.h>


int check(int tictactoe[3][3]){
    
    if(tictactoe[0][0]==1 && tictactoe[0][1]==1 && tictactoe[0][2]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);    }
    else if(tictactoe[0][0]==2 && tictactoe[0][1]==2 && tictactoe[0][2]==2){
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);    }
    else if(tictactoe[0][0]==1 && tictactoe[1][0]==1 && tictactoe[2][0]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);
    }
    else if(tictactoe[0][0]==2 && tictactoe[1][0]==2 && tictactoe[2][0]==2)
    {
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);
    }
    else if(tictactoe[1][0]==1 && tictactoe[1][1]==1 && tictactoe[1][2]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);
    }
    else if(tictactoe[1][0]==2 && tictactoe[1][1]==2 && tictactoe[1][2]==2)
    {
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);
    }
    else if(tictactoe[2][0]==1 && tictactoe[2][1]==1 && tictactoe[2][2]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);
    }
    else if(tictactoe[2][0]==2 && tictactoe[2][1]==2 && tictactoe[2][2]==2)
    {
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);
    }
    
    else if(tictactoe[0][0]==1 && tictactoe[1][1]==1 && tictactoe[2][2]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);
    }
    
    else if(tictactoe[0][0]==2 && tictactoe[1][1]==2 && tictactoe[2][2]==2)
    {
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);
    }
    else if(tictactoe[1][0]==1 && tictactoe[1][1]==1 && tictactoe[1][2]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);
    }
    else if(tictactoe[1][0]==2 && tictactoe[1][1]==2 && tictactoe[1][2]==2)
    {
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);
    }
    
    else if(tictactoe[0][2]==1 && tictactoe[1][1]==1 && tictactoe[2][0]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);
    }
    
    else if(tictactoe[0][2]==2 && tictactoe[1][1]==2 && tictactoe[2][0]==2)
    {
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);
    }
    else if(tictactoe[0][2]==1 && tictactoe[1][2]==1 && tictactoe[2][2]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);
    }
    
    else if(tictactoe[0][2]==2 && tictactoe[1][2]==2 && tictactoe[2][2]==2)
    {
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);    }
    else if(tictactoe[0][1]==1 && tictactoe[1][1]==1 && tictactoe[2][1]==1)
    {
        printf("Congrats! Player1 wins the game!");
        system("pause");
        exit(0);    }
    else if(tictactoe[0][1]==2 && tictactoe[1][1]==2 && tictactoe[2][1]==2)
    {
        printf("Congrats! Player2 wins the game!");
        system("pause");
        exit(0);
    }
    return 1;
}
    
    
    
    
    
    
    
    
    
int main() {
    int i;
    int j;
    int tictactoe[3][3];
    int line, column;
    int player1, player2;
    int selectedCh;
    int count=0;
    printf("*******XOX********\n");
    
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            tictactoe[i][j]=0;
            printf("[ %d ]", tictactoe[i][j]);
        }
        printf("\n");
    }
start:
    printf("Player1 which character would you like to use--> (x=1 o=2)\n");
    scanf("%d", &selectedCh);
    if(selectedCh==1){
        player1=X;
        player2=O;
    }
    else{
        player1=O;
        player2=X;
    }
    if(selectedCh!=0 && selectedCh!=1){
        printf("You just can choose 1 or 2!");
        goto start;
    }
    
    for(int i=0; i<9; i++){
    repeat:
        printf("Player1 which coordinate would you like to place %d?:\n", player1);
        scanf("%d\n %d", &line,&column);
        if(column>3 || line>3 || column<1|| line<1){
            printf("\nyou cannot select coordinates outside the boundaries!\n");
            goto repeat;
        }
        else{
            if(tictactoe[line-1][column-1]==0)
            {
                tictactoe[line-1][column-1]=player1;
                count=count+1;
                printf("\n");
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        printf("[ %d ]", tictactoe[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("This place is taken by player2!");
                goto repeat;
            }
            
            check(tictactoe);
       
        repeat2:
            printf("Player2 which coordinate would you like to place %d?:\n", player2);
            scanf("%d\n %d", &line,&column);
            if(column>3 || line>3 || column<1|| line<1)
            {
                printf("\nyou cannot select coordinates outside the boundaries!\n");
                goto repeat2;
            }
            else{
                if(tictactoe[line-1][column-1]==0)
                {
                    tictactoe[line-1][column-1]=player2;
                    count=count+1;
                    printf("\n");
                    for(i=0; i<3; i++)
                    {
                        for(j=0; j<3; j++)
                        {
                            printf("[ %d ]", tictactoe[i][j]);
                        }
                        printf("\n");
                    }
                }
                else
                {
                    printf("This place is taken by player1!");
                    goto repeat2;
                }
                
                check(tictactoe);
            }
            if(count==9)
            {
                printf("Neither player won the game; they drew!");
                system("pause");
                return 0;
            }
        }
    }
}
