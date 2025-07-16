#include<bits/stdc++.h>
using namespace std;
int ok = 0;
void ktao(int n, int a[]){
	for(int i=1; i<=n; i++)
		a[i]= 0;
}
void in(int n, int a[]){
	for(int i=1; i<=n; i++){
		if(a[i] == 0)
		cout<< "a" <<" ";
		else cout<<"b"<<" ";
	}
		
	cout<<endl;
}
void sinh(int n, int a[]){
	int i = n;
	// di tim vi tri so 0 dau tien tu phai qua trai
	while(i>=1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 1; // da la cau hinh cuoi
	else a[i] = 1;
	
}
int main(){
	int n, a[100];
	cout<<"Nhap do dai n:";
	cin>>n;
	ktao(n, a);
	while(ok == 0){ // chua phai cua hinh cuoi
		in(n, a);
		sinh(n, a);
	}
}