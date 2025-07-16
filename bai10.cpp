#include<bits/stdc++.h>
using namespace std;
bool check(int n){
	if(n % 2 == 1) return true;
	return false;
}
int tong(int i, int a[]){
	if(i < 0) return 0;
	if(check(a[i])){
		return a[i] + tong(i-1, a);
	}
	else
		return tong(i-1, a);
}
int main(){
	int n;
	cout<<"Nhap so luong phan tu n: ";
	cin>>n;
	int a[n];
	cout<<"Nhap "<<n<<" so nguyen: "<<endl;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<"Tong cac so le trong day la: "<<tong(n-1, a);
}
