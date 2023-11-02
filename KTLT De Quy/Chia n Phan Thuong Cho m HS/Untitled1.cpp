#include <iostream>
using namespace std;

int chiaPT(int n, int m){
	//Khong co HS nao duoc thuong
	if(m==0)
		return 0;
	//Moi HS duoc 0 phan thuong
	if(n==0)
		return 1;
	else{
		if(n<m) 
			return (chiaPT(n, n));
		else
			return (chiaPT(n, m-1) + chiaPT(n-m, m));
	}
}

int main(){
	int n,m;
	cout<<"Nhap so phan thuong: ";
	cin>>n;
	cout<<"Nhap so hoc sinh: ";
	cin>>m;
	
	cout<<"So cach chia "<<n<<" phan thuong cho "<<m<<" HS la: "<< chiaPT(n,m)<<endl;
	return 0;
}
