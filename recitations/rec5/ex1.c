#include <stdlib.h>
#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[])
{

    int myrank;
    int num_procs;
    MPI_Init(&argc, &argv);

    /* Write MPI Code Here */

    printf("I am process %i from a total of %i processes\n", myrank, numprocs);
    MPI_Finalize();
    return 0;
}