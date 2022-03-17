#include <iostream>

using namespace std;

int input;
int count=0;
int key=666;
string target;

int solve() {
    while(1) {
        target = to_string(key);
        for(int j=0;j<target.length()-2;j++) {
            if(target[j]=='6'&&target[j+1]=='6'&&target[j+2]=='6') {
                count++;
                if(count==input) {
                    return key;
                }
                break;
            }
        }
        key++;
    }
}

int main() {
    cin>>input;
    cout<<solve();
}
