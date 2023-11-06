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

template <typename T>
void ksorxd(set<T> &s1, set<T> &s2){
    set <int> sUnion, sIntersec, sXOR;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sUnion,sUnion.begin()));
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sIntersec, sIntersec.begin()));
    set_difference(sUnion.begin(), sUnion.end(), sIntersec.begin(), sIntersec.end(), insert_iterator(sXOR, sXOR.begin()));

    cout<<"XOR: ";
    for (T i: sXOR) cout<<i<<", ";
    cout<<endl;
}
char stringDiffer(string str1, string str2){ // znaleźć dodany znak
    map<string,string> temp;
    temp.insert(pair<string,string>(str1,str2));
    for(char c : str) {

    }


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
    string test1 = "siwy dym czarne chmury";
    string test2 = "dmy  yswicza rneXchum yr";


    return 0;
}