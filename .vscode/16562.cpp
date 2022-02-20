#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define SIZE 10001

int root[SIZE];
int friend_money[SIZE];
int num;
vector<int> arr = {-1};

int find(int d) {
    if(root[d]==d)
        return d;

    return root[d] = find(root[d]);
}

void uni(int x, int y) {
    x=find(x);
    y=find(y);

    if(friend_money[x]>friend_money[y]){
        int tmp = y;
        y = x;
        x = tmp;
    }

    root[y]=x;
}
bool search(int i){
    for(int j : arr){
        if(j==find(i)) return false;
    }
    arr.push_back(find(i));
    return true;
}


int main() {
    int member, money; cin>>num>>member>>money;
    int v, w, sum=0;
    for(int i = 1;i<=num;i++) {
        cin>>friend_money[i];
        root[i]=i;
    }
    for(int i =0;i<member;i++) {
        cin>>v>>w;
        uni(v,w);
    }
    for(int i =1;i<=num;i++) {
        if(search(i)) {
            sum+=friend_money[find(i)];
        }
    }
    
    string res;
    res = to_string(sum);
    if(sum>money) res = "Oh no";

    cout<<res;
    
    return 0;
}
