#include <stdio.h>
int main()
{
	printf("-----------------------------\n\ttables maker v0.1\n-----------------------------");	

	FILE *tables=fopen("data.txt","w");/*opened a file called name.txt */

	int table,a,max=10,store;

	if(tables != NULL){printf("/n");}else{printf("file not created dude check permissions");}

	printf("\nenter no of the table:");
	scanf("%d",&table);
	printf("enter untill u want the table:");
	scanf("%d",&max);

	for(a=1;a<=max;a++){
	store=table*a;
	printf("\n%d * %d = %d",table,a,store);
	fprintf(tables,"\n%d * %d = %d",table,a,store);
	
	}
	
	
	printf("\n\n\n dude all the out put is printed to data.txt check it\n\n");
	return 0;

}

