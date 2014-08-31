#NOIP复习之Eratosthenes筛法

##实现
C代码:

	#include<stdio.h>
	#include<string.h>

	#define MAXN 1000

	int prime[MAXN+1];

	int main(){
	memset(prime,-1,sizeof(prime));
	for(int i=2;i<=MAXN/2;i++){
		for(int j = i*2;j<=MAXN;j+=i){
			prime[j] = 0;
		}
	}
	for(int i=2;i<=MAXN;i++){
		if(prime[i]==-1){
			printf("%4d\n",i);
		}
	}
	return 0;
	}  

##注意：
**第一个循环到MAXN/2就可以了**  
