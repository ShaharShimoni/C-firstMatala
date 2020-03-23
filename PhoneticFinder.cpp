//
// Created by shahar on 22/03/2020.
//

#include <string>
#include <iostream>
#include "PhoneticFinder.hpp"

using namespace std;

    bool phonetic::similar(char x, char y) {

        if (x == y)
            return true;
        if(x==char(y-32)||x==char(y+32))
            return true;
        if ((x == 'v') && ((y == 'w')||(y == 'W') || (y == 'V')))
            return true;
        if (x == 'V' && ((y == 'v')||(y == 'w')||(y == 'W')))
            return true;
        if ((x == 'w') && ((y == 'v') ||(y == 'V')|| (y == 'W')))
            return true;
        if ((x == 'W') && ((y == 'w')||(y == 'v')||(y == 'V')))
            return true;


        if ((x == 'b') && ((y == 'f')||(y == 'F') || (y == 'p')||(y == 'P') || (y == 'B')))
            return true;
        if ((x == 'B') && ((y == 'b')||(y == 'f')||(y == 'F')||(y == 'p')||(y == 'P')) )
            return true;
        if ((x == 'f') && ((y == 'b')|| (y == 'B') || (y == 'p') ||(y == 'P')|| (y == 'F')))
            return true;
        if ((x == 'F') &&( (y == 'f')||(y == 'b')|| (y == 'B') || (y == 'p')||(y == 'P')))
            return true;
        if ((x == 'p') && ((y == 'f') ||(y == 'F')|| (y == 'b')|| (y == 'B') || (y == 'P')))
            return true;
        if ((x == 'P') && ((y == 'p')||(y == 'f')||(y == 'F')||(y == 'b')|| (y == 'B') ))
            return true;

        if ((x == 'j') && ((y == 'g') ||(y == 'G')|| (y == 'J')))
            return true;
        if ((x == 'J') && ((y == 'j')||(y == 'g')||(y == 'G')))
            return true;
        if ((x == 'g') && ((y == 'j')|| (y == 'J') || (y == 'G')))
            return true;
        if ((x == 'G') && ((y == 'g')||(y == 'j')|| (y == 'J') ))
            return true;

        if ((x == 'c') && ((y == 'k') ||(y == 'K') || (y == 'q')||(y == 'Q') || (y == 'C')))
            return true;
        if ((x == 'C') && ((y == 'c')||(y == 'k') ||(y == 'K')|| (y == 'q')||(y == 'Q')))
            return true;
        if ((x == 'k') && ((y == 'c') ||(y == 'C')|| (y == 'q')||(y == 'Q') || (y == 'K')))
            return true;
        if ((x == 'K') && ((y == 'k')||(y == 'c')||(y == 'C') || (y == 'q')||(y == 'Q')))
            return true;
        if ((x == 'q') && ((y == 'c')||(y == 'C') || (y == 'k')||(y == 'K') || (y == 'Q')))
            return true;
        if ((x == 'Q') && ((y == 'q')||(y == 'c') ||(y == 'C') || (y == 'k')||(y == 'K')))
            return true;

        if ((x == 's') && ((y == 'z') || (y == 'S')|| (y == 'Z')))
            return true;
        if ((x == 'S') && ((y == 's')||(y == 'z')|| (y == 'Z')))
            return true;
        if ((x == 'z') && ((y == 's') || (y == 'Z')|| (y == 'S')))
            return true;
        if ((x == 'Z') && ((y == 'z')||(y == 's')|| (y == 'S')))
            return true;

        if ((x == 'd') && ((y == 't') || (y == 'D')||(y == 'T')))
            return true;
        if ((x == 'D') && ((y == 'd')||(y == 't')||(y == 'T') ))
            return true;
        if ((x == 't') && ((y == 'd') || (y == 'T')||(y == 'D') ))
            return true;
        if ((x == 'T') && ((y == 't')||(y == 'd')||(y == 'D') ) )
            return true;

        if ((x == 'o') && ((y == 'u') || (y == 'O')||(y == 'U')))
            return true;
        if ((x == 'O') && ((y == 'o')||(y == 'u')||(y == 'U')))
            return true;
        if ((x == 'u') && ((y == 'o') || (y == 'U')||(y == 'O')))
            return true;
        if ((x == 'U') &&( (y == 'u')||(y == 'o')||(y == 'O') ))
            return true;

        if ((x == 'i') && ((y == 'y') ||(y == 'Y')|| (y == 'I')))
            return true;
        if ((x == 'I') && ((y == 'i')||(y == 'y')||(y == 'Y')))
            return true;
        if ((x == 'y') && ((y == 'i') || (y == 'Y')||(y == 'I')))
            return true;
        if ((x == 'Y') && ((y == 'y')||(y == 'i')||(y == 'I')))
            return true;

        return false;
    }


    string phonetic::find(string text, string word) {  //returns the word, similar in text
        if(word==" "){
            throw exception();
        }

        int i = 0;
        int j = 0;
        string answer = "";
        while (i != word.size()) {
            if (similar(text[j], word[i])) {
                answer = answer + text[j];
                j++;
                i++;
                if ((i == word.size() && (text[j] == ' ')) || j == text.size()) {
                    return answer;
                }

                if (j == text.size() && i != word.size()) {
                    throw exception();
                }
                if (i == word.size() && (j != ' ' || j != text.size())) {
                    throw exception();
                }


            } else {
                i = 0;
                answer = "";
                while (text[j] != ' ' && j != text.size()) {
                    j++;
                }
                j++;
            }

        }
    }

//    int main(){
//        cout << "hello";
//        return 0;
//    }


