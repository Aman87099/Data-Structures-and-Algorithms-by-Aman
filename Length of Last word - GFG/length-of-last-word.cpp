//{ Driver Code Starts
//Initial Template for C++

// CPP program for implementation of efficient 
// approach to find length of last word 
#include <bits/stdc++.h> 
using namespace std; 

int findLength(string s);

// Driver code 
int main() 
{ 
	int t;
	cin>>t;
	t+=1;
	bool flag = false;
	while(t--){
	    string s;
	    getline(cin,s);
	    if(!flag){
	        flag = true;
	        continue;
	    }
	    cout<<findLength(s)<<endl;
	}
	return 0;
} 

// } Driver Code Ends


//User function Template for C++

int findLength(string s){
    int i = s.length()-1;
    while(i>=0 && s[i]== ' '){
        i--;
    }
    if(i<0){
        return false;
    }
    int count = 0;
    while(i>=0 && s[i]!= ' '){
        count++;
        i--;
    }
    return count;
    
}