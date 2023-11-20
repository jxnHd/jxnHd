#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void wordLengthCal(ifstream& fileIn) {
    string word;
    int totalCharacters,totalWords;

    while (fileIn >> word) 
    {
        for (char& c : word) {
            if (isalpha(c)) 
            {  
                totalCharacters++;
            }
        }
        totalWords++;
    }
    //cout<<totalCharacters<<totalWords<<endl;

    double averageLength = static_cast<double>(totalCharacters) / totalWords;
    cout << averageLength << endl;
}

int main() {
    ifstream file("input2.txt");

    wordLengthCal(file);
    file.close();

    return 0;
}