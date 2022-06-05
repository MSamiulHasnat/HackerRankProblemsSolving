#include <iostream>

using namespace std;
void solve(int n, int p)
{
    string s[]={"", "one","two","three","four","five","six","seven","eight", "nine"};
    for(int i = n; i<=p; i++)
    {
        if(i>9)
        {
            if(i&1)cout<<"odd"<<'\n';
            else cout<<"even"<<'\n';
        }
        else
        {
            cout<<s[i]<<'\n';
        }
    }
}
int main()
{
    int x, y; cin>>x>>y;
    int n = min(x,y), p = max(x,y);
    solve(n,p);
    
    return 0;
}

//Problem Link
//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true