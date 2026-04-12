#include<iostream>
#include<string>
#include <algorithm>
#include<vector>
using namespace std;


int main() {
    string s = " hello world ";//14
    string temp;
    string ans;

    int i = s.size()-1;
    while(i >= 0) {
        while(i >= 0 && s[i] == ' ') {
        i--;
    }
     while(i >= 0 && s[i] != ' ') {
        cout<<s[i]<<" "<<endl;
        temp += s[i];
        i--;
    }
    reverse(temp.begin(), temp.end());
    ans += temp;
    ans += ' ';
    temp.clear();
    }
    cout<<ans<<endl;
}