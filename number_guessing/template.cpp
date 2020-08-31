//template code
#include <bits/stdc++.h>
#include <iostream>
#define fi1n for(int i = 1; i < n; i++)
#define fi0n for(int i = 0; i < n; i++)
#define fj1n for(int j = 1; j < n; j++)
#define fk0n for(int k = 0; k < n; k++)
#define fk1n for(int k = 1; k < n; k++)
#define fj0n for(int j = 0; j < n; j++)
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vl vector<long>
#define miv map<int,vector<int>>
#define mpiv map<pair<int,int>,vector<int>>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
  ll t;
  cin >> t;
  while (t--) {
    /* code */
    ll a,b;
    cin >> a >> b;
    a++;
    b++;
    while(a < b){
      cout << (a+b)/2;
      string s;
      cin >> s;
      if(s == "CORRECT")break;
      else if(s == "TOO_SMALL"){
        a = (a+b)/2;
      }else if(s == "TOO_BIG"){
        b = (a+b)/2;
      }else{
        break;
      }
    }
  }
  return 0;
}
