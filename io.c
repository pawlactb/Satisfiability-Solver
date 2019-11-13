#include "io.h"
#include <stdio.h>

void read_file(const char *filename)
{
    FILE *ifp = fopen(filename, "r");
    if (ifp != NULL)
    {
        char *line = NULL;
        size_t len = 0;

        //read number of switches
        getline(&line, &len, ifp);
        int number_switches = atoi(line);
        printf("Number Switch(es): %d\n", atoi(line));

        //read number of lightbulbs
        getline(&line, &len, ifp);
        int number_lightbulbs = atoi(line);
        printf("Number Lightbulb(s): %d\n", atoi(line));

        fclose(ifp);
    }
}