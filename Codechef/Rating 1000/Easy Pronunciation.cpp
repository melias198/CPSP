/*
||-----------------------------------||
||           Mohammad Elias          ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
using namespace std;

bool vowel(char ch)
{
    if(ch=='a' || ch=='i' || ch=='o' || ch=='e' || ch=='u') return true;
    else return false;
}

void solve()
{
     int n;
     cin>>n;
     string s;
     cin>>s;
     int ans=0;
     bool flag=true;
     for(int i=0;i<n;i++)
     {
        if(ans==4)
        {
            flag = false;
            break;
        }
        if(vowel(s[i])) ans=0;
        else ans++;
     }

     if(flag && ans<4) cout<<"YES"<<'\n';
     else cout<<"NO"<<'\n';
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
