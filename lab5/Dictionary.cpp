//
// Created by milit on 07.11.2023.
//

#include "Dictionary.h"

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

Dictionary::Dictionary() {}

void Dictionary::addWord(std::string word, std::string translation) {
    if (words.count(word)) {
        cout << "Istnieje juz tlumaczenie dla slowa: ";
        showTranslation(word);
    } else {
        words.insert(pair<string, string>(word, translation));
    }
}

void Dictionary::deleteWord(std::string word) {
    words.erase(word);
}
void Dictionary::showWords() {
    for(pair<string,string> el : words) cout<<" "<<el.first<<" - "<<el.second<<endl;
    cout<<endl;
}
void Dictionary::showTranslation(std::string word) {
    for(pair<string,string> el : words){
        if(el.first == word) cout<<" "<<el.first<<" - "<<el.second<<endl;
    }
    cout<<endl;
}
bool Dictionary::sortBySecDesc(pair<string, string> &a, pair<string, string> &b) {
    return a.second<b.second;
}
void Dictionary::showSorted() {
    vector <pair<string,string>> translations;
    for(pair<string,string> el : words) translations.push_back(el);
    std::sort(translations.rbegin(), translations.rend(), sortBySecDesc);
    for(pair<string,string> pair1 : translations) cout<<" "<<pair1.first<<" - "<<pair1.second<<endl;
    cout<<endl;
}


