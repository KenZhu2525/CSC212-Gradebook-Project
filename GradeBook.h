// class declaration

#pragma once
#include <iostream>
#include <vector>
using namespace std;

// function declarations
class GradeBook {

    private:
        // variables used in Gradebook
        double exam_grade;
        double project_grade;
        double review_grade;
        vector<double> lab_grades_vector;
        vector<double> hw_grades_vector;

    public:
        // Gradebook Contructor
        Gradebook(double exam_grade, double project_grade, double review_grade, vector<double> lab_grades_vector, vector<double> hw_grades_vector);

};
