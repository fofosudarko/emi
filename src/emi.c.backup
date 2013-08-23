/*
	File: emi.c - emi program
	copyright 2013 - code.ricks@gmail.com
	Program that processes continuous assessment score and raw exam score of course students and records results to file for the purpose of analysis.
*/

#include <stdio.h>
#include "emi.h"

const int len = 97;

int main () 
{
    const string filename = "../bin/txt/test.txt";
#ifdef HEADING_H
    write_filename (filename);
    write_heading_to_file (filename, len);
#endif
#ifdef BODY_H
    execute_main (filename);
#endif
#ifdef END_H
    write_end_to_file (filename, len);
#endif
    return 0;
}
