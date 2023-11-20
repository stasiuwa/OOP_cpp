//
// Created by milit on 17.10.2023.
//
//
// Created by student on 16.10.2023.
//
#include <iostream>

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/bind.hpp>

#include "lab6/Person.h"

using namespace std;
using namespace boost::multi_index;

typedef multi_index_container<Person, indexed_by<
            hashed_non_unique<member<Person, string, &Person::name>>,
            hashed_non_unique<member<Person, int, &Person::age>>
        >> person_multi;

typedef person_multi::nth_index<0>::type name_type;
typedef person_multi::nth_index<1>::type age_type;

typedef multi_index_container<Person, indexed_by<
            ordered_non_unique<member<Person, string, &Person::name>>,
            ordered_non_unique<member<Person, int, &Person::age>>,
            random_access<>
        >> person_multi_2;

typedef person_multi_2::nth_index<0>::type name_type2;
typedef person_multi_2::nth_index<1>::type age_type2;

void UlaToUrszula(Person& x){ x.name = "Urszula"; }
void AlaToAlicja(Person& x){ if(x.name=="Ala") x.name = "Alicja"; }

int main(){

    person_multi persons;
    persons.insert({"Ala", 40});
    persons.insert({"Piotr", 10});
    persons.insert({"Ola", 18});
    persons.insert({"Ala", 46});
    persons.insert({"Ula", 46});

    cout<<"Liczba osob o imieniu ALA: "<<persons.count("Ala")<<endl;
    cout<<"Liczba osob o imieniu Ala: "<<persons.get<0>().count("Ala")<<endl;

    age_type &age_index = persons.get<1>();
    cout<<"Liczba osob z wiekiem 18lat: "<<age_index.count(18)<<endl;

    //listing 6.3
    // for(name_type::iterator it2=persons.get<0>().begin(); it2!=persons.get<0>().end(); it2++) it2->show();

    //listing 6.4
    for(age_type ::iterator it=persons.get<1>().begin(); it!=persons.get<1>().end(); it++) it->show();

    auto &age_index1 = persons.get<1>();
    auto it2 = age_index1.find(46);
    cout << "Znaleziona osobam, ktora ma 46 lat: " << it2->name << endl;

    auto &name_index1 = persons.get<0>();
    auto it1 = name_index1.find("Ula");
    name_index1.modify(it1, boost::bind(UlaToUrszula,placeholders::_1));

    cout<<"Przed modyfikacja: "<<endl;
    std::vector<name_type::iterator> elements;
    for(name_type::iterator it=persons.get<0>().begin(); it!=persons.get<0>().end(); it++){
        it->show();
        elements.push_back(it);
    }
    for (int i=0; i<elements.size(); i++) {
        name_index1.modify(elements[i], boost::bind(AlaToAlicja,_1));
//        name_index1.modify(elements[i], [](auto && PH1) { return AlaToAlicja(std::forward<decltype(PH1)>(PH1)); });
    }
    cout<<"Po modyfikacji: "<<endl;
    for (name_type::iterator it=persons.get<0>().begin(); it!=persons.get<0>().end(); it++) it->show();

//    --------------------------------------------------------------
    person_multi_2 persons2;

    return 0;
}
