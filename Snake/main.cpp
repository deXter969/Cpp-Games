#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch = getch();
    cout << ch << endl;
    int x = (int) ch;

    switch(x) {
    case 65:
        cout << endl << "Up" << endl;//key up
        break;
    case 66:
        cout << endl << "Down" << endl;   // key down
        break;
    case 67:
        cout << endl << "Right" << endl;  // key right
        break;
    case 68:
        cout << endl << "Left" << endl;  // key left
        break;
}
    system("pause > 0");
    return 0;
}
