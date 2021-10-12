#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char chuoi[50];
	printf("nhap vao chuoi bat ky:");
	scanf("%s",&chuoi);
	int dem=0;
	for(int i=0;i<strlen(chuoi);i++)
	{
		if(chuoi[i]!='\0')
		dem++;
	}
	printf("chuoi do la %s co %d phu am",chuoi,dem);
}
