#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> word;
bool compare(const string& a,const string& b) {
    if(a.length()<b.length()) {
        return true;
    }
    else if(a.length()==b.length()) {
        if(a<b) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int main(void) {
    int num; 
    cin>>num;
    for(int i=0;i<num;i++) {
        string a; cin>>a;
        word.push_back(a);
    }
    sort(word.begin(),word.end(),compare);
    for(int i=0;i<num;i++) {
        if(word[i]!=word[i+1]) {
            cout<<word[i]<<'\n';
        }
    }

    return 0;
}