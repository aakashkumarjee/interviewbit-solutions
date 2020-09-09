#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define miv map<int, vector<int>>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin>> n;
    	vector<int> A(n);
    	for(int i = 0; i < n; i++){
    	    cin >> A[i];
    	}
    	vector<int> left(n),right(n);
    	left[0] = A[0];
    	right[n-1] = A[n-1];
    	for(int i = 1; i< n; i++){
    	    left[i] =A[i] + left[i-1];
    	}
    	for(int i = n-2; i>=0; i--){
    	    right[i]= A[i] + right[i+1];
    	}
    	int f = -1;
    	for(int i = 0;i < n;i++){
    	    if(left[i] == right[i]){
    	        f = i;
    	        break;
    	    }
    	}
    	// for(int i = 0; i< n;i++){
    	//     cout << left[i] << " " << right[i] << endl;
    	// }
    	if(f == -1){
    	    cout << f<< endl;
    	}else{
    	    cout << A[f] << endl;
    	}
    }
	return 0;
}