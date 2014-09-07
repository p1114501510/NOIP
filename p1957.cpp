/*************************************************************************
	> File Name: p1957.cpp
	> Author: p1114501510
	> Mail: p1114501510@163.com 
	> Created Time: Sun 07 Sep 2014 11:02:13 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>

using namespace std;

int getLen(int b,int c,int res){
	char buff[256];
	sprintf(buff,"%d",b);
	int len1 = strlen(buff);
	sprintf(buff,"%d",c);
	int len2 = strlen(buff);
	sprintf(buff,"%d",res);
	int len3 = strlen(buff);
	return len1+len2+len3+2;
}

string getString(char a,int b,int c,int res){
	string s;
	char buff[256];
	sprintf(buff,"%d",b);
	s += buff;
	if(a == 'a')
		s += '+';
	else if(a == 'b')
		s += '-';
	else
		s += '*';
	sprintf(buff,"%d",c);
	s += buff;
	sprintf(buff,"%d",res);
	s += '=';
	s += buff;	
	return s;
}

int main(){
	int n;
	char a;
	cin>>n;
	for(int i = 0;i<n;i++){
		string t1;
		char t;
		cin>>t1;
		if(t1.length() == 1){
			t = t1[0];
		}
		else{
			t = 'e';
		}
		if(t>='a'&&t<='c'){
			a = t;
			int b,c,res;
			cin>>b>>c;
			if(a == 'a')
				res = b+c;
			else if(a == 'b')
				res = b-c;
			else
				res = b*c;
			cout<<getString(a,b,c,res)<<endl<<getLen(b,c,res)<<endl;;
		}
		else{
			int b = 0;
			sscanf(t1.c_str(),"%d",&b);
			int c;
			cin>>c;
			int res;
			if(a == 'a')
				res = b+c;
			else if(a == 'b')
				res = b-c;
			else
				res = b*c;
			cout<<getString(a,b,c,res)<<endl<<getLen(b,c,res)<<endl;;
			
		}
	}
	return 0;
}
