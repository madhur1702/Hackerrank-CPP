#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
   string a;
  string b;
  cin>>a;
  cin>>b;
  int len1 = a.size();
  int len2 = b.size();
  cout<<len1<<" "<<len2<<endl;
  string c=a+b;
  cout<<c<<endl;
  char c0=a[0];
  a[0]=b[0];
  b[0]= c0;
  cout<<a<<" "<<b;
    return 0;
}
