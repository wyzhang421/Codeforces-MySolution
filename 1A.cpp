// 1A Theatre Square
// http://codeforces.com/problemset/problem/1/A
#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int n, m, a;
	
	cin >> n >> m >> a;
	
	int w = n%a == 0 ? n/a : n/a+1;
	int h = m%a == 0 ? m/a : m/a+1;
	
	cout << (long long)w*h << endl; 
	
	return 0;
	
}

