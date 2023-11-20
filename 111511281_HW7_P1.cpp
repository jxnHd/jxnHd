#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void printLines(const string& filename) {
    ifstream file(filename);

    string line;
    int totalLines;
    while (getline(file, line)) 
    {
        totalLines++;
    }

    file.clear();
    file.seekg(0, ios::beg);

    int linesToPrint;
    do 
    {
        cout << "How many lines do you want to see :";
        cin >> linesToPrint;

        for (int i = 0; i < linesToPrint && i < totalLines; ++i) {
            if (!getline(file, line)) {
                return;
            }
            cout << line << endl;
        }
    } while (linesToPrint != 0 && !file.eof());

    file.close();
}

int main() {
    printLines("input1.txt");
    return 0;
}