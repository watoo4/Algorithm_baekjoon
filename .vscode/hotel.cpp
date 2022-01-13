#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n, H, W, N;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int **hotel;
        hotel = new int *[H];
        cin >> H >> W >> N;
        hotel[i] = new int[W];
        bool flag = true;
        int xx=0,yy=0;
        int count=1;
        for (int j = 1; j <= W&&flag; j++)
        {
            yy++;
            xx=1;
            for (int k = 1; k <= H&&flag; k++)
            {

                if (count == N)
                {
                    if(yy<10){
                        cout << xx<<'0'<<yy<<'\n';
                        flag=false;
                    }
                    else {
                    cout << xx<<yy<<'n';
                    flag=false;
                    }
                }
                count++; 
                xx++;
            }
        }
    }
}