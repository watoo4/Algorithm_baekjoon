#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> people;
int number;
int score=1;

int main() {
    cin>>number;

    for(int i=0;i<number;i++) {
        int kg,height;
        cin>>kg>>height;
        people.push_back(make_pair(kg,height));
    }

    for(int i=0;i<number;i++) {
        for(int j=0;j<number;j++) {
            if(people[i].first<people[j].first&&people[i].second<people[j].second) {
                score++;
            }
        }
        cout<<score<<" ";
        score=1;
    }
} 

