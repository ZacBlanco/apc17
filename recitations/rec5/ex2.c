#include <stdlib.h>
#include <stdio.h>
#include <mpi.h>

/* #define ndata 1000 */
#define ndata 1000000

int main(int argc, char *argv[])
{

    int i = 0, left, right;
    MPI_Status status;
    MPI_Request request;
    int my_rank, nprocs;

    float a[ndata];
    float b[ndata];

    MPI_Init(&argc, &argv);

    /* Initialize data */
    for (i = 0; i < ndata; ++i)
    {
        a[i] = me;
        b[i] = -1;
    }

    printf("\tI am task %d and I have received b(0) = %1.2f \n", me, b[0]);

    MPI_Finalize();
    return 0;
}