#include <stdio.h>
#include <curses.h>

int main(char* argvs[], int argc) {
  int ch, bold = 0;

  initscr();
  raw();
  cbreak();
  noecho();

  do {
    ch = getch();

    if (ch == '*') {
      bold = !bold;

      if (bold) {
        attron(A_BOLD);
      } else {
        attroff(A_BOLD);
      }
    } else {
      addch(ch);
    }

    refresh();
  } while (ch != 'q');

  endwin();

  return 0;
}

