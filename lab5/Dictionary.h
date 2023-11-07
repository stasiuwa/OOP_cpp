//
// Created by milit on 07.11.2023.
//

#ifndef UNTITLED_DICTIONARY_H
#define UNTITLED_DICTIONARY_H

#include <map>
#include <string>
using namespace std;
class Dictionary {
private:
    map <string,string> words;
public:
    Dictionary();
    void addWord(string word, string translation);
    void deleteWord(string word);
    void showWords();
    void showTranslation(string word);
    static bool sortBySecDesc(pair<string,string> &a, pair<string,string> &b);
    void showSorted();
};


#endif //UNTITLED_DICTIONARY_H
