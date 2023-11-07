//
// Created by milit on 17.10.2023.
//
//
// Created by student on 16.10.2023.
//
#include <iostream>
#include <list>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void show(T &con)
{
    for(typename T::iterator it=con.begin( ); it!=con.end( ); it++)
        cout << *it << " ";
    cout << endl;
}
bool sortBySum(int n1, int n2){
    int sum1 = 0, sum2 = 0, m;
    while(n1 != 0)
    {
        m = n1 % 10;
        sum1 += m;
        n1 = n1 / 10;
    }
    while (n2 != 0)
    {
        m = n2 % 10;
        sum2 += m;
        n2 = n2 / 10;
    }
    return sum1 < sum2;
}
bool sortByDigits(int n1, int n2){
    int count1 = 0, count2 = 0;
    while (n1 != 0)
    {
        n1 = n1 / 10;
        count1++;
    }
    while (n2 != 0)
    {
        n2 = n2 / 10;
        count2++;
    }
    return count1 < count2;
}
void print(int n) { cout<<n<<" "; }
int main(){
//4.2
//    random_device rand;
//    mt19937 gen(rand());
//    uniform_int_distribution<> dis(1, 100);
//    int random_number = dis(gen);
//    cout << random_number << endl;
//
//    list<int> l;
//    uniform_int_distribution<> dis1(-100, 100);
//    int rnd;
//    for (int i = 0; i < random_number; i++)
//    {
//        rnd = dis1(gen);
//        if(rnd > 0)
//        {
//            l.push_front(rnd);
//        }
//        else
//        {
//            l.push_back(rnd);
//        }
//    }
//    show(l);

//4.4
//    vector<int> vector1 = { 2137, 420, 69, 1337, 666, 997};
//    vector<int> vector2 = vector1;
//
//    cout<<"sortowanie sumą cyfr" <<endl;
//    sort(vector1.begin(), vector1.end(), sortBySum);
//    for_each(vector2.begin(), vector2.end(), print);
//
//    cout<<"sortowanie liczbą cyfr" <<endl;
//    sort(vector2.begin(), vector2.end(), sortByDigits);
//    for_each(vector2.begin(), vector2.end(), print);

    return 0;
}