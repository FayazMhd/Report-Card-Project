//
// Created by Fayaz on 2022-11-06.
//

#include <stdio.h>



struct courseRecords{                                                                     // course record struct contains 2 members
    char courseName[21];
    float mark;
};

struct studentRecords {                                                                   // student record struct contains 5 members
    int studentID;
    char firstName[21];
    char lastName[21];
    struct courseRecords courseRecord[5];
    float averageMark;
};

void create_record( struct studentRecords * records);                                     // a function to create record
void average_Mark( struct studentRecords * records);                                      // a function to calculate average mark
void report_card ( struct studentRecords * records);                                      // a function to create report card

#ifndef ASSIGN3_STUDENTRECORD_H
#define ASSIGN3_STUDENTRECORD_H

#endif //ASSIGN3_STUDENTRECORD_H
