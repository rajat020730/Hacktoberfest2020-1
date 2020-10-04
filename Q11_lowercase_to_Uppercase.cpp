#include <iostream>
#include <string>
using namespace std;
int main()
{
   string s;
   int i;
   cout<<"Enter the String: "; 
   getline(cin,s);
   int n=s.length();
   for(i=0;i<=n;i++) { 
      if(s[i]>=97 && s[i]<=122)
      {
		s[i]=s[i]-32;
      }
   }
   cout<<"Modified string: "<<s;
   return 0;
}
