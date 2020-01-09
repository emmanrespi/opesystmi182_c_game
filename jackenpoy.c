#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Rock();
    int Paper();
    int Scissors();
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;
    srand(time(NULL));
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");


int reload()
{
refresh();

int Rock (){
  mvaddstr(10, 33, "    ***      ");
  mvaddstr(10, 33, "   *****     ");
  mvaddstr(11, 33, "   ******    ");
  mvaddstr(12, 33, "   *****     ");
  mvaddstr(13, 33, "    ***      ");
  mvaddstr(13, 33, "     *       ");
}

int Paper (){
  mvaddstr(10, 33, "    ******   ");
  mvaddstr(10, 33, "   ******    ");
  mvaddstr(11, 33, "   *****     ");
  mvaddstr(12, 33, "  *****      ");
  mvaddstr(13, 33, " *****       ");
  mvaddstr(13, 33, " ****        ");
}

int Scissors (){
  mvaddstr(10, 33, "   **   **   ");
  mvaddstr(10, 33, "    ** **    ");
  mvaddstr(11, 33, "     ***     ");
  mvaddstr(12, 33, "     ***     ");
  mvaddstr(13, 33, "    ** **    ");
  mvaddstr(13, 33, "   **   **   ");
}
    for(i=0;i<5;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
            int computer=rand()%3+1;
            if(choice==1){
		Rock(); 
                if(computer==1){
			Rock();
                    printf("Draw\n");
                }
                if(computer==2){
			Paper();
                    printf("Computer Wins!\n");
                    Cscore= Cscore + 1;
                }
                if (computer==3){
			Scissors();
                    printf("Player Wins\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(choice==2){
			Paper();
                    if(computer==2){
			Paper();
                        printf("Draw\n");
                    }
                    if(computer==3){
			Scissors();
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;
                    }
                    if(computer==1){  
			Rock();
                     printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
              }
                else if(choice==3){
			Scissors();
                    if(computer==3){
			Scissors();
                        printf("Draw\n");
                    }
                    if(computer==2){
			Paper();
                        printf("Computer Wins!\n");
                        Pscore= Pscore + 1;
                    }
                    if(computer==1){
			Rock();
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;

                    }
                }
        else{
            printf("Wrong Answer\n");
        }

            }
            if(Cscore > Pscore ){
                printf("Computer wins %d to %d\n",Cscore,Pscore);
            }
            else if(Cscore < Pscore ){
                printf("Player wins %d to %d\n",Pscore,Cscore);
            }
           else if(Cscore = Pscore ){
                printf("No winner it is a draw!\n");
            }


reload();
    return 0;
}

