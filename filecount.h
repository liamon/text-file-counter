#ifndef FILECOUNT_H
#define FILECOUNT_H

#include <stdbool.h>

bool checkArgs(char *arg, int argc, char **argv);

/* My original version had these functions returning void and printing the result
at the end. However, for GitHub I decided to change them to returning size_t.
This would be preferable in a real-world situation due to being more extensible.
*/
size_t lines(FILE *fp);
size_t bytes(FILE *fp);
size_t chars(FILE *fp);

#endif /* End of include guard. */
