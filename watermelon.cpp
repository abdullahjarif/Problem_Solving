#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if(w>0)
    {
        if(w%2==0 && w>=4)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
