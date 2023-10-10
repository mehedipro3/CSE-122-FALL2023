#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t,a=0,d=0;
    cin >> t;
    char n[t];
    for(int i=0; i<t; i++)
    {
        cin >> n[i];
        if(n[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout << "Anton" ;
    else if  (d>a)
        cout << "Danik" ;
    else
        cout << "Friendship" ;
    return 0;
}
