#include <ncurses.h>

int skjaUppsetning();

int main() {
    skjaUppsetning();
    
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