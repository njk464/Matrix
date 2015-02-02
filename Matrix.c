// --------------
// Matrix.c
// --------------


#include <stdlib.h>     /* srand, rand */
#include <stdio.h>

char * randomeCharacterGenerator ();
char * randomLineGenerator (int width)
{
	char* line = "";
	while (width > 0)
	{
		width--;
		line += (char)(rand() % 67 + 67);
	}
	return line;
}

int main () {
	int n = 1;
    while (n > 0)
    {
    	printf ("%s\n", randomLineGenerator (10));
    }
    return 0;
}



