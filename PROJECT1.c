#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>

struct Card{
    char cName[60];
    char cType[11];
    int LP;
    int AP;
    int DF;
};

void Game(){

    int gameRun = 1;
    //Here it reads the cards and places them on a struct

    FILE* ptr = fopen("cards.txt", "r");
	if (ptr == NULL){
        system("cls");
        printf("No card text file found");
        sleep(2);
        return 0;
	}      

    

    while (fscanf(ptr, "%s, %s %d %d %d", ) == 5){


    }
    while(gameRun > 0){


    }


}

int main(int argc, char *argv[]){

    int gameMenu = 1;
    int menuSelector = 1;
    int menuInput;

    while (gameMenu > 0){
        sleep(2);
        system("cls");
        menuSelector = 1;

        while (menuSelector == 1){
            
            system("cls");
            
            menuInput = 0;
            printf("        Menu\n\nTo play input 1\nTo add cards input 2\nTo choose difficulty input 3\nTo close game input 4\nInput:");
            scanf("%d", &menuInput);
            if(menuInput > 0 && menuInput < 4){
                menuSelector = 0;
            }
            else{
                printf("\nPlease use the correct input (1,2,3)");
                sleep(4);
            }
            
        }

        switch (menuInput){

            case 1:
                void Game();
                break;

            case 4:
                gameMenu = 0;
                break;
        }
    }
    return 0;
}