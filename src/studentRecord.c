#include "../inc/studentRecord.h"


//
// Created by Fayaz on 2022-11-06.
//


void create_record( struct studentRecords * records){                                                                                                     // a function to create record

    printf("Please enter the Student ID: \n");                                                                                                            // prompts user to enter student id
    scanf("%d", &records->studentID);                                                                                                                     // scans user id into records as student id
    printf("Please enter the last name for student %d: \n", records->studentID);                                                                          // prompts user for last name
    scanf("%s", &records->lastName);                                                                                                                      // scans last name and records as last name
    printf("Please enter the first name for student %d: \n", records->studentID);                                                                         // prompts user for first name
    scanf("%s", &records->firstName);                                                                                                                     // scans user input and records as first name

    for (int i = 0; i < 5 ; i++) {                                                                                                                        // for loop runs 5 times to record 5 course records
        printf("Please enter the course name: \n");                                                                                                       // prompts user for course name
        scanf("%s", &records->courseRecord[i].courseName);                                                                                                // scans user input and stores as course name in course record
        printf("Please enter the mark for %s: \n", records->courseRecord[i].courseName);                                                                  // prompts user to enter the mark
        scanf("%f", &records->courseRecord[i].mark);                                                                                                      // scans user input and stores as mark in course record
    }
}

void average_Mark( struct studentRecords * records) {                                                                                                     // a function to calculate average mark
    float total;                                                                                                                                          // declaring float variable
    for (int i = 0; i < 5; i++) {                                                                                                                         // for loop to calculate total
        total += records->courseRecord[i].mark;                                                                                                           // adds the marks for each course (finds total)
    }
    records->averageMark = total / 5;                                                                                                                     // calculating average mark (total/ number of courses)

}

void report_card ( struct studentRecords * records) {                                                                                                     // a function to create report card
    printf("\n\n\n");                                                                                                                                     // prints to create 3 line gap
    printf("Student: ID: %d                 Name: %s,%s\n",records->studentID, records->lastName, records->firstName);                                    // prints student id and name for report card
    printf("--------------------------------------------------------\n\n");

    for (int i = 0; i < 5; i++) {                                                                                                                         // for loop to print course record 5 times
        printf("Course name: %s                 Course mark: %.0f\n",records->courseRecord[i].courseName, records->courseRecord[i].mark);                 // prints course name and course mark
    }

    printf("\nGrade Average: %.1f\n\n\n", records->averageMark);                                                                                          // prints average mark of the 5 courses
}