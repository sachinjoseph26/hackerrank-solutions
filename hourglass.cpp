#include <iostream>
#include <climits>
#define m   6
using namespace std;

int hourglass(int a[][m])
{
    int sum=0;
    int result=INT_MIN;
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            result=std::max(result,sum);
        }
    }
    return result;
}
int main()
{
    int a[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<hourglass(a);
    return 0;
}