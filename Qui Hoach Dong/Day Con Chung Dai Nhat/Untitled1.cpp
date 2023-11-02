#include <iostream>
using namespace std;

int a[]={ 7, 3, 8, 6, 2 };
int m=sizeof(a)/sizeof(a[0])-1;

int b[]={ 3, 7, 2, 8, 4, 6, 1, 2 };
int n=sizeof(b)/sizeof(b[0])-1;

int L[100][100];

void DayChung(int a[], int b[], int m, int n){
	for(int i=0 ; i<=m ; i++)
		L[i][0] = 0;
	for(int j=0 ; j<=n ; j++)
		L[0][j] = 0;
		
	for(int i=1 ; i<=m ; i++)
		for(int j=1 ; j<=n ; j++)
			if(a[i] == b[j])
				L[i][j] = L[i-1][j-1] + 1;
			else 
				if(L[i-1][j] > L[i][j-1])
					L[i][j] = L[i-1][j];
				else 
					L[i][j] = L[i][j-1];
					
	cout<<"Chieu dai day con chung dai nhat: "<<L[m][n]<<endl;
	cout<<"Day con chung: ";
	int i=m;
	int j=n;
	while(i>0){
		if(a[i] == b[j]){
			cout<<"\t"<<a[i];
			i--;
			j--;
		}else
			if(L[i-1][j] > L[i][j-1])
				i--;
			else
				j--;
	}
}


int main(){
	DayChung(a, b, m, n);
		return 0;
}
