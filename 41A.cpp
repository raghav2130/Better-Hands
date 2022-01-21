#include<iostream>
#define ll long long
#define ndl "\n"
#define ff(i,a,b) for (ll i=a; i<b; i++)
using namespace std;

int main ()
{
    string s, t;
    cin>>s>>t;
    int j=s.length()-1;
    int f=1;
    ff (i,0, s.length())
    {
        if (s[i] != t[j]){
            f=0;
            break;
        }
        j--;
    }
    if (f)
    cout<<"YES";
    else 
    cout<<"NO";
}