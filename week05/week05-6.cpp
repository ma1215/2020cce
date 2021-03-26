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
