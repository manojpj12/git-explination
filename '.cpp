#include<stdio.h>
char str[50],pat[50],rep[50],ans[50];
int i,j,k,c,m,flag=0;
void stringmatch()
{
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			i++;
			m++;
			if(pat[i]=='\0')
			{
				flag=1;
				for(k=0;rep[k]!='\0';k++,j++)
				{
					ans[j]=rep[k];
				}
			
				i=0;
		     	c=m;
			}
		}
		else
		{
			ans[j]=str[c];
			j++;c++;
			m=c;
		}
	}
	ans[j]='\0';
}
int main()
{
	printf("enter the main string \n");
	gets(str);
	printf("enter the pattern \n");
	gets(pat);
	printf("enter the replacement\n");
	gets(rep);
	if(flag==1)
	printf("the final patter is\n%s",ans);
	else

    return 0;
    
}
