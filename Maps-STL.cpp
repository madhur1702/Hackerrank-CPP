#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin>>size;
    map<string, int> marksMap;
    for (int i=0;i<size;i++) 
    {
        int type;
        cin>>type;
        if(type==1)
        {
            string name;
            int marks;
            cin>>name>>marks;
            marksMap[name]+=marks;
        }
        else if (type==2) 
        {
            string name;
            cin>>name;
            marksMap.erase(name);
            
        }
        else if (type ==3) 
        {
            string name;
            cin>>name;
            cout<<marksMap[name]<<endl;
        }
    }
    return 0;
}



