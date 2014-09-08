#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char buff1[256];
char buff2[256];

int t1[26],t2[26];

int main(){
    scanf("%s %s",buff1,buff2);
    for(int i=0;i<strlen(buff1);i++)
        t1[buff1[i]-'A']++;
    for (int i=0;i<strlen(buff2);i++)
        t2[buff2[i]-'A']++;
    sort(t1,t1+26);
    sort(t2,t2+26);
    for(int i=0;i<26;i++){
        if(t1[i]!=t2[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}