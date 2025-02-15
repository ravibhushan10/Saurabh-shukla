#include <windows.h>
#include <iostream>


/*cursor positioning for cmd*/

void setCursorPosition(int x, int y) {
    COORD coord;  /*here COORD is a predefind structure which definition written in windows header file*/
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    /*GetStdHandle(STD_OUTPUT_HANDLE) this is a windows api which handling the console screen*/
}


void setTextColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

    /*here 
    1.SetConsoleCursorPosition = this a function
    2.SetConsoleTextAttribute = this a function
    */
}


int main() {
    system("cls"); /*for clear the previous output from terminal in windows gcc only*/

    int x = 60, y = 20; 
    int color = 10;    

    setCursorPosition(x, y);  
    setTextColor(color);     
   std :: cout << "Hello ravi:" <<std :: endl;

    // Reset color to default (White)
    setTextColor(10);

    return 0;
}
