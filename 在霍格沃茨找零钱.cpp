////https://www.nowcoder.com/pat/6/problem/4063
//// 1G = 17S 
//// 1S = 29K
//// 1G = 17S = 493K
//
//
//
//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main(void){
//	int pg,ps,pk,ag,as,ak,g,s,k;
//	bool big = false;
//	scanf("%d.%d.%d %d.%d.%d",&pg,&ps,&pk,&ag,&as,&ak);
//	
//	if(pg>ag){
//		int temp;
//		temp=pg;
//		pg=ag;
//		ag=temp;
//
//		temp=ps;
//		ps=as;
//		as=temp;
//
//		temp=pk;
//		pk=ak;
//		ak=temp;
//		big = true;
//	}
//
//
//	g=ag-pg;
//	if(ps>as){
//		g--;
//		s = as+17-ps;
//	}else{
//		s = as-ps;
//	}
//	if(pk>ak){
//
//		if(s>=1){
//		s--;
//		}else{
//			g--;
//			s+=16;
//		}
//		k = ak+29-pk;
//	}else{
//		k = ak-pk;
//	}
//
//	if(big){
//		cout << "-" ;
//
//	}
//	printf("%d.%d.%d\n",g,s,k);
//
//
//	return 0;
//}