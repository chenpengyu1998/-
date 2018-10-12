//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//static int * af;
//static int * bf;
////转化
////如果c[0]为-1的话代表这个数为0
////一般的c[0]代表 “1”2/3 中的 1
//int * zh(int * c){
//	if(c[1]%c[2]==0){
//		if(c[1]/c[2]==0){
//			c[0]=-1;
//		}else{
//			c[0]=c[1]/c[2];
//		}
//	}else if(c[1]>c[2]){
//		c[0] = c[1]/c[2];
//		c[1] = c[1]%c[2];
//	}
//	return c;
//}
//
////化简
//int * hj(int * a){
//	while((a[1]%2==0 && a[2]%2==0) || (a[1]%3==0 && a[2]%3==0) || (a[1]%7==0 && a[2]%7==0)){
//		if(a[1]%2==0 && a[2]%2==0){
//			a[1]/=2;
//			a[2]/=2;
//		}
//		if(a[1]%3==0 && a[2]%3==0){
//			a[1]/=3;
//			a[2]/=3;
//		}
//		if(a[1]%7==0 && a[2]%7==0){
//			a[1]/=7;
//			a[2]/=7;
//		}
//	}
//	return a;
//}
//
//
//
////加法
//void add(int * a, int *b){
//	int z[3]={0};
//	z[0]=0;
//	z[1]=a[1]*b[2]+b[1]*a[2];
//	z[2]= a[2]*b[2];
//	int * zf;
//	zf = hj(z);
//	zf = zh(zf);
//
//	if(af[0]==-1){
//		printf("0 + ");
//	}else if(af[0]==0){
//		printf("%d/%d + ",af[1],af[2]);
//	}else{
//		printf("%d %d/%d + ",af[0],af[1],af[2]);
//	}
//
//	if(bf[0]==-1){
//		printf("0 = ");
//	}else if(bf[0]==0){
//		printf("%d/%d = ",bf[1],bf[2]);
//	}else{
//		printf("%d %d/%d = ",bf[0],bf[1],bf[2]);
//	}
//
//	if(zf[0]==-1){
//		printf("0\n");
//	}else if(zf[0]==0){
//		printf("%d/%d\n",zf[1],zf[2]);
//	}else{
//		printf("%d %d/%d\n",zf[0],zf[1],zf[2]);
//	}
//
//	
//}
//
//
////减法
//void subtruct(int *a ,int *b){
//	int z[3]={0};
//	z[0]=0;
//	z[1]=a[1]*b[2]-b[1]*a[2];
//	z[2]= a[2]*b[2];
//	int * zf;
//	zf = hj(z);
//	zf = zh(zf);
//
//
//	if(af[0]==-1){
//		printf("0 - ");
//	}else if(af[0]==0){
//		printf("%d/%d - ",af[1],af[2]);
//	}else{
//		printf("%d %d/%d - ",af[0],af[1],af[2]);
//	}
//
//	if(bf[0]==-1){
//		printf("0 = ");
//	}else if(bf[0]==0){
//		printf("%d/%d = ",bf[1],bf[2]);
//	}else{
//		printf("%d %d/%d = ",bf[0],bf[1],bf[2]);
//	}
//
//	if(zf[0]==-1){
//		printf("0\n");
//	}else if(zf[0]==0){
//		printf("%d/%d\n",zf[1],zf[2]);
//	}else{
//		printf("%d %d/%d\n",zf[0],zf[1],zf[2]);
//	}
//}
//
////乘法
//void multiplication(int *a , int *b){
//	int z[3]={0};
//	z[0]=0;
//	z[1]=a[1]*b[1];
//	z[2]= a[2]*b[2];
//	int * zf;
//	zf = hj(z);
//	zf = zh(zf);
//	if(zf[0]!=-1){
//
//		if(af[0]==-1){
//			printf("0 * ");
//		}else if(af[0]==0){
//			printf("%d/%d * ",af[1],af[2]);
//		}else{
//			printf("%d %d/%d * ",af[0],af[1],af[2]);
//		}
//
//		if(bf[0]==-1){
//			printf("0 = ");
//		}else if(bf[0]==0){
//			printf("%d/%d = ",bf[1],bf[2]);
//		}else{
//			printf("%d %d/%d = ",bf[0],bf[1],bf[2]);
//		}
//
//		if(zf[0]==-1){
//			printf("0\n");
//		}else if(zf[0]==0){
//			printf("%d/%d\n",zf[1],zf[2]);
//		}else{
//			printf("%d %d/%d\n",zf[0],zf[1],zf[2]);
//		}
//
//
//		
//	}else{
//
//		if(af[0]==-1){
//			printf("0 * ");
//		}else if(af[0]==0){
//			printf("%d/%d * ",af[1],af[2]);
//		}else{
//			printf("%d %d/%d * ",af[0],af[1],af[2]);
//		}
//
//		if(bf[0]==-1){
//			printf("0 = ");
//		}else if(bf[0]==0){
//			printf("%d/%d = ",bf[1],bf[2]);
//		}else{
//			printf("%d %d/%d = ",bf[0],bf[1],bf[2]);
//		}
//
//		cout << "0" << endl;
//
//	}
//}
//
////除法
//void division(int *a ,int *b){
//	int * c = zh(b);
//	if(c[0]!=-1){
//		int z[3]={0};
//		z[0]=0;
//		z[1]=a[1]*b[2];
//		z[2]= a[2]*b[1];
//		int * zf;
//		zf = hj(z);
//		zf = zh(zf);
//		
//		if(af[0]==-1){
//			printf("0 / ");
//		}else if(af[0]==0){
//			printf("%d/%d / ",af[1],af[2]);
//		}else{
//			printf("%d %d/%d / ",af[0],af[1],af[2]);
//		}
//
//		if(bf[0]==-1){
//			printf("0 = ");
//		}else if(bf[0]==0){
//			printf("%d/%d = ",bf[1],bf[2]);
//		}else{
//			printf("%d %d/%d = ",bf[0],bf[1],bf[2]);
//		}
//
//		if(zf[0]==-1){
//			printf("0\n");
//		}else if(zf[0]==0){
//			printf("%d/%d\n",zf[1],zf[2]);
//		}else{
//			printf("%d %d/%d\n",zf[0],zf[1],zf[2]);
//		}
//
//
//	}else{
//		cout <<"Inf" << endl;
//	}
//}
//
//
//
//int main(void){
//	int a[3]={0};
//	int b[3]={0};
//	scanf("%d/%d %d/%d", &a[1],&a[2],&b[1],&b[2]);
//	af = zh(a);
//	bf = zh(b);
//	add(a,b);
//	subtruct(a,b);
//	multiplication(a,b);
//	division(a,b);
//	return 0;
//}