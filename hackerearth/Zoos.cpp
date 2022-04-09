#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int x=0, y=0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'z')     x++;
        else if(s[i] == 'o')    y++;
        else continue;
    }

    if(2*x == y)    cout<<"Yes";
    else            cout<<"No";

}