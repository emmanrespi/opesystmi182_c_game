#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

int Pscore =0;
int Cscore =0;
int choice;

int  rock () {
  printf("    ***      \n");;
  printf("   *****     \n");;
  printf("  *******    \n");;
  printf("   *****     \n");;
  printf("    ***      \n");;
  printf("     *        \n");;
}

int paper(){
  printf("      ******   \n");;
  printf("     ******    \n");;
  printf("    ******     \n");;
  printf("   ******      \n");;
  printf("  ******       \n");;
  printf(" ******        \n");;
}

int scissors(){
  printf("  **    **   \n");;
  printf("   **  **    \n");;
  printf("    ****     \n");;
  printf("    ***      \n");;
  printf("  **   **    \n");;
  printf("  **   **    \n");;
}

int reload()
{
    refresh();

    for(int i = 0; i < 5; i++) {

        printf("Enter your choice:");
        scanf("%d", &choice);

        int computer = rand() % 3 + 1;

        if(choice==1){

            printf("Player: Rock\n");
            rock();

            if(computer==1){
                printf("\nComputer: Rock\n");
                rock();
                printf("\nDraw\n");
            }
            
            if(computer==2){
                printf("\nComputer: Paper\n");
                paper();
                printf("\nComputer Wins!\n");
                Cscore= Cscore + 1;
            }

            if (computer==3){
                printf("\nComputer: Scissors\n");
                scissors();
                printf("\nPlayer Wins\n");
                Pscore = Pscore + 1;
            }
        } else  if(choice==2) {

            printf("Player: Paper\n");
            paper();

            if(computer==2){
                printf("\nComputer: Paper\n");
                paper();
                printf("\nDraw\n");
            }

            if(computer==3){
                printf("\nComputer: Scissors\n");
                scissors();
                printf("\nPlayer Wins!\n");
                Pscore = Pscore + 1;
            }

            if(computer==1){
                printf("\nComputer: Rock\n");
                rock();
                printf("\nComputer Wins!\n");
                Cscore= Cscore + 1;
            }

        } else if(choice==3){

            printf("Player: Scissors\n");
            scissors();

            if(computer==3){
                printf("\nComputer: Scissors\n");
                scissors();
                printf("\nDraw\n");
            }
            if(computer==2){
                printf("\nComputer: Paper\n");
                paper();
                printf("\nComputer Wins!\n");
                Pscore= Pscore + 1;
            }
            if(computer==1){
                printf("\nComputer: Rock\n");
                rock();
                printf("\nPlayer Wins!\n");
                Pscore = Pscore + 1;

            }
        } else {
            printf("Wrong Answer\n");
        }
        printf("\n");
    }

    if(Cscore > Pscore ){
        printf("\nComputer wins %d to %d\n",Cscore,Pscore);
    } else if(Cscore < Pscore ){
        printf("\nPlayer wins %d to %d\n",Pscore,Cscore);
    } else if(Cscore = Pscore ){
        printf("\nNo winner it is a draw!\n");
    }

    return 0;
}

int main()
{
    reload();
    int i;
    srand(time(NULL));
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");

}

