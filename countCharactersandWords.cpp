#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream inFile("ReadThisFile.txt");
    char ch;
    int word = 0;
    int charCount = 0;
    int space = 1;

    while (inFile.get(ch)) {
        cout << ch;
        if (ch != '\n' && ch != '\r') {
            charCount++;
        }


        if (isspace(ch)) {
            space = 1;
        } else {

            if (space == 1) {
                word++;
            }
            space = 0;
        }
    }

    inFile.close();

    cout << "\nThe number of words in the file are: " << word << endl;
    cout << "The number of characters in the file are: " << charCount << endl;

    return 0;
}
