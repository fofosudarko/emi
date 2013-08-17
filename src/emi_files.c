// File: ee288_files.c - ee288 program file functions

#include <stdio.h>
#include "emi.h"

/* f_underline: underline string of characters */
void f_underline(const char *filename, char line, const int strlen) {
    FILE *file;
    file = fopen(filename, "a+");
    for (int i = 0; i < strlen; i++) fprintf(file, "%c", line);
    fprintf(file, "\n");
    fclose(file);
}

/* write_variables_to_file: write results to file */
void write_variables_to_file(const char *filename, int index_number, float continuous_score, float actual_end_of_sem, float end_of_sem) {
    FILE *file;
    file = fopen(filename, "a+");
    fprintf(file, "|    %7d   |   %6.2f   |      %6.2f       |    %6.2f    |     %6.2f       |    %6.2f   |\n",
        index_number,
        continuous_score,
        actual_end_of_sem,
        compute_actual_total(continuous_score, actual_end_of_sem),
        end_of_sem,
        compute_total(continuous_score, end_of_sem)
    );
    fclose(file);
}

/* write_filename: write filename to file */
void write_filename(const string filename) {
    FILE *file;
    file = fopen(filename, "a+");
    fprintf(file, "File: %s\n\n\n", filename);
    fclose(file);
}

/* write_heading_to_file: write heading to file */
void write_heading_to_file(const char *filename, int len) {
    FILE *file;
    f_underline(filename, '-', len);
    file = fopen(filename, "a+");
    fprintf(file, "| %s | %s | %s | %s |    %s    |    %s    |\n",
        "INDEX NUMBER",
        "CONTINUOUS",
        "ACTUAL END OF SEM",
        "ACTUAL TOTAL",
        "END OF SEM",
        "TOTAL"
    );
    fprintf(file, "| %s | %s |     %s    | %s  | %s | %s |\n",
        "            ",
        "SCORE(30%)",
        "SCORE(70%)",
        "SCORE(100%)",
        "SCORE(50% + 20%)",
        "SCORE(100%)"
    );
    fclose(file);
    f_underline(filename, '-', len);
}

/* write_end_to_file: close data table */
void write_end_to_file(const char *filename, int len) {
    f_underline(filename, '-', len);
}
