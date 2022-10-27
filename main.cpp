// driver program that takes CLAs and uses the class Gradebook to generate output

#include <iostream>
#include "GradeBook.h"
#include <vector>
using namespace std;

int main() {

    // take in grade inputs

    // enter lab grades
    cout << "Enter 10 lab grades, each out of 100 points: " << endl;
    // lab grades entered in a while loop
    vector<double> lab_grades_vector;
    double lab_grade;
    int n = 0;
    while (n < 10){
        cin >> lab_grade;
        // push grades to vector
        lab_grades_vector.push_back(lab_grade);
        n++;
    }

    // enter programming assignment grades
    cout << "Enter 5 programming assignment grades, each out of 100 points: " << endl;
    // programming assignment grades entered in a while loop
    vector<double> hw_grades_vector;
    double hw_grade;
    int m = 0;
    while (m < 5){
        cin >> hw_grade;
        // push grades to vector
        hw_grades_vector.push_back(hw_grade);
        m++;
    }

    // enter term project grade
    double project_grade;
    cout << "Enter term project grade out of 100 points: " << endl;
    cin >> project_grade;

    double exam_grade;
    // enter final exam grade
    cout << "Enter final exam grade out of 100 points: " << endl;
    cin >> exam_grade;

    double review_grade;
    // enter MEC review project grade
    cout << "Enter review project grade out of 100 points: " << endl;
    cin >> review_grade;

    // call GradeBook constructor
    Gradebook gradebook(exam_grade, project_grade, review_grade, lab_grades_vector, hw_grades_vector);

    return 0;
}
