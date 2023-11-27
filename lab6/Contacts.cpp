////
//// Created by milit on 20.11.2023.
////
//
//#include "Contacts.h"
//#include "map"
//
//Contacts::Contacts() {}
//
//void Contacts::addContact(Contact contact) {
//    if(phone_book.get<0>().count(contact.phone_number)==0) phone_book.insert(contact);
//    else cout<<"Istnieje wpis o danym numerze telefonu!"<<contact.phone_number<<endl;
//}
//void Contacts::deleteContact(int phone_number) {
//    phone_book.get<0>().erase(phone_number);
//}
//
//void Contacts::getAllFromStreet(string street) {
//    cout<<"\nOSOBY MIESZKAJACE NA ULICY "<<street<<" :"<<endl;
//    for(contacts_multi::iterator it=phone_book.begin(); it!=phone_book.end(); it++){
//        if(it->address == street) it->show();
//    }
//}
//
//void Contacts::getFromAgeRange(int range_begin, int range_end) {
//    cout<<"\nOSOBY Z PRZEDZIALU < "<<range_begin<<", "<<range_end<<" > "<<endl;
//    for(contacts_multi::iterator it=phone_book.begin(); it!=phone_book.end(); it++){
//        if( it->age >= range_begin && it->age <= range_end) it->show();
//    }
//}
//
//void Contacts::getFromPhoneNumber(int phone_number) {
//    cout<<"\nOSOBA Z NUMEREM TELEFONU "<<phone_number<<endl;
//    phone_book.get<0>().find(phone_number)->show();
//}
//void Contacts::changeStreet(Contact &c) {
//    c.address = "Sloneczna";
//}
//void Contacts::modifyStreet(string old_street, string new_street) {
//    auto &address_index = phone_book.get<2>();
//    vector<address_type::iterator> vec;
//    for (address_type::iterator it = phone_book.get<2>().begin(); it != phone_book.get<2>().end(); it++) {
//        if(it->address == old_street) vec.push_back(it);
//    }
//    for (int i=0; i<vec.size(); i++) {
//        address_index.modify(vec[i], boost::bind(changeStreet,placeholders::_1));
//    }
//}
//
//void Contacts::countAdults() {
//    int count = 0;
//    for (auto it=phone_book.get<1>().begin(); it!=phone_book.get<1>().end(); it++) if(it->age > 18) count++;
//    cout<<"\nILOSC PELNOLETNICH OSOB: "<<count<<endl;
//
//}
//
//void Contacts::countUniqueSurnames() {
//    map<string, int> surnames;
//    for(const auto & it : phone_book){
//        surnames[it.surname]++;
//    }
//    cout<<"Unikalne nazwiska: ";
//    for (pair<string,int> p : surnames) if(p.second==1) cout<<p.first<<", "<<endl;
//}
//
//void Contacts::showBook() {
//    cout<<"\nKSIAZKA TELEFONICZNA BA BACH:"<<endl;
//    for(phone_type::iterator it=phone_book.get<0>().begin(); it!=phone_book.get<0>().end(); it++) it->show();
//}
//
