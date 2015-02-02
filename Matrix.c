// --------------
// Matrix.c
// --------------


#include <stdlib.h>     /* srand, rand */
#include <stdio.h>
#include <sys/ioctl.h>

char randomeCharacterGenerator ();
char randomCharacterGenerator ()
{
	return (char)(rand() % 67 + 67);
}

int main (int argc, char* argv[]) {
	// int n = 1;
	// printf("HERE\n");
	// struct winsize max;
	// printf("HERE1\n");
 //    ioctl(0, TIOCGWINSZ , &max);
 //    printf("HERE2\n");
 //    int columns = 0;
 //    // printf ("lines %d\n", max.ws_row);
 //    // printf ("columns %d\n", max.ws_col);
 //    printf("HERE3\n");
 //    //columns = max.ws_col;
 //    while (n > 0)
 //    {
 //    	printf("HERE4\n");
 //    	printf ("%s\n", randomLineGenerator (max.ws_col));
 //    	printf("HERE5\n");
 //    }
 //    return 0;
   struct winsize ws;
   ioctl(0, TIOCGWINSZ, &ws);

   int i=0;
   for(;i<10*ws.ws_col;) printf("%c", randomCharacterGenerator());
   printf("\n");
   return 0;
}



