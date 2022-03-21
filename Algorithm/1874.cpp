#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    stack<int> sequence;
    vector<char> result;
    int number;
    int count=1;

    cin>>number;

    for(int i=0;i<number;i++) {
        int input;
        cin>>input;

        while(count<=input) {
            sequence.push(count);
            count+=1;
            result.push_back('+');
        }

        if(sequence.top()== input) {
            sequence.pop();
            result.push_back('-');
        }
        else {
            cout<<"NO";
            return 0;
        }
    }

    for(int i=0;i<result.size();i++) {
        cout<<result[i]<<'\n';
    }
    
    return 0;
}