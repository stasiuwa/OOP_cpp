//
// Created by milit on 17.10.2023.
//
//
// Created by student on 16.10.2023.
//

#include <iostream>
#include "lab6/Contacts.h"
#include "lab6/Contact.h"

using namespace std;

int main(){
    Contact user1 = {"janek", "jankowski", "Laczna", 42, 997 };
    Contacts book;
    book.addContact(user1);
    book.addContact({"Kamil", "Zdun", "Wesola", 19, 510325123});
    book.addContact({"Krzysztof", "Zdun", "Wesola", 16, 517325123});
    book.showBook();
    book.getAllFromStreet("Wesola");
    book.modifyStreet("Wesola","Sloneczna");
    book.showBook();
    book.countAdults();
    book.countUniqueSurnames();
    book.getFromPhoneNumber(997);
    book.deleteContact(997);
    book.showBook();
    return 0;
}