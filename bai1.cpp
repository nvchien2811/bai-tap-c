#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int socu,somoi,tien,tieuthu;
	printf("Nhap chi so cong to dien moi ");
	scanf("%d",&somoi);
    printf("Nhap chi so cong to dien cu ");
	scanf("%d",&socu);
	tieuthu=somoi-socu;
	if(tieuthu<50&&tieuthu>0)
		tien=tieuthu*1500;
	else if(tieuthu>=50&&tieuthu<=100)
	    tien=49*1500+(tieuthu-49)*2000;
	else if(tieuthu>100)
	    tien=49*1500+51*2000+(tieuthu-100)*3000;
printf("so tien dien la %d",tien);
}
