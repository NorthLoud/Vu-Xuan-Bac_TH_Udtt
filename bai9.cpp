#include<bits/stdc++.h>
using namespace std;
#define ll long long
int tong(int n){
	if(n == 0) return 0;
	return (n % 10) + tong(n / 10);
}
int main(){
	cout<<"Nhap so nguyen duong: ";
	int n; cin>>n;
	cout<<"Tong cac chu so la:"<<tong(n)<<endl;
}
