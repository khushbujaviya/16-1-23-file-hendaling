#include<stdio.h>
#include<string.h>
main()
{
	FILE *p;
	char name[100];
	p=fopen("Demo.txt","w");
	if(p==NULL)
	{
		printf("error");
	}
	else{
		int i;
		printf("enter text:");
		gets(name);
		for(i=0;i<strlen(name);i++)
		{
			fputc(name[i],p);
		}
		fclose(p);
	}
}
