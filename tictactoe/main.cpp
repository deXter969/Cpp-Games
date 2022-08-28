#include <iostream>

using namespace std;

bool victoryCheck(char ch);
void userEntry(char ch);
void printBoard();
//void clrScreen();

char gameBoard[3][3] = { {'.','.','.'},{'.','.','.' },{'.','.','.',} };

int main()
{
    bool hasWon = false;

    for(int iteration=0; iteration < 9; iteration++)
    {
        char ch;
        if(iteration%2 == 0) ch = 'X';
        else ch = 'O';
        system("cls");
        printBoard();
        userEntry(ch);
        hasWon = victoryCheck(ch);
        if(hasWon)
        {
            system("cls");
            printBoard();
            cout << "Congratulations " << ch << " has won the game." << endl;
            return 0;
        }

    }

    cout << "Match Drawn" << endl;

    return 0;
}



void userEntry(char ch)
{


    int num, i=0, j=0;
        cout << "Enter a number between 1 to 9: ";
        cin >> num;
        i = (num-1)/3;
        j = (num-1)%3;

        if(num <= 0 || num > 9)
        {
            cout << "Number is invalid. Try again" << endl;
            userEntry(ch);
        }
        else{
            if(gameBoard[i][j] == '.')
            {
                gameBoard[i][j] = ch;
                //cout << i << " " << j << endl;
            }
            else{
                cout << "Number is invalid. Try again" << endl;
                userEntry(ch);
            }
        }

}

bool victoryCheck( char ch)
{
    if(gameBoard[0][0] == ch && gameBoard[0][1] == ch && gameBoard[0][2] == ch ) return true;
    else if(gameBoard[2][0] == ch && gameBoard[2][1] == ch && gameBoard[2][2] == ch ) return true;
    else if(gameBoard[1][0] == ch && gameBoard[1][1] == ch && gameBoard[1][2] == ch ) return true;
    else if(gameBoard[0][0] == ch && gameBoard[1][0] == ch && gameBoard[2][0] == ch ) return true;
    else if(gameBoard[0][1] == ch && gameBoard[1][1] == ch && gameBoard[2][1] == ch ) return true;
    else if(gameBoard[0][2] == ch && gameBoard[1][2] == ch && gameBoard[2][2] == ch ) return true;
    else if(gameBoard[0][0] == ch && gameBoard[1][1] == ch && gameBoard[2][2] == ch ) return true;
    else if(gameBoard[0][2] == ch && gameBoard[1][1] == ch && gameBoard[2][0] == ch ) return true;
    else return false;

}

void printBoard()
{

    for(int i = 2; i >= 0; i--)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << gameBoard[i][j];
        }
        cout << endl;
    }
}
