#include <bits/stdc++.h>
using namespace std;

//DE QUY
int nums[]={2,15,7};
//QUY HOACH DONG
int luu[30];

int n=sizeof(nums)/sizeof(nums[0]);

int max(int a, int b){
	if(a>=b)
		return a;
	else 	
		return b;
}

//DE QUY
int Vmax(int k){
	if(k<0)
		return 0;
	if(k==0)
		return nums[0];
	if(k==1)
		return max(nums[0], nums[1]);
	if(k>1)
		return max(Vmax(k-1), Vmax(k-2) + nums[k]);
}

//QUI HOACH DONG
void qhd(int k){
	luu[0] = nums[0];
	luu[1] = max(nums[0], nums[1]);
	for(int i=2 ; i<k ; i++)
		luu[i] = max(luu[i-1], luu[i-2] + nums[i]);
}

int main (){
	cout << "So tien lon nhat ma Robber lay duoc: " << Vmax(n-1);
	qhd(n);
	cout << "\n" << "So tien lon nhat ma Robber lay duoc: " << luu[n-1];
	return 0;
}
