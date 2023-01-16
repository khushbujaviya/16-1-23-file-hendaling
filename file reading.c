#include<stdio.h>
#include<string.h>
main()
{
	FILE *p;
	char name;
	p=fopen("Demo.txt","r");
	if(p==NULL)
	{
		printf("error");
	}
	else
	{
	
		while(name!=EOF)
		{
		
		name=fgetc(p);
		printf("%c",name);
}	
	}fclose(p);
}
	

