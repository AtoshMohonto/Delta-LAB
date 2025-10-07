#include<stdio.h>
int volume(int a,int b,int c);
int main(){
    int x,y,z,ans;
    x=3;
    y=4;
    z=5;
    ans=volume (x,y,z);
    printf("Volumn is %d\n",ans);
    return 0;
}
int volume(int a,int b,int c){
    return a*b*c;
}