//Petya and Strings



#include<iostream>
#include<string>
using namespace std ;
int  main ()
{
    string a,b;
    int i;
    cin >> a >> b;
    for(i=0; i<a.size(); i++)
    {
        a[i]=toupper (a[i]);
        b[i]=toupper (b[i]);
    }
    if(a==b)
    {
        cout << "0" << endl;
    }
    else
    {
        for (i=0; i<a.size(); i++)
        {
            if(a[i]>b[i])
            {
                cout << "-1" << endl;
                 break;
            }
        }
         for (i=0; i<a.size(); i++)
        {
            if(a[i]<b[i])
            {
                cout << "1" << endl;
                break;
            }
        }
    }
    return 0;
}

