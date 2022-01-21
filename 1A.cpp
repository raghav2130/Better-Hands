#include<iostream>
#include<vector>
#include<algorithm>


#define ll long long
#define ull unsigned long long
#define ndl "\n"
using namespace std;


int main ()
{
    ll  n,m,a;
    cin>>n>>m>>a;
    ll countr = 0;
    ll countc = 0;
    if (n % a == 0) 
        countc=n/a;
    else{
        countc=n/a;
        countc++;
    }
    if (m % a == 0) 
        countr=m/a;
    else{
        countr=m/a;
        countr++;
    }




    cout<<countc*countr;

}   