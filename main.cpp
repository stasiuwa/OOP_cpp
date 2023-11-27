
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>

using namespace std;

int main() {

    ifstream fileIf;
    fileIf.open("code.txt");
    string line;
//    while (getline(fileIf,line)) cout<<line<<endl;

    while(!fileIf.eof()){
        char currentChar = (char)fileIf.get();
        if (currentChar != '/'){
            int c2 = fileIf.peek();
            if ((char)c2 != '/'){

            }
        }
//        cout<<"c1: "<<c1<<"  c2: "<<c2<<"  linia: "<<line<<endl;

    }
    fileIf.close();

//    int a = 223;
//    float b = 21.365;
//    cout << "dec: "<<dec<<a<<endl;
//
//    cout<<"hex bez showbase: " <<hex<<a<<endl;
//    cout<<"hex z showbase: " <<showbase<<a<<endl;
//    cout<<"oct showbase: " <<oct<<a<<endl;
//    cout<<"oct z showbase: " <<noshowbase<<a<<endl;
//
//    cout<<"dec z showpos" <<dec<<showpos<<a<<endl;
//
//    cout<<"scientific: " <<scientific<<b<<endl;
//    cout<<"setw z ritght: " <<setw(20)<<a<<endl;
//    cout<<"setw z left i setfill: " <<setw(20)<<left<<setfill('*')<<a<<endl;
//    cout <<"setprecision 3: "<<resetiosflags(ios::scientific)<<setprecision(3)<<b<<endl;

//    string l1,l2,l3="Ala Nowak";
//    int num;
//    cout<<"Konwersja: "<<endl;
//    istringstream isstream("123");
//    isstream >> num;
//    cout<<num<<endl;
//    ostringstream osstream;
//    osstream << 123;
//    l1=osstream.str();
//    cout << l1<< endl;
//    ostringstream osstream1;
//    osstream1<< "Laboratorium " << 9 << ", zostalo jeszcze "<<6<<endl;
//    cout << "Formatowanie: "<<osstream1.str();
//    string stringEx;
//    int numberIntEx;
//    float numberFloatEx;
//    istringstream isstream1("Ala 10 3.45");
//    isstream1 >> stringEx >> numberIntEx >> numberFloatEx;
//    if(isstream1.fail()) {
//        cout << "Parsowanie nie udalo sie" << endl;
//        } else {
//        cout<< "Parsowanie udalo sie:" << endl;
//        cout<<"Napis: "<< stringEx << endl;
//        cout<<"Liczba int: "<<numberIntEx<< endl;
//        cout<<"Liczba float: "<<numberFloatEx <<endl;
//    }
//    istringstream ss(l3);
//    getline(ss, l1, ' ');
//    getline(ss, l2, ' ');
//    cout<<l1<<" "<<l2<<endl;

//    ofstream  fileOf;
//    fileOf.open("Plik.txt");
//    if(fileOf.is_open()){
//        cout<<"Plik otworzyl sie poprawnie"<<endl;
//        fileOf<<"8 Ala ma kota"<<endl;
//        fileOf<<"a kot ma Ale"<<endl;
//        fileOf<<10<<endl;
//        fileOf<<1.1<<endl;
//        fileOf<<'a'<<endl;
//        fileOf.close();
//    } else {
//        cerr<<"Blad rpzy otwieraniu pliku"<<endl;
//    }

//    ifstream fileIf;
//    fileIf.open("Plik.txt");
//
//    int number;
//    fileIf>>number;
//    string line;
//    fileIf>>line;
//    cout<< number << " " << line <<endl;
//
//    string line1, line2;
//    getline(fileIf,line1);
//    getline(fileIf,line2);
//
//    cout<<line1<<endl<<line2<<endl;
//
//    char c;
//    c=fileIf.get();
//    cout<<c<<endl;
//
//    while(!fileIf.eof()) {
//        getline(fileIf, line1);
//        cout<<line1<<endl;
//    }
//
//    //alternatywna wersja
//    while (getline(fileIf,line1)) cout<<line1<<endl;
//
//    fileIf.close();

    return 0;
}