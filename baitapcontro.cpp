#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void Nhapmang(int *arr,int n){
	for(int i=1;i<=n;i++){
    	printf("array[%d]",i);
    	scanf("%d",arr+i);
	}
}
int timam(int *arr,int n){
	for(int i=1;i<=n;i++){
		if(*(arr+i)<0)
		return *(arr+i);
	}
return -1;	
}
int dem(int *arr,int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(*(arr+i)<10)
	    dem=dem+1;
	}
   return dem;
}
void tinhtb(int *arr,int n){
	float s=0;
	float dem=0;
	for(int i=1;i<=n;i++){
		if(i%2==0)
		dem+=1;
}
	for(int i=1;i<=n;i++){
		if(i%2==0)
		s=s+*(arr+i);
	}
float tb=s/dem;	
	printf("Trung binh cac phan tu chan nam o vi tri chan cua mang la :%f",tb);
}
main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int *p=(int *)malloc(n*sizeof(int));
	Nhapmang(p,n);
	printf("So am dau tien trong day=%d",timam(p,n));
	printf("So phan tu nho hon 10 trong mang la :%d",dem(p,n));
    tinhtb(p,n);
}
