#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    const char Text[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    const string morseCode [26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",  "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.-", "--.." };
    string textToChange = "";
    string newText = "";
    
    cout << "Input morse Code => ";
    getline(cin, textToChange);
    cout << "" << endl; 

    for (int i = 0; i < textToChange.size(); i++) { 
        for (int j = 0; j < 37; j++) {
            if (textToChange[i] == Text [j] ) { 
                newText += morseCode [j] ;  
                newText += " "; 
                break; 
            } 
        } 
    }
    cout << "Translate completed!!!" << endl << newText << "\n\n";
}