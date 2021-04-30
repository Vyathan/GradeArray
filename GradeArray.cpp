// Matt Brundage II
// 4/30/21
// GradeArray.cpp
// Program to calculate average test grade

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototype
void displayArray(int grades[], int numElements);
double getAverage(int grades[], int numElements);

int main()
{
    //Declare Variables
    int grades[10] = {0};

    //Store Data in Array
    for (int sub = 0; sub < 10; sub += 1)
    {
        cout << "Please Enter Grade " << sub + 1 << ": ";
        cin >> grades[sub];
    } //End For

    //Display Array
    displayArray(grades, 10);

    //Calculate Average Score
    getAverage(grades, 10);

    //Display Completion
    cout << "Test Score Program Completed" << endl;

    return 0;
} //End of Main Function

//*****Function Definitions*****
void displayArray(int grades[], int numElements)
{
    cout << endl << "Grades: " << endl;
    for (int sub = 0; sub < 10; sub += 1)
        cout << "Test Grade " << sub + 1
        << ": " << grades[sub] << endl;
    //End For
} //End displayArray Function

double getAverage(int grades[], int numElements)
{
    double total = 0.0;

    //Accumualte Array 
    for (int sub = 0; sub < numElements; sub += 1)
        total += grades[sub];
    //End For

    //Calculate and Return Average
    return static_cast<double>(total) / numElements;

} //End of getAverage Function
