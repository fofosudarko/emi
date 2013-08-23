// File: emi_funcs.c - emi program utility functions

#include <stdio.h>
#include "emi.h"

/* compute_actual_end_of_sem: compute the actual end of sem exams score worth 70% */
float compute_actual_end_of_sem (float part_a, float part_b)
{
    return (((part_a / 30) * 25) + part_b);
}

/* compute_actual_total: compute 100% score given continuous score and actual end of sem score */
float compute_actual_total (float continuous_score, float actual_end_of_sem)
{
    return (continuous_score + actual_end_of_sem);
}

/* compute_end_of_sem: compute the end of sem exams score worth (50% + 20%) */
float compute_end_of_sem (float end_of_sem)
{
    return (((end_of_sem / 70) * 50) + 20);
}

/* compute_total: compute 100% score given continuous score and end of sem score */
float compute_total (float continuous_score, float end_of_sem)
{
    return (continuous_score + end_of_sem);
}

/* execute_main: execute main body */
void execute_main (const char *filename)
{
    FILE *file;
    file = fopen (filename, "a+");

    int index_number = 0; printf ("Enter index number: "); scanf ("%d", &index_number);
    float continuous_score = 0; printf ("Enter 30%% score: "); scanf ("%f", &continuous_score);
    float part_a = 0; printf ("Enter Part A score: "); scanf ("%f", &part_a);
    float part_b = 0; printf ("Enter Part B score: "); scanf ("%f", &part_b);
    float actual_end_of_sem = compute_actual_end_of_sem (part_a, part_b);
    float end_of_sem = compute_end_of_sem (actual_end_of_sem);
    
		printf ("INDEX NUMBER = %8d.\n", index_number);
    printf ("CONTINUOUS SCORE(30%%) = %6.2f.\nACTUAL END OF SEM(70%%) = %6.2f. ", continuous_score, actual_end_of_sem);
    printf ("ACTUAL TOTAL(100%%) = %6.2f.\n", compute_actual_total (continuous_score, actual_end_of_sem));
    printf ("END OF SEM(50%% + 20%%) = %6.2f. TOTAL(100%%) = %6.2f.\n", end_of_sem, compute_total (continuous_score, end_of_sem));
    write_results_to_file (filename, index_number, continuous_score, actual_end_of_sem, end_of_sem);
    fclose (file);
}
