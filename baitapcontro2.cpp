#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int Init(int *B,int n){
    for(int i=0;i<n;i++){
    printf("Nhap mang [%d]=",i);
    scanf("%d",B+i);
	}
}
int Display(int *B,int n){
	for(int i=0;i<n;i++)
    printf("Mang[%d]=%d",i,*(B+i));
}
double Average(int *B,int n){
	double dem=0;
    double tong=0;
	for(int i=0;i<n;i++){
	dem+=1;
	tong=tong+*(B+i);
}
double tb=tong/dem;
printf("Trung binh cac so day tren la %lf",tb);
}
int Dec(int *B,int n){
	int tam;
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
       if(*(B+i)>*(B+j)){
         tam=*(B+i);
		 *(B+i)=*(B+j);
		 *(B+j)=tam;    
	}
	}
}
    printf("\n mang sap xep tang dan la: "); 
    for(int i=0;i<n;i++){
 	printf(" %d ",*(B+i));  
}
}
main(){
	int n;
	printf("Nhap so phan tu cua day=");
	scanf("%d",&n);
	int *B=(int*)malloc(n*sizeof(int));
	Init(B,n);
	Display(B,n);
	Average(B,n);
	Dec(B,n);
}
