#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count;
	
	for(count=1; count<=1000;	count++)
	{
		int n=count;
		int r=0;
		int toplam=0;
		for(; n>0; )
		{
			r=n%10;
			toplam=toplam+(r*r*r);
			n=n/10;
			
		}
		
		if(toplam<count || toplam>count)
		{
			printf("%d \n",count);
		}
	
	}
}

