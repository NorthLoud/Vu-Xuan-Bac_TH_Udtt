#include<bits/stdc++.h>
using namespace std;
int ok = 0;
void ktao(int n, int a[]){
	for(int i=1; i<=n; i++)
		a[i] = i;
}
void in(int n, int a[]){
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}
void sinh(int n, int a[]){
	int i = n-1; 
	// di tim vi tri dau tien co a[i] < a[i+1]
	while(i>=1 && a[i] >= a[i+1])
		i--;
	if(i == 0) ok = 1;
	else{
		// khi tim duoc vi tri co a[i] < a[i+1] thi ta se tim dang sau no gia tri nho nhat lon hon no va doi cho cho nhau
		int j = n;
		while(a[i] > a[j])
			j--;
		swap(a[i], a[j]);
		// cac gia tri sau no sap xep tang dan
		sort(a+i+1, a+n+1);
	}
}
int main(){
	int n, a[100];
	cout<<"Nhap n:";
	cin>>n;
	ktao(n, a);
	while(ok == 0){
		in(n, a);
		sinh(n, a);
	}
}