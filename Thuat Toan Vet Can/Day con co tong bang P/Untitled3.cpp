//TIM CAC TRUONG HOP CO TONG = P
#include <bits/stdc++.h>
using namespace std;

int a[]={0,10,8,7,6,6,6,6};
int n=sizeof(a)/sizeof(a[0])-1;
int P=25;
int b[50];

void KiemTra(){
	int S=0;
	for(int k=0 ; k<n ; k++)
		if(b[k]==1)
			S+=a[k];
		if(S==P){
			cout << "\n\n";
			for(int k=0 ; k<n ; k++)
				if(b[k]==1)
					cout << "   " << a[k];
		}
}

void Thu(int i){
	int tong=0;
	for(int j=0 ; j<=1 ; j++){
		b[i]=j;
		if(i<n-1)
			Thu(i+1);
		else
			KiemTra();
			b[i]=0;
	}
}

int main(){
	cout << "Cac day con co tong = " << P << " la: ";
	Thu(0);
	return 0;
}

