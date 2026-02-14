#include<stdio.h>
void main()
{
char str[100],pat[100],rep[100],ans[100];
int i,j,k,l;
printf("Enter the string\n");
scanf("%s",&*str);
printf("Enter the pattern\n");
scanf("%s",&*pat);

printf("Enter the rep\n");
scanf("%s",&*rep);
k=0;
for(i=0;str[i]!='\0';)
{
for(j=0;pat[j]!='\0' && str[i+j]==pat[j];j++)
{
if(pat[j]='\0')
{
for(int l=0;rep[l]!='\0';l++)
{
ans[k++]=rep[l];
}
i=i+j;
}
else
{
ans[k++]=str[i++];
i++;
}
}
ans[k]='\0';
printf("result=%s\n",ans);
}
}

