#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp1,*fp2,*fp3;
	char ch;
	if((fp1=fopen("1.png","rb"))==NULL)   //注意要将图片和程序放到同一个文件夹 
	{
		printf("图片未打开成功！\n");
		exit(0);
	}
	if((fp2=fopen("2.mp4","rb"))==NULL)
	{
		printf("文件未打开成功！\n");
		exit(0);
	}
	if((fp3=fopen("3.mp4","wb"))==NULL)
	{
		printf("合成器文件未打开成功！\n");
		exit(0);
	}
	while(!(feof(fp1)))
	{
		ch=fgetc(fp1);
		fputc(ch,fp3);	
	}
	fclose(fp1);
	while(!(feof(fp2)))
	{
		ch=fgetc(fp2);
		fputc(ch,fp3);	
	}
	fclose(fp2);
	fclose(fp3);
	printf("文件已合成成功，请查看文件。"); 
	return 0;
 } 
