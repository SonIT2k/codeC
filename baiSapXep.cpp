#include<stdio.h>

int main(){
	int a[]={1,3,5,6,7,8};
	int b[]={2,4,10,11,13,15,19};
	int c[100];
	int m,n,i,j,k,kk;
	m=sizeof(a)/sizeof(int);
	n=sizeof(b)/sizeof(int);
for(int i=0,j=0,k=0;j<m && j<n;i++,j++,k+=2){
	c[k]=a[i];
	c[k+1]=b[j];
}	
	
	kk=k;
	if(i<m && i>=n)
		for(int ii=i;ii<m;ii++,kk++)
			c[kk]=a[ii];
	if(i>=m && j<n)
		for(int jj=j;jj<n;jj++,kk++)
			c[kk]=b[jj];
}
