#include <bits/stdc++.h>
#include <iostream>
#define fi1n for (int i = 1; i < n; i++)
#define fi0n for (int i = 0; i < n; i++)
#define fj1n for (int j = 1; j < n; j++)
#define fk0n for (int k = 0; k < n; k++)
#define fk1n for (int k = 1; k < n; k++)
#define fj0n for (int j = 0; j < n; j++)
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vl vector<long>
#define miv map<int, vector<int>>
#define mipv map<int, vector<pair<int, int>>>
#define pb push_back
#define mp make_pair
using namespace std;

miv makeUndirectedUnweightedGraph(int m)
{
    miv gr;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        gr[a].pb(b);
        gr[b].pb(a);
    }
    return gr;
}

mipv makeUndirectedWeightedGraph(int m)
{
    mipv gr;
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        gr[a].pb(mp(w, b));
        gr[b].pb(mp(w, a));
    }
    return gr;
}

miv makeDirectedUnweightedGraph(int m)
{
    miv gr;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        gr[a].pb(b);
    }
    return gr;
}

mipv makeDirectedWeightedGraph(int m)
{
    mipv gr;
    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        gr[a].pb(mp(w, b));
    }
    return gr;
}
