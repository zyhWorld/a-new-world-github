#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp1,*fp2,*fp3;
	char ch;
	if((fp1=fopen("1.png","rb"))==NULL)   //ע��Ҫ��ͼƬ�ͳ���ŵ�ͬһ���ļ��� 
	{
		printf("ͼƬδ�򿪳ɹ���\n");
		exit(0);
	}
	if((fp2=fopen("2.mp4","rb"))==NULL)
	{
		printf("�ļ�δ�򿪳ɹ���\n");
		exit(0);
	}
	if((fp3=fopen("3.mp4","wb"))==NULL)
	{
		printf("�ϳ����ļ�δ�򿪳ɹ���\n");
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
	printf("�ļ��Ѻϳɳɹ�����鿴�ļ���"); 
	return 0;
 } 
