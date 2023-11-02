#include <iostream>
#define DonGia 2000
using namespace std;

int a[] = { 100, 0, 2, 1, 3, 1 };
int b[] = { 100, 2, 3, 4, 5, 2 };
int n=sizeof(a)/sizeof(a[0]);

int v[100]; //Luu tru gia thue may moi don dat hang

int L[100];
int t1, t2, j;


int main(){
	for(int i=1 ; i<n ; i++)
		for(int j=i+1 ; j<=n ; j++)
			if(b[i] > b[j]){
				t1 = a[i];
				a[i] = a[j];
				a[j] = t1;
				
				t2 = b[i];
				b[i] = b[j];
				b[j] = t2;
			}
			
	for(int i=1 ; i<=n ; i++)
		v[i] = (b[i] - a[i]) * DonGia;
		
	L[0] = 0;
	for(int i=1 ; i<=n ; i++)
		L[i] = v[i];
		
	for(int i=1 ; i<=n ; i++)
		for(int j=i-1 ; j>0 ; j--)
			if((b[j] <= a[i]) && (L[j] + v[i] > L[i]))
				L[i] = L[j] + v[i];
				
	int MAX=L[1];
	int k;
	for(int i=1 ; i<=n ; i++)
		if(L[i] > MAX){
			MAX = L[i];
			k = i;
		}
	cout << "So tien cho thue duoc lon nhat bang: " << MAX << endl;
		
	//Truy vet
	while(k>0){
		cout << "Cong viec thu " << k << ", bat dau: " << a[k] <<", ket thuc: " << b[k];
		j = k-1;
		while((L[j] + v[k] != L[k]) || (b[j] != a[k]))
			j--;
			k = j;
	}
	return 0;
}
