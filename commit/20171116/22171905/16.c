#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
	FILE *ps,*pd;
	char *fs,*fd;
	int ch;
	fs = argv[1];
	fd = argv[2];
	if ((ps = fopen(fs,"r")) == NULL)
	{
		printf("无法打开该文件");
		exit(1);
	}
	if ((pd = fopen(fd,"w")) == NULL)
	{
		printf("无法打开该文件");
		exit(1);
	}
	ch = fgetc(ps);
	while (feof(ps) == 0)//当feof(ps)==0时，进入循环
	{
	fputc(ch,pd);
	ch = fgetc(ps);
	}
	fclose(ps);
	fclose(pd);
	return 0;
}
