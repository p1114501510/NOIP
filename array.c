/*************************************************************************
	> File Name: array.c
	> Author: p1114501510
	> Mail: p1114501510@163.com 
	> Created Time: Sun 31 Aug 2014 07:05:57 PM CST
 ************************************************************************/

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


