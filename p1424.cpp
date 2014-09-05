/*************************************************************************
	> File Name: p1424.cpp
	> Author: p1114501510
	> Mail: p1114501510@163.com 
	> Created Time: Fri 05 Sep 2014 05:47:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int a,b,res;

int main(void){
	int k=0;
	cin>>a>>b;
	for(int i=0;i<b;i++){
		if(a%7!=6&&a%7!=0)
			res++;
		a++;
	}
	cout<<res*250<<endl;
	return 0;
}
