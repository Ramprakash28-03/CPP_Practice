#include <iostream>
#include <string>
using namespace std;

void printCharacter(char ch, int row);

int main() {
    int num, row, col, k;
    string word;
    string arr[10];
    
    cout << "Give the number of words which you want to print (greater than 0 and less than or equal to 10): ";
    cin >> num;

    if (num <= 0 || num > 10) {
        cout << "You have entered an invalid quantity.";
        return 1;
    }

    for (int i = 0; i < num; ++i) {
        cout << "Give the " << (i + 1) << " word: ";
        cin >> arr[i];
    }

    for (int j = 0; j < num; ++j) {
        word = arr[j];
        for (row = 1; row <= 7; ++row) {
            for (k = 0; k < word.length(); ++k) {
                printCharacter(word[k], row);
                cout << "   "; // Space between letters
            }
            cout << endl;
        }
        cout << endl; // Space between words
    }

    return 0;
}

void printCharacter(char ch, int row) {
    for (int col = 1; col <= 7; ++col) {
        switch (ch) {
            case 'A': case 'a':
                if (row == 1 || row == 4 || col == 1 || col == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'B': case 'b':
                if (row == 1 || row == 4 || row == 7 || col == 1 || col == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'C': case 'c':
                if (row == 1 || row == 7 || col == 1)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'D': case 'd':
                if (row == 1 || row == 7 || col == 1 || col == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'E': case 'e':
                if (row == 1 || row == 4 || col == 1 || row == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'F': case 'f':
                if (row == 1 || row == 4 || col == 1)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'G': case 'g':
                if (row == 1 || row == 7 || (row == 4 && col >= 4 && col <= 7) || (row == 5 && col == 7) || col == 1 || (row == 6 && col == 7))
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'H': case 'h':
                if (row == 4 || col == 1 || col == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'I': case 'i':
                if (row == 1 || row == 7 || col == 4)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'J': case 'j':
                if (row == 1 || (row == 7 && col < 4) || col == 4)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'K': case 'k':
                if ((row == 1 && col == 7) || (row == 5 && col == 3) || (row == 6 && col == 5) || (row == 7 && col == 7) || (row == 2 && col == 5) || (row == 3 && col == 3) || col == 1)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'L': case 'l':
                if (row == 7 || col == 1)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'M': case 'm':
                if (col == 1 || col == 7 || (row == 2 && (col == 2 || col == 6)) || (row == 3 && (col == 3 || col == 5)) || (row == 4 && col == 4))
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'N': case 'n':
                if (col == 1 || col == 7 || col == 2 && row ==2 || col == 3 && row == 3 || col == 4 && row == 4 || col == 5 && row == 5 || col == 6 && row == 6)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'O': case 'o':
                if (row == 1 || row == 7 || col == 1 || col == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'P': case 'p':
                if (row == 1 || row == 4 || (row == 2 && col == 7) || (row == 3 && col == 7) || col == 1)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'Q': case 'q':
                if (row == 1 || row == 5  || col == 1 && row<5 || col == 7 && row<5  || col == 4 && row == 4 ||col == 6 && row == 6 || col == 7 && row == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'R': case 'r':
                if (row == 1 || row == 4 || (row == 5 && col == 3) || (row == 6 && col == 5) || (row == 7 && col == 7) || (row == 2 && col == 7) || (row == 3 && col == 7) || col == 1)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'S': case 's':
                if (row == 1 || row == 4 || (row == 2 && col == 1) || (row == 3 && col == 1) || (row == 5 && col == 7) || (row == 6 && col == 7) || row == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'T': case 't':
                if (row == 1 || col == 4)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'U': case 'u':
                if (row == 7 || col == 1 || col == 7)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'V': case 'v':
                if (row == 1 && (col == 1 || col == 7)|| row == 3 && (col == 2 || col == 6)||row == 5 && (col == 3 || col == 5)||row == 7 && col == 4 )
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'W': case 'w':
                if (col == 1 || col == 7 || (row == 6 && (col == 2 || col == 6)) || (row == 5 && (col == 3 || col == 5)) || (row == 4 && col == 4))
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'X': case 'x':
                if (row == col || row + col == 8)
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'Y': case 'y':
                if ((row <= 4 && (col == row || col == 8 - row)) || (row > 4 && col == 4))
                    cout << "*";
                else
                    cout << " ";
                break;
            case 'Z': case 'z':
                if (row == 1 || row == 7 || row + col == 8)
                    cout << "*";
                else
                    cout << " ";
                break;
            default:
                cout << " ";
                break;
        }
    }
}
