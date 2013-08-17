// File: emi.h - Header file

typedef char* string;

void f_underline(const char*,char,const int);

void underline(char,const int);

void write_filename(const string);

#ifdef HEADING_H
    void write_heading_to_file(const char*,int);
#endif

#ifdef BODY_H
    void execute_main(const char*);
#endif

void write_results_to_file(const char*,int,float,float,float);

#ifdef END_H
    void write_end_to_file(const char*,int);
#endif

float compute_actual_end_of_sem(float,float);

float compute_actual_total(float,float);

float compute_end_of_sem(float);

float compute_total(float,float);


