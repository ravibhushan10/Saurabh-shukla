#include <windows.h>
#include<iostream>
using namespace std;
int main() {
    // Print a message
    cout<<"hello ravi";
    Sleep(3000); // Sleep function takes time in milliseconds
    system("cls");
    // Sleep for 3 seconds (3000 milliseconds)
    cout<<"how are you";
     
    // Beep with frequency 1000Hz and duration of 1000 milliseconds
    Beep(2500, 1000); // Beep function takes frequency in Hz and duration in milliseconds
    cout<<"Beep sound:";

    return 0;
}
