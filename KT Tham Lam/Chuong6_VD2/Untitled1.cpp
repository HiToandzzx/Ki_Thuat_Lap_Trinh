#include <stdio.h>

//int V=55;
int vs[]={1,3,5,3,7,15,17,20,32,16,34,13,10,1};
int n = sizeof(vs)/sizeof(vs[0]);
int b[40]; //Luu tru cac vien soi vao binh

void NhapTheTich(int &V){
	do{
		printf("Nhap the tich: ");
		scanf("%d",&V);
	}while(V<0);
}

void SapXep(int vs[], int n){
	int tam;
	for(int i=0 ; i<n ; i++)
		for(int j=i+1 ; j<n ; j++)
			if(vs[i]<vs[j]){
				tam=vs[i];
				vs[i]=vs[j];
				vs[j]=tam;
			}
}

void Choise(int vs[], int n, int V){
	int S=0, i=0, k=0;
	while(S<V && i<n){
		if(S+vs[i]<=V){
			b[k]=vs[i];
			S+=b[k];
			k++;
		}
		i++;
	}
}

int main(){
	int V;
	NhapTheTich(V);
	SapXep(vs,n);
	Choise(vs,n,V);
	int i=0;
	while(b[i]!=0){
		printf("\n%3d",b[i]);
		i++; 
	}
	return 0;
}
