#include<iostream>
#include<string>
#include<vector>

using namespace std;
vector<string> NAME;
vector<string> NUMBER;

//add new contack details in the agenda
void newContact(){
    string name;
    string number;

    cout<<"Enter the person name: ";
    cin>>name;
    cout<<"Enter contact number of person: ";
    cin>>number;
    cout<<"The ID for contact is: "<<name.size()<<endl;
    NAME.push_back(name);
    NUMBER.push_back(number);
}

//searching the particular contact from agenda by their respective ID
void searchID(){
    int value;
    cout<<"Enter the ID of contact: ";
    cin>>value;
    if(value>=NAME.size()){
        cout<<"Invalid Entry: "<<endl;
        return;
    }
    cout<<"Information corresponding to contact "<<value<<endl;
    cout<<"Name: "<<NAME[value]<<endl;
    cout<<"Phone Number: "<<NUMBER[value]<<endl;
}

//searching the contact by name
void searchName(){
    bool found=false;
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    for(int i=0;i<NAME.size();i++){
        if(NAME[i]==name){
            cout<<"Name: "<<NAME[i]<<endl;
            cout<<"Phone: "<<NUMBER[i]<<endl;
            found=true;
        }
    }
    if(found!=true){
        cout<<"Invalid Entry"<<endl;
    }
}

//MAIN FUNCTION
int main()
{
    int value;

    while(true){
        //displaying the operations user can choose to perform
        cout<<" : WELCOME TO THE AGENDA MANAGER :"<<endl<<endl;
        cout<<"Select the number for execution: "<<endl;
        cout<<" [1] New Contact"<<endl;
        cout<<" [2] Search by ID"<<endl;
        cout<<" [3] Search by Name "<<endl;
        cout<<" [4] Exit"<<endl;
        
        //takingk operation input from the user
        cout<<"Pick your choice: ";
        cin>>value;

        //calling the function corresponding to the given input
        switch(value){
            case 1:
            newContact();
            break;
            case 2:
            searchID();
            break;
            case 3:
            searchName();
            break;
            case 4:
            break;

            default:
            cout<<"Invalid Operation ";
            break;
        }
    }
    return 0;
}