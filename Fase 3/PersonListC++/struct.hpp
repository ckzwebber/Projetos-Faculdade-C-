#ifndef STRUCT_HPP
#define STRUCT_HPP

#include <string>
#include <vector>

using namespace std;

typedef struct {
    float imc;
} IMC;

typedef struct {
    string name;
    int age;
    float height;
    float weight;
    IMC imc;
} Person;

void addPerson(vector<Person>& personList);
void editPerson(vector<Person>& personList);
void deletePerson(vector<Person>& personList);
void showPerson(vector<Person>& personList);

#endif