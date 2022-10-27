# CSC212-Gradebook-Project

|      Name     |     Status    |
| ------------- | ------------- |
| Ken Zhu       | Member  |
| Emily Hogan   | Member  |
| Liam Dowen    | Member  |
| Matthew Gomez | Member  |




`GITHUB REPO ADDRESS:` https://github.com/KenZhu2525/CSC212-Gradebook-Project


## SUMMARY:
Create a working gradebook for the CSC212 Fall class that can output a final semester grade.

```
PSUDOCODE:

main:
//take in grade inputs
while there are less than 10 grades:
    - take lab grade input
    - add to vector of lab grades
while there are less than 5 grades:
    - take hw grade input
    - add to vector of hw grades
take final exam grade input
take term project grade input
take MEC grade input
call gradebook constructor

gradebook.ccp:
//calculate lab average
for each grade in lab grade vector:
    - add to sum
calculate average lab grade
//calculate hw average
for each grade in hw grade vector:
    - add to sum
calculate average hw grade
//calculate final grade
multiply grades by their weights and add to find final numeric grade
convert numeric grade to letter grade
output results

gradebook.h:
declare class
add variables to private
add functions to public
```

>DESCRIBE FEATURES OF THE ALGORITHM:

This algorithm takes in every grade of the course and outputs a final grade.


>HOW TO COMPILE ALGORITHM:

Program will ask the user to input 10 lab grades, each out of 100 points.
Then will ask the user to input 5 hw grades, each out of 100 points.
Then will ask the user to input their final exam grade.
Then will ask the user to input their term project grade.
Then will ask the user to input their MEC grade.
The program will then compile.



Video Guide: [Click Here](**YouTube link here**) <-- Github markdown syntax for hyperlink

SAMPLE DATASETS:

>Lab Grades
```
100 100 100 100 100 100 100 100 100 100
```

>Programming Assignments Grade
```
100 100 100 100 100
```

>Project Grade
```
100
```

>Final Exam Grade
```
100
```

>Review Project Grade
```
100
```

>OUTPUT
```
Your final grade is an A with a numeric grade of 104.
```

##### WORK LOG:
Ken, Emily, and Liam met 10/25 and worked together on building the framework for the program for 2 hours.
Emily debugged program for 2 hours on 10/26. (Fixed class constructor, fixed grade calculation equation, made program compilable, worked on ReadMe file)


>Initial plan of the program

A input prompt in the command line
Sample text: "Input the name of the grade type, to stop the program, type End" <-- A while loop that keeps going until the user types "End"

Function to calculate the grade.
  a vector that stores the grade for each grade types.
  a general formula to compute grades.

Function to calculate final grades
  a vector that stores each % of the grade type
  add all the % together
  
  //// Optional
  Spit out a letter grade based on the grading scheme. (this varies between class, e.g. some math classes has a C- grade for 60%)
  
  This program can only calculate grades for 1 class at a time.
  
