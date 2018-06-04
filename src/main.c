#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "board.h"

void help_print();
void info_print();
int board_main();

int main() {
    system("clear");
    char q;
    info_print();
    scanf("%c", &q);
    if (q == 's') {
        board_main();
        return 0;
    } else if (q == 'q'){
        system("clear");
        printf("%sGG!%s\n",GREEN, RESET);
        return 0;
    } else {
        system("clear");
        main();
    }
    return 0;
}


