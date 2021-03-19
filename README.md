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
## week02-1
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
## week02-2
```c
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d,n[1]:%d,n[2]:%d",n[0],n[1],n[2]);
}
```
## week03
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main ()
{
         printAll();
     int *p = &a[2];
     *p = 222;
         printAll();
         printf("p心理小紙條的值是:%d\n",p);
     p = p + 2;
     *p = 666;
         printAll();
         printf("p心理小紙條的值是:%d\n",p);
     p--;
     *p = 555;
         printAll();
         printf("p心理小紙條的值是:%d\n",p);
}
```
## week03-1
```c
#include <stdio.h>
#include <stdio.h>
int a[10];
int main()
{
    int b[10];
    int *p=(int*)malloc(sizeof(int)*10);
    return 0;

}
```
## week03計算陣列平方值
```c
#include <stdio.h>
int a[10];
int main ()
{
	int n;
	scanf("%d",&n);
	int ans=1;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans=a[i]*a[i];
		printf("%d,",ans);
	}
	printf("\n");
}
```
## week03計程車
```c
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if(n<=2000)
	printf("100");
	else if(n>2000)
	printf("%d",(n-2000)/500*5+105);
	printf("\n");

}
```
## 基礎題：兩數間可被5整除的整數
```C
#include <stdio.h>
int main()
{
 int a,b,c;
 scanf("%d%d",&a,&b);
 if(a>b)
 {
  c=a;
  a=b;
  b=c;
 }
 for(int i=a;i<=b;i++)
 {
  if(i%5==0)printf("%d\n",i);
 }
}
```
## 基礎題：整數間最大距離
```C
#include <stdio.h>
int a[10000];
int main()
{
 int min,max;
 for(int i=0;i<3;i++)
 {
  scanf("%d",&a[i]);
  min=a[0];
  max=a[i];
 }
 for(int i=0;i<3;i++)
 {
  if(min>a[i])min=a[i];
  if(max<a[i])max=a[i];
 }
 printf("%d\n",max-min);
}
```
## 進階題：計算陣列的平方值
```C
#include <stdio.h>
int a[10];
int b[100];
int main()
{
 int n;
 scanf("%d",&n);
 int ans=1;
 for(int i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
  ans=a[i]*a[i];
  printf("%d,",ans);
 }
 printf("\n");
}
```
## 進階題：大小寫轉換
```C
#include <stdio.h>
int main()
{
 char input[11];
 scanf("%s",&input);
 for(int i=0;i<11;i++)
 {
  if('A'<=input[i]&&input[i]<='Z') printf("%c",input[i]+32);
  else if('a'<=input[i]&&input[i]<='z')printf("%c",input[i]-32);
  else if('0'<=input[i]&&input[i]<='9')printf("%c",input[i]);
  else if(input[i]==NULL)break;
 }
 printf("\n");
}
```
## week04-1 struct
```c
#include <stdio.h>+
struct Point {
    float x,y;
};
int main ()
{
    struct  Point a;
}
```
## week04-2 
```c
#include <stdio.h>+
struct Point {
    float x,y;
};
int main ()
{
    struct  Point a={4.1, 3.2};
    printf("%f %f\n", a.x, a.y);

    return 0;
}

```
## week04-3
```c
#include <stdio.h>+
struct Point {
    float x,y;
};
int main ()
{
    struct  Point a={4.1, 3.2};
    printf("%f %f\n", a.x, a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
    return 0;
}


```
## week 04-4
```c
#include <stdio.h>
struct DATA {
    int x,y;
}a[3];
struct DATA b={100,200};

int main ()
{
    for(int i=0;i<3;i++){
    printf("a[%d]:%d %d\n", i , a[i].x, a[i].y);
    }
    printf("b:%d %d\n", b.x, b.y);
    struct  DATA c;
    printf("c=%d %d像亂碼\n", c.x, c.y);
    c=b;
    printf("c:%d %d\n", c.x, c.y);
}
```
