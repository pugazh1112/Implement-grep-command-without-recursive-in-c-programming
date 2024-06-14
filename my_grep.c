#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("usage:./a.out srh_str file\n");
		return;
	}
	FILE *fp;
	fp=fopen(argv[2],"r");
	if(fp==0)
	{
		printf("file not present\n");
		return;
	}
	char s[30];
	while((fgets(s,30,fp))!=0)
	{
		if(strstr(s,argv[1])>0)
			printf("%s",s);
	}
}
