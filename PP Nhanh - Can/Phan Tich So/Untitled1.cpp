#include <iostream>
using namespace std;

int a[50];
int n;
int dem=0;

void nhap(int &n){
	cin >> n;
}

void kiemtra(int n){
	int s=0;
	for(int i=1; i<=n ; i++)
		s+=a[i]*i;
		if(s==n){
			dem++;
			cout << endl;
			for(int i=1; i<=n ; i++)
				if(a[i]!=0)
					for(int k=1 ; k<=a[i] ; k++)
						cout << i << " ";
		}
}

void thu(int i){
	for(int j=0 ; j<=n ; j++){
		a[i]=j;
		if(i<n-1)
			thu(i+1);
		else
			kiemtra(n);
			a[i]=0;
	}
}

int main(){
	nhap(n);
	thu(1);
	cout << dem;
	return 0;
}
