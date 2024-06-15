#include<ncurses.h>
int main()
{
	initscr();
	raw();
	noecho();
	printw("press any key to continue...");
	refresh();
	getch();
	endwin();
	return 0;
}
