# 2020cce
程式碼在這
## 第一題程式碼
```C
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%5)/1);
}
```
## 第二題程式碼

```C
#include <stdio.h>
int main()
{
int n,ans=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(n%i==0) ans=ans+1;
}
printf("%d\n",ans);
}
```
## 第三題程式碼
```C
#include <stdio.h>
int main()
{
int a[10],ans=0;
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
if(a[i]%3==0) ans=ans+1;
}
printf("%d\n",ans);
}
```
## 第四題程式碼
```C
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n>=90) printf("A");
    if(n<90 && n>=80) printf("B");
    if(n<80 && n>=60) printf("C");
    else printf("F");
}
```
## 第五題程式碼
```C
#include <stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0)
            {
                temp=i;
            }
        }

    }

    if(b>a)
    {
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0)
            {
                temp=i;
            }
        }

    }

    a=a/temp;
    b=b/temp;

    printf("%d\n%d",a,b);
}
```
