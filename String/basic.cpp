#include<iostream>
using namespace std;

int main() {
    // char name[10];

    // cout<<"Enter your name"<<endl;
    // cin>>name;
    // name[2] = '\0';

    // cout<<"Your name is "<<name<<endl;

//---------------- length of string -----------------//
    char name[10];

    cout<<"Enter your name"<<endl;
    cin>>name;

    int count = 0;
    int i = 0;
    while(name[i] != '\0') {
        count++;
        i++;
    }

    cout<<"length of string "<<count<<endl;

}