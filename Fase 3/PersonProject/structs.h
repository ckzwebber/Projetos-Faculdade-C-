#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct
{
    char name[50];
    bool areToSell;
} Vehicle;

typedef struct
{
    char name[50];
    char race[50];
    int age;
} Pet;

typedef struct
{
    char name[50];
} Job;

typedef struct
{
    char name[50];
    int age;
    char city[50];
    float height;
    Job work;
    Vehicle vehicle;
    Pet pet;
} Person;

extern Person listOfPerson[MAXPERSON];
extern int personOnSystem;

void addPerson();
void showPerson();
void editPerson();
void deletePerson();

#endif