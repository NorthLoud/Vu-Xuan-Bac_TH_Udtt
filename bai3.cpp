#include<bits/stdc++.h>
using namespace std;
int ok = 0;
void ktao(int k, int a[]){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}
void in(int k, int a[]){
	for(int i=1; i<=k; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void sinh(int n, int k, int a[]){
	int i = k; 
	// di tim gia tri chua dat max tai vi tri cua no
	while(i>=1 && a[i] == n-k+i){
		i--;
	}
	if(i == 0) ok = 1;
	else {
		a[i]++; // tang gia tri tim duoc len 1
		// cac gia tri sau bang gia tri truoc cong 1
		for(int j = i+1; j<=k; j++)
			a[j] = a[j-1] + 1;
	} 
}
int main(){
	int n, k, a[100];
	cout<<"Nhap n va k:";
	cin>>n>>k;
	ktao(k, a);
	while(ok == 0){
		in(k, a);
		sinh(n, k, a);
	}
}