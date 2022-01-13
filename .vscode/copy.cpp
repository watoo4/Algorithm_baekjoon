#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main() {
    int *arr=new int[10];
    arr[0]=3;
    unique_ptr<int> p1(arr);
    cout<<p1.use_count()<<'\n';
    shared_ptr<int> p2(p1);
    cout<<p1.use_count()<<'\n';
    p1.reset();
    p2.reset();
    return 0;
}