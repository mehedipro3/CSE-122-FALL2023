//  Bear and Big Brother


#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,i,b;
    cin >> a >> b;
    for(i=1; ; i++)
    {
        a*=3;
        b*=2;
        if(a>b)
            break;
    }
    cout << i ;
  
    return 0;
}
