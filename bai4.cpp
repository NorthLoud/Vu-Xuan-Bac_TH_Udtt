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
		switch(a[i]){
			case 1: cout<<"Trang"<<" "; break;
			case 2: cout<<"Cong"<<" "; break;
			case 3: cout<<"Trung"<<" "; break;
			case 4: cout<<"Binh"<<" "; break;
			case 5: cout<<"Hoan"<<" "; break;
			case 6: cout<<"Mai"<<" "; break;
		}
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
	int n = 6, k=4, a[100];
	ktao(k, a);
	while(ok == 0){
		in(k, a);
		sinh(n, k, a);
	}
}