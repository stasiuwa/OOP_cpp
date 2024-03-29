#include <iostream>
#include <vector>
#include <algorithm>
#include "lab12/CAr.h"

using namespace std;

void printVec(vector<int> num) {
    cout<<endl<<"vector: ";
    for (auto it = num.begin(); it != num.end() ; it++) cout<<*it<<" ";
    cout<<endl;
}
void printVector(vector<CAr> temp) {
    for_each(temp.begin(), temp.end(), [](CAr c){ c.show(); });
}

int main(){
//    12.1
    vector<int> num = {420,69,2137,-1337,1312,7};
    printVec(num);

    for_each(num.begin(), num.end(), [](int el) -> void { cout<<el<<"|"; });
    cout<<endl;

    double sum=0;
    for_each(num.begin(), num.end(), [&sum](int el)->void { sum+=el; });
    cout<<"Srednia arytmetyczna: "<<sum/num.size()<<endl;

    cout<<"Ilosc Parzystych: "<<count_if(num.begin(), num.end(), [](int el) -> bool { return el%2==0; })<<endl;

    num.erase(find_if(num.begin(), num.end(), [](int el)-> bool { return el<0; }));

    vector <int> num2;
    for_each(num.begin(), num.end(), [&num2](int el){
        if(el%2==0) num2.insert(num2.begin(),el);
        else num2.push_back(el);
    });
    swap(num,num2);
    cout<<"Sort parzyste na czele ";
    printVec(num);

    cout<<"Liczby przeciwne: ";
    for_each(num.begin(), num.end(), [](int &el){ el*=(-1); });
    printVec(num);

    int x;
    cout<<"Podaj liczbe: ";
    cin>>x;
    cout<<"Liczb mniejszych od "<<x<<": "<<count_if(num.begin(), num.end(), [&x](int el) -> bool { return el<x; })<<endl;

//    12.2
    vector<CAr> autka = {
            CAr("audi",2001,1.9),
            CAr("mercedes benz",1998,2.2),
            CAr("opel",2007,1.6),
            CAr("saab",2003,2.8)
    };
    printVector(autka);

    cout<<"\tSORTOWANE ROCZNIK"<<endl;
    sort(autka.begin(), autka.end(), [](CAr c1, CAr c2)->bool{ return c1.getProdYear() < c2.getProdYear(); });
    printVector(autka);

    cout<<"\tSORTOWANIE POJEMNOSC"<<endl;
    sort(autka.begin(), autka.end(), [](CAr c1, CAr c2)->bool{ return c1.getEngineCap() > c2.getEngineCap(); });
    printVector(autka);


    return 0;
}