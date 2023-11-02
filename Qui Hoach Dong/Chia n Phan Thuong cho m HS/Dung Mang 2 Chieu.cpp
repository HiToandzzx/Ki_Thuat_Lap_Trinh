#include <iostream>
using namespace std;

int a[100][100];

void CoSo(){
	for(int i=0 ; i<=10 ; i++){
		a[0][i] = 1;
		a[i][0] = 0;
		a[0][0] = 1;
	}
}

void TruyHoi(int n, int m){
	for(int i=1 ; i<=n ; i++)
		for(int j=1 ; j<=m ; j++)
			if(i<j)
				a[i][j] = a[i][i];
			else
				a[i][j] = a[i-j][j] + a[i][j-1];
}

int main(){
	int n, m;
	cout<<"Nhap so hoc sinh: ";
	cin>>n;
	cout<<"Nhap so phan thuong: ";
	cin>>m;
	
	CoSo();
	TruyHoi(n, m);
	cout<<"So cach chia "<< n <<" phan thuong cho " << m << " HS la: " << a[n][m] << endl;
}
