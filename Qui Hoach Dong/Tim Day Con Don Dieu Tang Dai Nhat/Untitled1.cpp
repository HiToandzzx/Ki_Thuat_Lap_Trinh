#include <iostream>
using namespace std;

int a[]={ 0, 25, 22, 9, 33, 21, 50, 41, 60, 90, 70 };
int n=sizeof(a)/sizeof(a[0]);

int L[100]; //Luu tru chieu dai cac day con tang dan
int T[100]; //Chua vi tri cac phan tu dung truoc phan tu dang xet

void XuLy(int j){
	int temp;
	int MAX=1;
	for(int i=0 ; i<j ; i++)
		if(a[j] > a[i])
			if(MAX < 1+L[i]){
				MAX = 1 + L[i];
				temp = i;
			}
		L[j] = MAX;
		if(MAX > 1)
			T[j] = temp;
		if(j < n-1)
			XuLy(j+1);
}

int main(){
	
	L[0]=1;
	T[1]=0;
	XuLy(1);

	int tr=0;
	cout << "Day con tang dan: ";
	for(int k=1 ; k<n-1 ; k++)
		if(T[k] == tr){
			cout << a[k] << "\t";
			tr=k;
		}
	return 0;
}


