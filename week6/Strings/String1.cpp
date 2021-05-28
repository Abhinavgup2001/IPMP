//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
  if(str.length()==1) 
  return str;
  char temp=str[0];
  str.erase(str.begin()+0);
  string ip=reverseWord(str);
  ip.push_back(temp);
  return ip;
  
}
