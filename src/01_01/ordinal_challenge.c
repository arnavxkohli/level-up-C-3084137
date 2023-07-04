#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ordinal(int v)
{
	int modulo = v % 10;
	char *returnval = malloc(3);

	if(v>10 && v<21){
		strcpy(returnval, "th");
	} else if(modulo == 1){
		strcpy(returnval, "st");
	} else if(modulo == 2){
		strcpy(returnval, "nd");
	} else if(modulo == 3){
		strcpy(returnval, "rd");
	} else {
		strcpy(returnval, "th");
	}
	return returnval;
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for( c=1; c<=20; c++ )
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
				c, ordinal(c),
				c+20, ordinal(c+20),
				c+40, ordinal(c+40),
				c+60, ordinal(c+60),
				c+80, ordinal(c+80)
			  );
	}

	return(0);
}
