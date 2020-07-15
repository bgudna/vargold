#include <ncurses.h>

typedef struct Leikmadur
{
    int xPos;
    int yPos;
    int heilsa;

} Leikmadur;

Leikmadur * leikmannsUppsetning();

int skjaUppsetning();
int kortUppsetning();

int main() {
    Leikmadur * notandi;
    skjaUppsetning();
    kortUppsetning();

    notandi = leikmannsUppsetning();
    getch();

    endwin();
    return 0;
}

int skjaUppsetning() {
    initscr();
    printw("hey now");
    noecho();
    refresh();
    return 0;
}

int kortUppsetning() {
    mvprintw(13,14,"###");
}