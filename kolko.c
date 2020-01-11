#include<stdio.h>
#include<math.h>

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

    case '1':

        break;
    case '2':

        break;
    case'3':
        printf("case 3");
        break;
    case'4':
        break;
    default:
        printf("invalid input");
            break;
    }

    }while(opcje_menu !='4');



return 0;
}