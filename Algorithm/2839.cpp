#include <iostream>

#define threebonzi 3
#define fivebonzi 5

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int threeNumber = 1;
    int fiveNumber = 0;
    int input;

    cin>>input;
    fiveNumber = input/fivebonzi;
    while(true) {
        if(fiveNumber<0) {
            cout<<"-1";
            return 0;
        }

        if((input-(fivebonzi*fiveNumber))%3==0) {
            threeNumber=(input-(fivebonzi*fiveNumber))/3;
            break;
        }
        fiveNumber--;
    }
    cout<<fiveNumber+threeNumber;
    return 0;
}