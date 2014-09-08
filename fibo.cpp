#include <iostream>

using namespace std;

int fibo(int i){
    if(i<=0)
        return 0;
    if(i>0&&i<=2)
        return 1;
    else
        return fibo(i-1)+fibo(i-2);
}

int main(int argc, const char * argv[]){
    for(int i=1;i<=10;i++){
        cout<<fibo(i)<<" ";
    }
    cout<<endl;
    return 0;
}

