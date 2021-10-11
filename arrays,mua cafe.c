#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sn,i,ch; /*sn :so nguoi*/
	int sum=0;
	float thue;
	printf("Chao ban den voi DATSTUDIO\n");
	printf("Cac ban co bao nhieu nguoi:");
	scanf("%d",&sn);
	int khachhang[sn],douong[5];
	for(i=0;i<5;i++){
		douong[i]=0;
	}
	printf("*****MENU*****\n");
	printf("1,tra chanh 15k\n");
	printf("2,nau da    25k\n");
	printf("3,matcha    20k\n");
	printf("4,nuoc cam  30k\n");
	printf("5,cafe den  25k\n");
	
	for(i=0;i<sn;i++){
		printf("\nKhach hang %d chon loai ",i+1);
		scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("tra chanh 15k.\n ok");
			sum+=15;
			khachhang[i]=ch;
			douong[i]=15;
			break;
		case 2:
			printf("nau da 25k.\n ok");
			sum+=25;
			khachhang[i]=ch;
			douong[i]=25;
		   	break;
		case 3:
			printf("matcha 20k.\n ok");
			sum+=20;
			khachhang[i]=ch;
			douong[i]=20;
			break;
		case 4:
			printf("nuoc cam 30k.\n ok");
			sum+=30;
			khachhang[i]=ch;
			douong[i]=30;
			break;
		case 5:
			printf("cafe den 25k.\n ok");
			sum+=25;
			khachhang[i]=ch;
			douong[i]=25;
	        break;
		default:
			printf("thu lai!!");
			break;
		}	
	}
	printf("\n\n\tHoa Don\n");
	for(i=0;i<sn;i++){
	printf("Khach hang thu %d chon do uong %d phai tra %d k \n",i+1,khachhang[i],douong[i]);
    }
	
	printf("\n\ntong hoa don %d k\n",sum);
	thue = (float)sum*0.1;
	printf("chiu thue 10%% voi so tien %f k\n",thue);
	printf("tong tien phai tra %f k",(float)thue + sum);
	
	
	return 0;
}
