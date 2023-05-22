#include<stdio.h>

main()
{
	FILE *p;
	char data[100];
	p = fopen("PR=10,smit.txt","a");
	
	if(p == NULL)
	{
		printf("notn open file");
	}
	else
	{
		printf("Enter Any Value=>");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("successfully data");
		
		fclose(p);
	} 
	printf("\n==============================================\n");
    	p = fopen("PR=10,smit.txt","r");
	
	if(p == NULL)
	{
		printf("notn open file");
	}
	else
	{
		while(fgets(data,50,p)!=NULL)
		{
			printf("%s",data);
			
		}
		
		fclose(p);
    } 
}
