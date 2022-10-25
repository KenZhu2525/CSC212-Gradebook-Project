#pragma once
#include <iostream>
#include <vector>
using namespace std;

class GradeBook {
private:
    // variables used in GradeBook
    double lab_grade;
    double hw_grade;
    double exam_grade;
    double project_grade;
    double review_grade;
    vector<double> lab_grades_vector;
    vector<double> hw_grades_vector;

public:
    // GradeBook Contructor
    GradeBook();
};
