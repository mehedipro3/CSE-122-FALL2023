// Way Too Long Words


#include<iostream>
#include<string>
using namespace std ;
int  main ()
{
    string s;
    int m;
    cin >> m;
    for (int i=0; i<m; i++)
    {
        cin >> s ;
        if(s.length()>10){
            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
        }
        else {
            cout << s << endl;
        }
    }
    return 0;
}
