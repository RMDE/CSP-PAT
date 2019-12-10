#include<stdio.h>
int find(char* str,int len){
	int flag=len-2;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='+'||str[i]=='-')
			flag=i;
	}
	return flag;
} 

int caculate(char* str,int len){
	if(len==1)
		return str[0]-'0';
	if(len==3)
	{
		if(str[1]=='+')
			return (str[0]-'0')+(str[2]-'0');
		else if(str[1]=='-')
			return (str[0]-'0')-(str[2]-'0');
		else if(str[1]=='x'||str[1]=='X')
			return (str[0]-'0')*(str[2]-'0');
		else if(str[1]=='/'){
			if(str[2]=='0')
				return 90;
			return (str[0]-'0')/(str[2]-'0');
		}
	}
	int cut=find(str,len);
	int left=caculate(str,cut);
	int right=caculate(&str[cut+1],len-cut-1);
	if(str[cut]=='+')
		return left+right;
	if(str[cut]=='-')
		return left-right;
	if(str[cut]=='x'||str[cut]=='X')
		return left*right;
	if(str[cut]=='/')
	{
		if(right==0)
			return 90;
		else
			return left/right;
	}
}

int main(){
	int n=0;
	char str[8]="\0";
	int res[100]={0},ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",str);
		ans=caculate(str,7);
		printf("%d\n",ans);
		if(ans==24)
			res[i]=1;
	}
	for(int i=0;i<n-1;i++){
		if(res[i]==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	if(res[n-1]==1)
		printf("Yes");
	else
		printf("No");
	return 0;
}
