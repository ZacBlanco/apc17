#include <stdlib.h>
#include <stdio.h>
#include <mpi.h>

#define N 60

int main(int argc, char *argv[])
{

    int i, my_id, num_procs, num_elem;
    int array[N], array_final[N];
    int *array_recv;

    MPI_Init(&argc, &argv);                    /* starts MPI */
    MPI_Comm_rank(MPI_COMM_WORLD, &my_id);     /* get current process id */
    MPI_Comm_size(MPI_COMM_WORLD, &num_procs); /* get number of processes */

    /* proc 0 initializes the principal array */
    if (my_id == 0)
    {
        for (i = 0; i < N; i++)
            array[i] = i;
    }

    num_elem = N / num_procs;
    if (my_id < (N % num_procs))
        num_elem = num_elem + 1;

    array_recv = (int *)malloc(num_elem * sizeof(int));

    // Write the code to complete the exercise below.


    MPI_Finalize();
    return 0;
}