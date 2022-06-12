#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int n;
	char st[1000000];
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		scanf("%s",&st);
		int c=0;
		for(int j=0;j<n;j++){
			if(st[j]=='0' && st[j+1]=='0'){
				c=c+2;
			}
			else if(st[j-1]=='0' && st[j]=='1' && st[j+1]=='0'  )
			{
				c=c+1;
			}
		}
		printf("%d\n",c);
	}
	return 0;	
}