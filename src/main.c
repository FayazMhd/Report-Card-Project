#include "../inc/studentRecord.h"
//Author : Fayaz Mahmood :)

int main() {                                                                                                            //  a driver function
    struct studentRecords records[3];                                                                                   // declaring a struct student record list of size n = 3


    for (int i = 0; i < 3; i++) {                                                                                       // for loop runs 3 times for 3 records
        create_record(&records[i]);                                                                                     // calls create record function to create 3 records
        average_Mark(&records[i]);                                                                                      // calls average mark function to calculate average mark for each record
    }

    printf("***********************************REPORT CARDS***************************************");                   // prints the line

    for (int i = 0; i < 3; i++) {                                                                                       // for loop runs 3 times to print 3 records
        report_card(&records[i]);                                                                                       // calls report card function to print records of report card
    }
    return 0;
}
