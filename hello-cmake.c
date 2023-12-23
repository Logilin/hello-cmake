// Fichier source d'exemple du cours en ligne "Linux embarqué avec Yocto"
//
// https://www.blaess.fr/christophe/yocto-lab/
//
// Christophe BLAESS 2018.
//
// Licence GPL.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/param.h>

#ifndef MAXHOSTNAMELEN
#define MAXHOSTNAMELEN  64
#endif

int main(void)
{
	char hostname[MAXHOSTNAMELEN];

	gethostname(hostname, MAXHOSTNAMELEN);
	hostname[MAXHOSTNAMELEN - 1] = '\0';

	fprintf(stdout, "Hello from %s (built with CMake)\n", hostname);

	return EXIT_SUCCESS;
}


