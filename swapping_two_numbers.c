#include<stdio.h>
int main(void){
int n,l[3000],r[3000];
int tmp=0;
printf("数字を2つ入力してください\n");
for(n=0;n<3000;n++){
scanf("%d %d",&l[n],&r[n]);
if(l[n]==0&&r[n]==0){
    tmp=n;
    break;
}
}
n=0;
   printf("逆にします\n");
for(n=0;n<tmp;n++){
 
printf("%d %d\n",r[n],l[n]);
}
}