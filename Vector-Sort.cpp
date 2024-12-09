#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> vec1;
    int element,size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        vec1.push_back(element);
        
    }  
    sort(vec1.begin(),vec1.end());
    for(int i=0;i<size;i++)
    {
        cout<<vec1[i]<<" ";
    }
    return 0;
}

