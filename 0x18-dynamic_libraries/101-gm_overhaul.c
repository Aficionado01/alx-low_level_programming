#include <stdlib.h>
#include <unistd.h>

/**
 * srand - Overwrites the srand function in the libc shared object
 * @seed: The seed to use for the random number generator. [Will be Ignored]
 */
void srand(unsigned int seed)
{
	const char *txt = "--> Please make me win!\n";

	(void)seed;
	write(STDOUT_FILENO, (void *)txt, 24);
	exit(EXIT_SUCCESS);
}
