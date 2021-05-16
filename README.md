# 2020cce
程式碼在這
## week01-1
```C
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%5)/1);
}
```
## week01-2

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
## week01-3
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
## week01-4
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
## week01-5
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
## week03計程車費計算
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
## week04-5
```c
#include <stdio.h>
struct POINT{
    float x,y,z;
};
struct POINT point[5] = { { 0,0,0 } , { 0,1,0 } , { 0,0,1 } , { 1,1,1}  };
int main ()
{
    struct POINT *p=&point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

}
```
## week05-1
```c
#include <stdio.h>
int main ()
{

    char line [10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    
    printf("%s\n",line);
    printf("%s\n",line2);

}
```
## week05-2
```c
#include <stdio.h>
int main ()
{

    char line [10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);
    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','r','i','t','y'};
    printf("你看看你看看,現在印出來的line4: ==%s==\n",line4);
}
```
## week05-3

```c
#include <stdio.h>
int main ()
{

  char line [5][10]={"decline","proper","majority","bullet","shop"};
  for(int i=0;i<5;i++){
    printf("%s\n",line[i]);
  }
}

```
## week05-4

```c
#include <stdio.h>
int main ()
{
    printf("請看看值是多少: %d", '\0' );
}

```
## week05-5

```c
#include <stdio.h>
#include <string.h>
int main ()
{
  char line[10]= "majority";
  char line2[10]="ask";
  if(strcmp(line ,line2)>0) {
    printf("左邊大\n");
  }else{
    printf("右邊大\n");
  }

}

```
## week05-6

```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp (line[i],line[j])>0){
	   		   strcpy (temp,line[i]);
	   		   strcpy (line[i],line[j]);
	   		   strcpy (line[j],temp);
	 	    }
	    }
	}
	for(int i=0;i<n;i++){
		printf("%s\n",line[i]);
	} 
}	  
```
## week07字串排序-快速排序

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//char line[100][10];
int compare( const void * p1, const void * p2 ){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;
    
    return strcmp( s1, s2);
}
char line[4][10]={"decline","proper","majority","bullet"};
//char temp[10];
int main()
{
    int n=4;
    //scanf("%d", &n);
    //for(int i=0; i<n; i++){
    //    scanf("%s", line[i]);
    //}
    
    qsort( line, n, sizeof(char[10]), compare);
    
    for(int i=0; i<n; i++){
        printf("%s\n", line[i]);
    }
}
```
## week08 hardwood species
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000] [32];
int compare (const void *p1,const void *p2){
	return strcmp((char* )p1,(char*)p2);
}	
int main()
{
	int T;
	scanf("%d\n\n",&T);
	int N=0;
	for(int i=0;    ;i++){
		char*now=gets(tree[i]);
		if(now==NULL){
			N=i;
			break;
		}
		if(strcmp( tree[i],"")==0){
			N=i;
			break;      
		}	
	}
	qsort (tree ,N,32,compare);
	printf("%s ",tree[0]);
	int ans=1;
	for(int i=0;i<N-1;i++){
	if(strcmp (tree[i],tree[i+1])!=0){
		printf("%.4f\n",100*ans/(float)N);
		printf("%s ",tree[i+1]);
		ans=1;
		}else ans++;
	}
	printf("%.4f\n",100*ans/(float)N);
}
```
## week10 hardwood species
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare(const void *p1,const void *p2)
{
 return strcmp( (char*)p1,(char*)p2);
}
int main()
{
 int T;
 scanf("%d\n\n",&T);
 for(int t=0;t<T;t++){
  int N=0;
  while(gets(line)!=NULL){
   if(strcmp(line,"")==0)break;
   
   strcpy( tree[N],line);
   //printf("%s\n",line);
   N++;
  }
  //printf("有幾棵樹? %d\n",N);
  
  qsort(tree,N,32,compare);
  
  if(t>0) printf("\n");
  int ans=1;
  printf("%s ",tree[0]);
  
  for(int i=0;i<N-1;i++){
   if( strcmp(tree[i],tree[i+1])==0){
    ans++;
   }else{
    printf("%.4f\n",100*ans/(float)N);
    ans=1;
    printf("%s ",tree[i+1]);
   }
   //printf("%s\n",tree[i]);
  }
  printf("%.4f\n",100*ans/(float)N);
 }
}

```
## week11-1

```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};
int compare(const void *p1,const void *p2)
{
    int d1= * (int *)p1;
    int d2= * (int *)p2;
    if( d1 > d2) return 1;
    if( d1 == d2)return 0;
    if( d1 < d2) return -1;
}
int main ()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0; i<10 ;i++){
        printf("%d ",a[i]);
    }
}

```
## list of conquests

```c
#include <stdlib.h>
#include <string.h>
char line[2000][80];
char others[80];
int compare (const void *p1,const void *p2)
{
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;
	
	int result =strcmp(s1 ,s2);
	if (result>0) return 1;
	if (result==0) return 0;
	if (result<0) return -1;
}
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%s",line[i]);
	gets (others);
	}
	qsort(line ,n,80,compare);
	printf("%s ",line[0]);
	int ans=1;
	for(int i=0;i<n-1;i++){
	if(strcmp(line[i],line[i+1])==0){
	ans++;
	}else {
	printf("%d\n",ans);
	printf("%s ",line[i+1]);
	ans=1;
		}
	}
	printf("%d\n",ans);
}
```
## week12 數字個數
連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後顯示所輸入正整數的
```c
#include <stdio.h>
int a[10];
int main ()
{
	int ans=0;
	for(int i=0;i<10;i++){
	scanf("%d",&a[i]);
	if(a[i]==0) break;
	ans++;
	}
	printf("%d",ans);
}
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
## 

```c
```
