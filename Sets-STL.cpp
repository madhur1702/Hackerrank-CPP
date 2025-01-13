#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set<int>s;
     int q;
     cin>>q;
     while(q--)
     {
        int type,val;
        cin>>type>>val;
        if(type==1)
        {
            s.insert(val);
        }
        else if(type==2)
        {
            s.erase(val);
        }
        else if(type==3)
        {
            if(s.find(val)!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
     }
    return 0;
}



