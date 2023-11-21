//
// Created by milit on 20.11.2023.
//

#ifndef ADV_OOP_C_CONTACTS_H
#define ADV_OOP_C_CONTACTS_H

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/bind/bind.hpp>
#include <iostream>

#include "Contact.h"

using namespace std;
using namespace boost::multi_index;

/** Stworzenie typu contacts_multi przechowującego obiekty klasy Contact i posiadającego interfejsy z indexami odnoszące się do: \n
     * 0 - nr.telefonu  \n
     * 1 - wiek \n
     * 2 - imie \n
     * 3 - nazwisko \n
     * 4 - adres \n
     * W celu łatwiejszego wyszukiwania danych w kontenerze
     */
typedef multi_index_container<Contact, indexed_by<
        hashed_unique<member<Contact, int, &Contact::phone_number>>,
        hashed_non_unique<member<Contact, int, &Contact::age>>,
        hashed_non_unique<member<Contact, string, &Contact::address>>
//        hashed_non_unique<member<Contact, string, &Contact::name>>,
//        hashed_non_unique<member<Contact, string, &Contact::surname>>
>> contacts_multi;

typedef contacts_multi::nth_index<0>::type phone_type;
typedef contacts_multi::nth_index<1>::type age_type;
//typedef contacts_multi::nth_index<2>::type name_type;
//typedef contacts_multi::nth_index<3>::type surname_type;
typedef contacts_multi::nth_index<2>::type address_type;


class Contacts {
private:
    contacts_multi phone_book;
public:
    Contacts();
    void addContact(Contact contact);
    void deleteContact(int phone_number);

    void getAllFromStreet(string street);
    void getFromAgeRange(int range_begin, int range_end);
    void getFromPhoneNumber(int phone_number);
    static void changeStreet(Contact& c);
    void modifyStreet(string old_street, string new_street);
    void countAdults();
    void countUniqueSurnames();
    void showBook();


};


#endif //ADV_OOP_C_CONTACTS_H
