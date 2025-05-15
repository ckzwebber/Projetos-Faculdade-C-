#include "struct.hpp"
#include "functions.hpp"
#include <iostream>

using namespace std;

int main(void) {

    vector<Person>personList;
    int option;

    do {
        cout << "\n";
        cout << "1 - Add Person \n";
        cout << "2 - Edit \n";
        cout << "3 - Delete \n";
        cout << "4 - Show \n";
        cout << "0 - Quit \n";
        cout << "Select a option: ";
        cin >> option;
        cin.ignore();

        switch (option)
        {
        case 1:
            addPerson(personList);
            break;

        case 2:
            editPerson(personList);
            break;

        case 3:
            deletePerson(personList);
            break;

        case 4:
            showPerson(personList);
            break;
        
        default:
            cout << "Quiting...";
            break;
        }

    } while (option != 0);

    return 0;
}