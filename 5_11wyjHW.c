//#include <stdio.h>
//int main(){
//	int num[20]={20,1,8,4,13,6,10,15,2,17,3,19,7,16,8,11,14,9,12,5};
//	int max_sum=0,a=0,b=0,I=0;//a,b为下标
//	int i=0,sum;
//	for(i=0;i<20;i++){
//		if(i==19){
//			I=0;
//		}else{
//			I=i+1;
//		}
//		sum=num[i]+num[I]+i+I+2;
//		if(sum>max_sum){
//			max_sum=sum;
//			a=i;
//			b=I;
//		}
//	}
//	printf("相邻数与编号和最大的是:%d,%d编号为：%d,%d.最大值是:%d",num[a],num[b],a+1,b+1,max_sum);
//
//	return 0;
//}