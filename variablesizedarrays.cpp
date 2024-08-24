#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


  int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
int n,q,i,j,k;
cin>>n>>q;
vector<std::vector<int>>arr(n);
for (i=0; i<n; i++) {
int size;
cin>>size;
arr[i].resize(size);
for (j=0; j<size; j++) {
cin>>arr[i][j];
}
}
for (k=0; k<q; k++) {
    cin>>i>>j;
cout<<arr[i][j]<<endl;
}


    return 0;
}
