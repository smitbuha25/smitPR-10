#include<stdio.h>

main()
{
	FILE *p;
	char data[100];
	p = fopen("PR=10,smit.txt","w");
	
	if(p == NULL)
	{
		printf("notn open file");
	}
	else
	{
		printf("Enter Any Value=>");
		gets(data);
		fputs(data,p);
		printf("successfully data");
		
		fclose(p);
	} 
}
