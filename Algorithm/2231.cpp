#include <iostream>
#include <string.h>

using namespace std;

//i가 들어오면 해당 수의 분해합을 구한다.
int decompose(int k) {
    int sum=k;

    while(k>0) {
        sum+=k%10;
        k/=10;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;

    //i를 차례로 증가시켜 가장 작은 생성자를 구한다.
    for(int i=0;i<n;i++)  {
        int ans=decompose(i);

        if(n==ans) {    //위의 함수에서 구한 분해합과 n이 같으면 출력
            cout<<i;
            return 0;
        }
    }

    cout<<'0';         //없으면 0 출력

    return 0;
}