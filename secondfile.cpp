#include<stdio.h>
int main(){
	int i=0;
	char c;
	char a[10000];
	while(scanf("%c",&c) ){
		if(c=='\n') break;
		if(c>='a'&&c<='z'){
			a[i]=c;
			i++;		
		}
	}
	printf("%s",a);
} 
