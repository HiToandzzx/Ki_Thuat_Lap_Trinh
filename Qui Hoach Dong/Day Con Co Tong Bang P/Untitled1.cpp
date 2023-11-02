#include <iostream>
using namespace std;

int a[]={0,5,7,2,9,1,6,3};
int S=15;
int n=sizeof(a)/sizeof(a[0]);

int P[20][20];
int k=1;
int luukq[20];

int main(){
	for(int i=1 ; i<n ; i++)
		P[i][0] = 0;
		P[1][a[1]] = 1;
		
	//Cong thuc truy hoi
	for(int i=1 ; i<=n ; i++)
		for(int j=1 ; j<=S ; j++)
			if((P[i-1][j] == 1) || P[i-1][j-a[i]] == 1)
				P[i][j]=1;
	
	//Kiem tra day con co tong = S		
	if(P[n][S] == 1) 
		cout << "Day con co tong = " << S << " la: ";
		cout << "\n\n";
		
	//Truy vet cac phan tu thuoc day con
	for(int i=n ; i>0 ; i--)
		if((P[i][S]==1) && (P[i-1][S]==0)){
			luukq[k]=a[i];
			k+=1;
			S-=a[i];
		}
	
	//In ket qua
	for(int i=k-1 ; i>0 ; i--)
		cout << "   " << luukq[i];
}
	
