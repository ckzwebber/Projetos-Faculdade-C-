#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct Address {
    string city;
    string neighborhood;
    int houseNumber;
};

typedef struct Person {
    string name;
    int age;
    float height;
    Address address;
};

vector<Person>nameList;

void addData(){
    if(nameList.size() >= 10){
        cout<<"The list is full."<<endl;
    }

    Person newPerson;
    cout<<"About the person, response:"<<endl;
    cout<<"Name: "; cin.ignore(); 
    getline(cin, newPerson.name);

    cout<<"Age: "; cin>>newPerson.age;
    cout<<"Height: "; cin>>newPerson.height;
    cout<<"City: "; cin.ignore();
    getline(cin, newPerson.address.city);

    cout<<"Neighborhood: ";
    getline(cin, newPerson.address.neighborhood);
    cout<<"Number: "; cin>>newPerson.address.houseNumber;
    nameList.push_back(newPerson);
    cout<<"Data saved.\n"<<endl;
}

void editData(){
    int index;
    cout<<"Write the index of the person to be edited: "; cin>>index;

    if(index < 0 || index >= nameList.size() ){
        cout<<"Index inavailable."<<endl;
        return;
    }

    cout<<"Write the new name: "; cin.ignore();
    getline(cin, nameList[index].name);

    cout<<"The new age: "; cin>>nameList[index].age;
    cout<<"The new height: "; cin>>nameList[index].height;
    cout<<"The new city: "; cin.ignore();

    getline(cin, nameList[index].address.city);
    cout<<"The new neighborhood: "; cin.ignore();
    getline(cin, nameList[index].address.neighborhood);
    cout<<"The new house number: "; cin>>nameList[index].address.houseNumber;

    cout<<"Data edited succesfull.\n"<<endl;
}

void deleteData(){
    int index;
    cout<<"Write the index of the person to be deleted: "; cin>>index;

    if(index < 0 || index >= nameList.size() ){
        cout<<"Index unavailable."<<endl;
        return;
    }

    nameList.erase( nameList.begin() + index); 
    cout<<"Data deleted succesfull."<<endl;
}

void showData(){
    if( nameList.empty() ){
        cout<<"The list is empty."<<endl;
        return;
    }

    cout<<"\n--Name List--"<<endl;
    for(size_t i=0; i<nameList.size(); ++i){  
        const Person& p = nameList[i];

        cout<<i<<". name:"<<p.name<<", age: "<<p.age<<", height: "<<p.height
        <<", address: "<<p.address.city<<", "<<p.address.neighborhood<<", "
        <<p.address.houseNumber<<endl;
    }
}

int main(){
    int opcao;

    do{
        cout<<"\n--Main Menu--"<<endl;
        cout<<"1.Add data"<<endl;
        cout<<"2.Edit data"<<endl;
        cout<<"3.Delete data"<<endl;
        cout<<"4.Show data"<<endl;
        cout<<"5.Close"<<endl;
        cout<<"Choose an option"<<endl;
        cin>>opcao;

        switch(opcao) {
            case 1:
                addData();
                break;
            case 2:
                editData();
                break;
            case 3: 
                deleteData();
                break;
            case 4:
                showData();
                break;
            case 5:
                cout<<"--Main Menu closed--"<<endl;
                break;
            default:
                cout<<"The option is unavailable, try again."<<endl;
        }

    } while(opcao != 5);

    return 0;
}