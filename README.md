# 2020cce
程式碼在這
## week01-1 找零錢
假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 
數字範圍：整數1 – 1000
```C
#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
printf("%d=50*%d+5*%d+1*%d\n",n,n/50,(n%50)/5,(n%5)/1);
}
```
## week01-2 因數個數
輸入一個正整數，顯示所有該正整數因數的個數。 
數字範圍：整數1 – 10000
```C
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int a=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
		a++;
		}
	}
	printf("%d\n",a);
}
```
## week01-3 找倍數
連續讀入10個整數(1 – 1000)，找出所讀入的整數有幾個是3的倍數。 
整數範圍：1 – 1000 
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
## week01-4 轉換等級
輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；如果輸入的整數小於90但大於或等於80則輸出B，如果小於80但大於或等於60，則輸出C；如為其他整數，則輸出F
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
## week01-5 分式化簡
輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。 
數字範圍：整數1 – 10000 
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
## week02-1 讀入整數反序列印
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，之後將所輸入的正整數以相反序顯示在畫面上。 
數字範圍：整數 1 – 1000 
```c
#include <stdio.h>
int main ()
{
	int  a[1000],n=0;
 	for(int i=0;i<=999;i++){
	scanf("%d ",&a[i]);
	if(a[i]==0){
	n=i;
	break;
		}
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
		}
	printf("\n");
	
	

}
```
## week02-2 漸增數列相加 
輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。 
```c
#include <stdio.h>
int main ()
{
	int ans=0,n;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++)
	ans+=i*(i+1);
	printf("%d\n",ans);




}
```
## week03-1 計算陣列平方值
輸入一個整數N，再依序輸入N個整數置於陣列中，計算各元素的平方值，再列出此算出平方值後的陣列。 
數字範圍：整數N範圍 1 – 10；其他整數1 – 100 
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
## week03-2計程車費計算
輸入里程公尺數，輸出應付的車資。計程車資計算方式為：起跳100 元(2000公尺)，續跳5元(每500公尺)。 
數字範圍：整數1 – 100000
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
## week03-3 兩數間可被5整除的整數
輸入兩個整數，找出兩數之間所有可以被5整除的整數。 
數字範圍：2個整數1 – 10000 
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
## week03-4 整數間最大距離
輸入3個相異整數，找出整數間最大的距離。 
數字範圍：整數1 – 10000 
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
## week03-5大小寫轉換
讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換(大寫轉為小寫，小寫轉為大寫)後輸出
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
## week04-1 除惡務盡 
輸入一個字串，將所有字元2去除後輸出
```c
#include <stdio.h>
int main ()
{
	char a[100];
	scanf("%s",&a);
	int i=0;
	while( a[i]!='\0')
	{
		if(a[i]!='2') printf("%c",a[i]);
		i++;
	}
	printf("\n");
}
```
## week04-2 擲骰統計
輸入一字串為擲骰的結果，統計1到6點出現的狀況
```c
#include <stdio.h>
int main ()
{
	char n[100];
	scanf("%s",&n);
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;                     
	for(int i=0;i<100;i++){    
	if (n[i]=='1') a++;		 	
	if (n[i]=='2') b++;		 	 
	if (n[i]=='3') c++;			 
	if (n[i]=='4') d++;			
	if (n[i]=='5') e++;		    
	if (n[i]=='6') f++;
	if (n[i]=='\0') break;		 
	printf("1:%d\n",a);
	printf("2:%d\n",b);
	printf("3:%d\n",c);
	printf("4:%d\n",d);
	printf("5:%d\n",e);
	printf("6:%d\n",f);
}

```
## week04-3 星星等腰三角 
輸入1個正整數n，作為輸出星星三角的層數
```c
#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) 
		for(int j=0;j<(n-i);j++)
			printf(" ");
		for(int j=0;j<(i*2-1);j++)
			printf("*");
		printf("\n");
	}		

}

```
## week 04-4 字元判別
輸入一個字元，若其為大寫字母則輸出U，若其為小寫字母則輸出L，若其為數字則輸出D，若為其他則輸出O
```c
#include <stdio.h>
int main ()
{
	char n;
	scanf("%c",&n);
	if(n>='A'&&n<='Z')printf("U");
	else if(n>='a'&&n<='z')printf("L");
	else if(n>='1'&&n<='9')printf("D");
	else printf("O");
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
