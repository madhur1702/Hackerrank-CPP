#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> vec1;
    int element, size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        vec1.push_back(element);
    }  
    int pos;
    cin>>pos;
     
    vec1.erase(vec1.begin()+(pos-1));
    int start,end;
    cin>>start>>end;
    vec1.erase(vec1.begin()+(start-1),vec1.begin()+(end-1));
    cout<<vec1.size()<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
    }
    return 0;
}
