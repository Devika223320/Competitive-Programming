#include<stdio.h>
int main(void) 
{
	int n,b,c,a;
	char str1[5],str2[5],str3[5];
	scanf("%d",&n);
	printf("%d",n);
	scanf("%d %d %d",&a,&b,&c);
	printf(" \n %d %d %d",a,b,c);
	scanf("%s %s %s",&str1,&str2,&str3);
	printf("\n %s %s %s",str1,str2,str3);
	for (int i=1; i<=100; i++) 
    { 
        if ((i%a) == 0)     
            printf(" %s\t",str1);
        else if ((i%b) == 0)                        
            printf(" %s\t",str2); 
        else if ((i%c) == 0)                        
            printf(" %s\t",str3); 
        else             
            printf("%d\t",i);                  
    } 
    return 0;
}