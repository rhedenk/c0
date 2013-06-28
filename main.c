#include <stdio.h>
#include <curses.h>

int main(char* argvs[], int argc) {
  initscr();

  printw("Hello World !");
  refresh();

  getch();

  endwin();

  return 0;
}

