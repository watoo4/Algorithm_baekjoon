#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    if(a.second<b.second) {
        return true;
    }
    else if(a.second==b.second) {
        if(a.first<=b.first) {
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

int main() {
    vector<pair<int, int>> point;
    int points;
    cin>>points;

    for(int i=0;i<points;i++) {
        int x,y;
        cin>>x>>y;
        point.push_back(make_pair(x,y));
    }

    sort(point.begin(),point.end(),compare);

    for(int i=0;i<points;i++) {
        cout<<point[i].first<<" "<<point[i].second<<"\n";
    }

}