#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include <stdlib.h>
#include<assert.h>
using namespace std;
#define PI 3.14159265359
#define OO 1e9
#define S second
#define F first
#define fr(a,b)    for (int i = a; i < b;i++)
#define rfr(a,b)    for (int i = b;i >= a;i--)
#define MP                  make_pair
#define sz(v) ( (int) (v.size()) )
#define all(v) v.begin(),v.end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define endl "\n"
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, -1, 0, 1 };
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
int n, m, cnt;
#include<map>
bool valid(int i, int j)
{
	return i >= 0 && i < n&&j >= 0 && j < m;
}
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>
#include<vector>
char v[10000];

int main()
{
	fast();
	priority_queue<int>q;
	string s;
	int x;
	
	cin >>  m;
	
	
	while (m--)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> x;
			q.push(x);
		}
		if (s == "pop")
		{
			q.pop();
		}
		if (s == "top")
		{
			cout << q.top() << endl;;
		}
	}
}
