// implementation of all methods defined in Gradebook.h

#include "GradeBook.h"
#include <iostream>
#include <vector>
using namespace std;

// declare functions
void final_grade(double lab_avg, double hw_avg, double project_grade, double exam_grade, double review_grade);

// main gradebook function
Gradebook::Gradebook(double exam_grade, double project_grade, double review_grade, vector<double> lab_grades_vector, vector<double> hw_grades_vector){

    // find lab grade sum
    double lab_sum = 0;
    for(int i = 0; i < 10; i++){
        lab_sum += lab_grades_vector[i];
    }
    // find lab average
    double lab_avg = lab_sum / 10;

    // find programming assignment sum
    double hw_sum = 0;
    for(int i = 0; i < 5; i++){
        hw_sum += hw_grades_vector[i];
    }
    // find programming assignment average
    double hw_avg = hw_sum / 5;

    // output final grade
    final_grade (lab_avg, hw_avg, project_grade, exam_grade, review_grade);
}

// calculate the final grade
void final_grade (double lab_avg, double hw_avg, double project_grade, double exam_grade, double review_grade){

    // grade calculation
    int final_grade = (lab_avg * 0.05) + (hw_avg * 0.5) + (project_grade * 0.35) + (exam_grade * 0.1) + (review_grade * 0.04);

    // letter grade output
    if(final_grade >= 94){
        cout << "Your final grade is an A";
    }
    else if (final_grade >= 90){
        cout << "Your final grade is an A-";
    }
    else if (final_grade >= 87){
        cout << "Your final grade is an B+";
    }
    else if (final_grade >= 83){
        cout << "Your final grade is an B";
    }
    else if (final_grade >= 80){
        cout << "Your final grade is an B-";
    }
    else if (final_grade >= 77){
        cout << "Your final grade is an C+";
    }
    else if (final_grade >= 73){
        cout << "Your final grade is an C";
    }
    else if (final_grade >= 70){
        cout << "Your final grade is an C-";
    }
    else if (final_grade >= 67){
        cout << "Your final grade is an D+";
    }
    else if (final_grade >= 60){
        cout << "Your final grade is an D";
    }
    else if (final_grade > 0){
        cout << "Your final grade is an F";
    }

    // numeric grade output
    cout << " with a numeric grade of " << final_grade << endl;

}
