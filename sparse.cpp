#include <iostream>
#include <vector>
using namespace std;
#define D 10000

int answer(string input[],string q1,int n1)
{
    int c=0;
    for(int i=0;i<n1;i++)
    {
        if(q1==input[i])
            c++;
    }
    return c;
}
void result(string input[],string qu[],int n1,int n2)
{
    vector<int> v;
    for(int i=0;i<n2;i++)
    {
        int count = answer(input,qu[i],n1);
        v.push_back(count);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    string input[D];
    string qu[D];
    long int n1,n2;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        cin>>input[i];
    }
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        cin>>qu[i];
    }
    result(input,qu,n1,n2);
    return 0;
    
}
