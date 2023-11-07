//
// Created by milit on 17.10.2023.
//
//
// Created by student on 16.10.2023.
//
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

#include "lab5/Dictionary.h"

using namespace std;

//5.1
pair<int,int> duplicate(vector<int> vec){
    set <int> s;
    pair<int,int> temp;
    int sum=0;
    //for(int i=0; i<vec.size(); i++){
    for(int i : vec){
        if(s.count(i)==0) s.insert(i);
        else temp.second = i;
    }
    for (int i : s) sum+=i;
    temp.first = sum;
    return temp;
}
//5.2
template <typename T>
void ksorxd(set<T> &s1, set<T> &s2){
    set <int> sUnion, sIntersec, sXOR;
    //sumuje zbiory s1 i s2 do jednego kontenera sUnion, potem wyznacza czesc wspolna zbiorow s1 i s2 do sIntersec
    //koncowo odejmujac czesc wspolna sIntersec od sumy zbiorow sUnion przekazujac ja do koncowego zbioru sXOR
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sUnion,sUnion.begin()));
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sIntersec, sIntersec.begin()));
    set_difference(sUnion.begin(), sUnion.end(), sIntersec.begin(), sIntersec.end(), insert_iterator(sXOR, sXOR.begin()));

    cout<<"XOR: ";
    for (T i: sXOR) cout<<i<<", ";
    cout<<endl;
}
//5.3
char searchAddedChar(string str1, string str2){
    map<char,int> temp1;
    map<char,int> temp2;
    for(char c : str1) {
        temp1[c]++;
    }
    for(char c : str2) {
        temp2[c]++;
    }
    for(pair<char,int> m : temp2){
        //if(temp1[m.first] != temp2[m.first]) return m.first;
        if(temp1[m.first] != m.second) return m.first;
    }
//    for (char c : str2) { // z chat gpt
//        //przeglada str2 szukajac znaku ktory nie wystapil w str1(dodanego)
//        //odejmujac ilosc wystapien kazdego znaku za kazde znalezienie
//        if(temp1[c]==0) return c;
//        temp1[c]--;
//    }
    return '\0';
}
int main(){

//5.1
//    vector<int> vector1 = {3,1,2,6,7,2};
//    pair<int,int> temp1 = duplicate(vector1);
//    cout<<"Suma elementow unikatowych: "<<temp1.first<<" duplikat: "<<temp1.second<<endl;


//5.2
//    set<int> s1={3,2,1,5,7}, s2={2,3,1,9,8};
//    ksorxd(s1,s2);

//5.3
//    string test1 = "siwy dym czarne chmury";
//    string test2 = "dmy yswicza rnechu>m yr";
//    char addedChar = searchAddedChar(test1, test2);
//    (addedChar != '\0') ? cout<<"Dodany znak to: ("<<addedChar<<")"<<endl : cout<<"nie dodano znaku"<<endl;

//5.4
//    Dictionary slownik;
//    slownik.addWord("jd","jest dobrze");
//    slownik.addWord("jd","jest doborowo");
//    slownik.addWord("papiezowa","21:37");
//    slownik.addWord("bej","menel");
//    slownik.addWord("ct","co tam");
//    slownik.addWord("cr","co robisz");
//    slownik.addWord("spk","spoko");
//    slownik.showWords();
//    slownik.deleteWord("papiezowa");
//    slownik.showTranslation("ct");
//    slownik.showSorted();

    return 0;
}