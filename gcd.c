/*************************************************************************
	> File Name: gcd.c
	> Author: p1114501510
	> Mail: p1114501510@163.com 
	> Created Time: Sun 31 Aug 2014 05:02:28 PM CST
 ************************************************************************/

#include<stdio.h>

void change(int *a,int *b){
	if(*a<*b){
		*a = *a^*b;
		*b = *a^*b;
		*a = *a^*b;
	}
}

int gcd(int u,int v){
	int t;
	while(u>0){
		change(&u,&v);
		printf("%d %d\n",u,v);
		u = u-v;
	}
	return v;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",gcd(a,b));
}
