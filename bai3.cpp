#include<stdio.h>
#include<conio.h>
void Nhapmang(int array[100],int n){
	for (int i=0;i<n;i++){
        printf("mang[%d]",i);
        scanf("%d",&array[i]);
}
}
void inmang(int array[100],int n){
	for (int i=0;i<n;i++){
    	printf("Mang[%d] %d",i,array[i]);
	}
}
int gt(int n){
	int gt=1;
	for(int i=1;i<=n;i++){
		gt=gt*i;
	}
	return gt;
}
int tonggiaithua (int array[100],int n){
	 int s=0;
	for (int i=0;i<n;i++)
	 s=s+gt(array[i]);
	 return s;
}

int main(){
    int mang[100];
    int n;
    printf("Nhap n");
    scanf("%d",&n);
    Nhapmang(mang,n);
    inmang(mang,n);
    printf("tong cac giai thua la %d",tonggiaithua(mang,n));
}
