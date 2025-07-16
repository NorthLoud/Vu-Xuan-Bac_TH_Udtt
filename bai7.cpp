#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f[1000001];
ll fibo(int n){
	if(n < 2) return n;
	return fibo(n-2) + fibo(n-1);
}
int main(){
	cout<<"Nhap n:";
	int n; cin>>n;
	cout<< "Fibonacci thu "<<n<<" la: "<<fibo(n)<<endl;
}