#include "stdafx.h"
#include <iostream>

using namespace std;

//This program calculates your GPA

int _tmain(int argc, _TCHAR* argv[])
{
    cout << "How many classes do you have?\n";
    int numberClasses;
    cin >> numberClasses;
    double total = 0;
    int percent = 0;
    int i = 0;
    for (i = 0; i < numberClasses; i++) {
        cout << "What percentage did you recieve in the class? \n";
        cin >> percent;
        if (percent >= 100 && percent >= 94){
            total += 4;
        }
        else if (percent >= 93 && percent >= 90) {
            total += 3.7;
        }
        else if (percent >= 89 && percent >= 87) {
            total += 3.33;
        }
        else if (percent >= 86 && percent >= 83) {
            total += 3;
        }
        else if (percent >= 82 && percent >= 80) {
            total += 2.7;
        }
        else if (percent > 79 && percent >= 77) {
            total += 2.3;
        }
        else if (percent > 76 && percent >= 73) {
            total += 2;
        }
        else if (percent > 72 && percent >= 70) {
            total += 1.7;
        }
        else if (percent > 69 && percent >= 67) {
            total += 1.3;
        }
        else if (percent > 66 && percent >= 63) {
            total += 1;
        }
        else if (percent > 62 && percent >= 60) {
            total += 0.7;
        }
        else if (percent > 60) {
            total += 0;
        }
    }
    double gpa = total / numberClasses;
    cout << gpa;
    return 0;
}
