#include <bits/stdc++.h>
using namespace std;

int nums[]={2,1,7,8};
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

int main (){
	cout << "So tien lon nhat ma Robber lay duoc: " << Vmax(n-1);
	return 0;
}
