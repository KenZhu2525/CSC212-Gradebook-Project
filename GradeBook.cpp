#include "GradeBook.h"
#include <iostream>
#include <vector>

//declare function
void GradeBook::finalGrade(double lab_sum, double hw_sum, double project_grade, double_exam_grade, double review_grade){

GradeBook::GradeBook(){

    // enter lab grades
    cout << "Enter 10 lab grades, each out of 100 points: " << endl;
    // lab grades entered in a while loop
    int n = 0;
    while (n < 10){
        cin >> lab_grade;
        // push grades to vector
        this->lab_grades_vector();
        n++;
    }
    //find lab grade sum
    lab_sum = 0;
    for(int i = 0; i++; i <10){
        lab_sum += lab_grades_vector[i];
    }

    // enter programming assignment grades
    cout << "Enter 5 programming assignment grades, each out of 100 points: " << endl;
    // programming assignment grades entered in a while loop
    int m = 0;
    while (m < 5){
        cin >> hw_grade;
        // push grades to vector
        this->hw_grades_vector();
        m++;
    }
    //find programming assignment sum
    hw_sum = 0;
    for(int i = 0; i++; i < 5){
        hw_sum += hw_grades_vector[i];
    }

    // enter term project grade
    cout << "Enter term project grade out of 100 points: " << endl;
    cin >> project_grade;

    // enter final exam grade
    cout << "Enter final exam grade out of 100 points: " << endl;
    cin >> exam_grade;

    // enter MEC review project grade
    cout << "Enter review project grade out of 100 points: " << endl;
    cin >> review_grade;

    finalGrade(double lab_sum, double hw_sum, double project_grade, double_exam_grade, double review_grade);
}

// calculate the final grade
void GradeBook::finalGrade(double lab_sum, double hw_sum, double project_grade, double_exam_grade, double review_grade){

    //calculation
    int final_grade = (lab_sum * 0.05) + (hw_sum * 0.50) + (project_grade * 0.35) + (exam_grade * 0.10) + (review_grade * 0.03)

    //letter grade output
    if(final_grade >= 94){
        cout << "Your final grade is an A";
    }
    else if (final_grade <= 93 && final_grade >= 90){
        cout << "Your final grade is an A-";
    }
    else if (final_grade <= 89 && final_grade >= 87){
        cout << "Your final grade is an B+";
    }
    else if (final_grade <= 86 && final_grade >= 83){
        cout << "Your final grade is an B";
    }
    else if (final_grade <= 82 && final_grade >= 80){
        cout << "Your final grade is an B-";
    }
    else if (final_grade <= 79 && final_grade >= 77){
        cout << "Your final grade is an C+";
    }
    else if (final_grade <= 76 && final_grade <= 73){
        cout << "Your final grade is an C";
    }
    else if (final_grade <= 72 && final_grade >= 70){
        cout << "Your final grade is an C-";
    }
    else if (final_grade <= 70 && final_grade >= 67){
        cout << "Your final grade is an D+";
    }
    else if (final_grade <= 66 && final_grade >= 60){
        cout << "Your final grade is an D";
    }
    else if (final_grade < 60){
        cout << "Your final grade is an F";
    }

    //numeric grade output
    cout << " with a numeric grade of " << final_grade << endl;

}
