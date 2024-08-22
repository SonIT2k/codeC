#include<stdio.h>
#include<string.h>
typedef struct{
	char hoTen[50];
	int luong;
	char maNv[10]; 
}nV;
	
void docTep(FILE *p,nV nv,int *n){
	int i;
	fscanf(p,"%d",n);
	for(i=1;i<=*n;i++){
		fgets(nV[i].hoTen,sizeof(nV[i].hoTen),stdin);
		nV[i].hoTen[strlen(nV[i].hoTen) - 1] = '\0';
		fgets(p,"%f\n",&nV[i].luong);
		fgets(p,"%c",&nV[i].maNv);
	}
		
}	
	
void in(NhanVien nv) {
  printf("Ho ten: %s\n", nv.hoTen);
  printf("Luong: %.2f\n", nv.luong);
  printf("Ma nhan vien: %d\n", nv.maNhanVien);
}



int main(){
	char tenf[50];
	printf("Nhap ten file : ");
	gets(tenf);
	FILE *p=fopen(tenf,"r");

	if(p=NULL){
		printf("Khong the mo file !!!");
		return 1;
	}
nV nv;
  while (!feof(f)) {
    docThongTinNhanVien(f, &nv);
    inThongTinNhanVien(nv);
  }

  fclose(f);

}
