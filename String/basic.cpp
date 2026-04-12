#include<iostream>
using namespace std;

int main() {
    // char name[10];

    // cout<<"Enter your name"<<endl;
    // cin>>name;
    // name[2] = '\0';

    // cout<<"Your name is "<<name<<endl;

//---------------- length of string -----------------//
//     char name[10];

//     cout<<"Enter your name"<<endl;
//     cin>>name;

//     int count = 0;
//     int i = 0;
//     while(name[i] != '\0') {
//         count++;
//         i++;
//     }

//     cout<<"length of string "<<count<<endl;

//----------------------------------------------------//

// string s;
// getline(cin, s);
// cout<<s<<endl;
// cout<<s.size()<<endl;

// string s1 = "Hey! How are you ?";
// string s2 = "I am good, what about you ?";
// string s3 = s1 + s2;
// cout<<s3<<endl;

//----------------------Palindrome------------------//
string s = "dheer";
int st = 0;
int e = s.size()-1;

while(st < e) {
    if(s[st] != s[e]) {
        cout<<"Not"<<endl;
        return 0;
    }
    st++;
    e--;
}
cout<<"yes"<<endl;

}