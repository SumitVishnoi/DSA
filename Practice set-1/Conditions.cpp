#include<iostream>
using namespace std;

int main() {
    // Q21

    // char ch;
    // cout<<"Enter a character: "<<endl;
    // cin>>ch;

    // if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    //     cout<<"Character is vowel"<<endl;
    // }
    // else {
    //     cout<<"Character is consonant"<<endl;
    // }
    // ------------------------------------------------

    // Q22

    // char ch;
    // cout<<"Enter a character: "<<endl;
    // cin>>ch;

    // if(ch >= 'A' && ch <= 'Z'){
    //     cout<<"uppercase"<<endl;
    // }
    // else if(ch >= 'a' && ch <= 'z') {
    //     cout<<"lowercase"<<endl;
    // }
    // else {
    //     cout<<"Not character"<<endl;
    // }
    // ------------------------------------------------

    // Q23
    // char ch;
    // cout<<"Enter a character: "<<endl;
    // cin>>ch;

    // if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
    //     cout<<"Alphabet"<<endl;
    // }
    // else if(ch >= '0' && ch <= '9') {
    //     cout<<"Digit"<<endl;
    // }
    // else {
    //     cout<<"Special symbol"<<endl;
    // }
    // ---------------------------------------------------

    // Q24

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;

    // if(n%3 == 0 && n%7 == 0) {
    //     cout<<"Number is multiple of 3 and 7";
    // }
    // else {
    //     cout<<"Number is not multiple of 3 and 7";
    // }
    // -------------------------------------------------------

    // Q25

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    if(n<33) {
        cout<<"Fail"<<endl;
    }
    else if(n<55) {
        cout<<"Grade: C"<<endl;
    }
    else if(n<75) {
        cout<<"Grade: B"<<endl;
    }
    else if(n<90) {
        cout<<"Grade: A"<<endl;
    }
    else {
        cout<<"Grade: A+"<<endl;
    }
}