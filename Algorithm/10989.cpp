#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int inputNumber;
    cin>>inputNumber;
    int value;
    int max=0;
    int count[10001]={0,};

    for(int i=0;i<inputNumber;i++) {
        cin>>value;
        count[value]++;
        if(value>max) {
            max=value;
        }
    }

    for(int i=0;i<max+1;i++) {
        while(count[i]>0) {
            cout<<i<<"\n";
            count[i]--;
        }
    }

}