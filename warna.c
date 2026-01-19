#include <stdio.h>
#include <windows.h>
#define handle GetStdHandle(STD_OUTPUT_HANDLE)

// #define BLACK 0
// #define DARK_BLUE 1
// #define DARK_GREEN 2
// #define DARK_CYAN 3
// #define DARK_RED 4
// #define DARK_PURPLE 5
// #define DARK_YELLOW 6
// #define DARK_WHITE 7

// #define GRAY 8
// #define BLUE 9
// #define GREEN 10
// #define CYAN 11
// #define RED 12
// #define PURPLE 13
// #define YELLOW 14
// #define WHITE 15

void koordinat(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(handle, coord);
}

int text =0, background =0;
void warnateks(int new_color)
{
    SetConsoleTextAttribute(handle, new_color + background * 16);
    text = new_color;
}

//fungsi untuk mengubah warna latar belakang
void warnabg(int new_color)
{
    SetConsoleTextAttribute(handle, text + new_color * 16);
    background = new_color;

}

// void reset()
// {
//     printf("\033[1;30;47m");
// }

void warnaTB(int text, int background)
{
    SetConsoleTextAttribute(handle, background * 16 + text);
}


void pause()
{
    system("pause>nul");
}

