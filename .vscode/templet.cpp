#include<iostream>
#include<string>

using namespace std;

template <typename T>
void change(T& a, T& b) {
    T temp;
    temp = a;
    a=b;
    b=temp;
}

template<>
void change<int>(int& a, int& b){
    cout<<"change to int\n";
    int temp;
    temp = a;
    a=b;
    b=temp;
}

int main() {
    int a=3;
    int b=5;
    change(a,b);
    cout << a<< ":"<<b;
    return 0;
}