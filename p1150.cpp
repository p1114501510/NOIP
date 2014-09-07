/*************************************************************************
	> File Name: p1150.cpp
	> Author: p1114501510
	> Mail: p1114501510@163.com 
	> Created Time: Sun 07 Sep 2014 05:26:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n,k,res;

int main(){
	cin>>n>>k;
	res = n;
	while(n>=k){
		n -= k;
		res++;n++;
	}
	cout<<res<<endl;
	return 0;
}
