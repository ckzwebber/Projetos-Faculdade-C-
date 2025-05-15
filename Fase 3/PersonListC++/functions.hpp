#include "struct.hpp"
#include <iostream>

using namespace std;

void addPerson(vector<Person>& personList) {

    if(personList.size() >= 10) {
        cout << "\nThe List is full, you can't add more people.\n";
        return;
    }
    
    Person newPerson;

    cout << "\nThe name of the new person: \n";
    getline(cin, newPerson.name);

    cout << "The age of the new person: \n";
    cin >> newPerson.age;

    cout << "The height of the new person: \n";
    cin >> newPerson.height;

    cout << "The weight of the new person: \n";
    cin >> newPerson.weight;

    newPerson.imc.imc = newPerson.weight / (newPerson.height * newPerson.height);

    cin.ignore();
    personList.push_back(newPerson);
    cout << "\n\nThe new person added: \n";
    cout << "Name: " << newPerson.name << "\n";
    cout << "Age: " << newPerson.age << "\n";
    cout << "Height: " << newPerson.height << "\n";
    cout << "Weight: " << newPerson.weight << "\n";
    cout << "IMC: " << newPerson.imc.imc << "\n";
    cout << "Added sucefully\n\n";

}

void editPerson(vector<Person>& personList) {
    int i = 0;

    cout << "\nThe id for edit person: \n";
    cin >> i;
    
    if(i >= 0 && i < static_cast<int>(personList.size()))
    {
        cin.ignore();
        cout << "New name: ";
        getline(cin, personList[i].name);

        cout << "New age: ";
        cin >> personList[i].age;

        cout << "New height: ";
        cin >> personList[i].height;

        cout << "New weight: ";
        cin >> personList[i].weight;
        cin.ignore();

        personList[i].imc.imc = personList[i].weight / (personList[i].height * personList[i].height);

        cout << "\n\nThe person " << i << " edited: \n";
        cout << "Name: " << personList[i].name << "\n";
        cout << "Age: " << personList[i].age << "\n";
        cout << "Height: " << personList[i].height << "\n";
        cout << "Weight: " << personList[i].weight << "\n";
        cout << "IMC: " << personList[i].imc.imc << "\n";
        cout << "Edited sucefully\n\n";
    }
    else 
    {
        cout << "\nInvalid id";
    }
}

void deletePerson(vector<Person>& personList) {
    int i = 0;

    cout << "\nThe id for delete person: \n";
    cin >> i;

    if(i >= 0 && i < static_cast<int>(personList.size()))
    {
        personList.erase(personList.begin() + i);
        cout << "\n\nThe person " << i << " deleted. \n\n";
    }
    else 
    {
        cout << "\nInvalid id.\n";
    }
}

void showPerson(vector<Person>& personList) {
    if (personList.empty()) {
        cout << "\nThe list is empty.\n";
        return;
    }

    cout << "\nList of people: \n";
    
    for (size_t i = 0; i < personList.size(); ++i) {
        cout << "\n------------------------\n";
        cout << "Person " << i << ": " << personList[i].name << "\n";
        cout << "Age: " << personList[i].age << "\n";
        cout << "Height: " << personList[i].height << "\n";
        cout << "Weight: " << personList[i].weight << "\n";
        cout << "IMC: " << personList[i].imc.imc << "\n";
        cout << "------------------------\n";
    }
}