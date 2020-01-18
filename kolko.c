#include<stdio.h>
#include<math.h>

char square[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int main (){

    int opcje_menu;

    printf("            Gra kółko i krzyżyk             \n");
    printf("----------------------------------------------");

    do{
    printf("Menu\n");
    printf("1-Kółko i krzyżyk klasyczny\n");
    printf("2-Kółko i krzyżyk rozszerzony\n");
    printf("3-Wczytaj grę\n");
    printf("4-Zapisz i wyjdź z gry\n");
    printf("Wprowadź opcje z menu głównego:");
    scanf("%d",&opcje_menu);

    switch(opcje_menu){

    case 1:

    printf("________________\n");
    printf("|    |    |    |\n");
    printf("|  %c |  %c |  %c |\n", square[0], square[1], square[2]);
    printf("|____|____|____|\n");
    printf("|    |    |    |\n");
    printf("|  %c |  %c |  %c |\n", square[3], square[4], square[5]);
    printf("|____|____|____|\n");
    printf("|    |    |    |\n");
    printf("|  %c |  %c |  %c |\n", square[6], square[7], square[8]);
    printf("|____|____|____|\n");


        break;
    case 2:

        break;
    case 3:
        printf("case 3");
        break;
    case 4:
        break;
    default:
        printf("Nieprawidłowe dane!");
            break;
    }

    }while(opcje_menu !='4');



return 0;
}