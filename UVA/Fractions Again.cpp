/*
ö��a��b=(a*k)/(a-k)������
ö�����ޣ�b������ʽ2*k��������k+1��

*/

#include<cstdio>

#include<algorithm>

using namespace std;

int main()
{
    int t,cnt=0;
    while(~scanf("%d",&t))
    {
        cnt=0;
        for(int i=t+1;i<=2*t;i++){
            if(t*i%(i-t)==0){
                cnt++;
            }
        }
        printf("%d\n",cnt);
        for(int i=t+1;i<=2*t;i++){
            if(t*i%(i-t)==0){
                printf("1/%d = 1/%d + 1/%d\n",t,t*i/(i-t),i);
            }
        }
    }
}
