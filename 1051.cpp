#include <iostream>  
#include <string.h>  
#include <stdio.h>  
using namespace std;  
      
class Stu {  
public:  
  char name[20];  
  int qimo;  
  int banji;  
  char is_ban[20];  
  char is_xibu[20];  
  int lunwen;  
  int money;  
};  
void getStu(Stu &stu) {  
  scanf("%s",stu.name);  
  scanf("%d",&stu.qimo);  
  scanf("%d",&stu.banji);  
  scanf("%s",stu.is_ban);  
  scanf("%s",stu.is_xibu);  
  scanf("%d",&stu.lunwen);  
}  
void printStu(Stu stu){  
  printf("%s\n%d\n",stu.name,stu.money);  
}  
void sum(Stu &stu) {  
  int temp = 0;  
  if (stu.qimo > 80 & stu.lunwen >= 1) {  
    temp += 8000;  
  }  
          
  if(stu.qimo > 85 & stu.banji > 80){  
    temp += 4000;  
  }  
          
  if(stu.qimo > 90) {  
    temp += 2000;  
  }  
          
  if(strcmp(stu.is_xibu, "Y") == 0 & stu.qimo > 85){  
    temp += 1000;  
              
  }  
          
  if(strcmp(stu.is_ban, "Y") == 0 & stu.banji > 80){  
    temp += 850;  
  }  
  stu.money = temp;  
}  
      
int main () {  
  int n = 0;  
  scanf("%d",&n);  
  int total = 0;  
  Stu stu[n];  
  for (int i = 0; i < n; i++) {  
    getStu(stu[i]);  
    sum(stu[i]);  
    total += stu[i].money;  
  }  
  int maxn = 0;  
  int maxmoney = 0;  
  int i;  
  maxn = i;  
  maxmoney = stu[i].money;  
  for (i = 0; i < n; i++) {  
    if (maxmoney < stu[i].money) {  
      maxmoney = stu[i].money;  
      maxn = i;  
    }  
  }  
  printStu(stu[maxn]);  
  printf("%d\n",total);  
  return 0;  
}
