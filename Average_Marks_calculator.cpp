#include <iostream>

using namespace std;

int main()
{
    double sum = 0;
    double mark;
    double average;
    int count = 0;

    for(int k =0; k < 5; k++){
        cout << "Enter the student's mark " << (k + 1) << ": ";
        cin >> mark;

        if(mark >= 40){
            count++;
        else{
            cout << "Sorry!!, You do not Qualify for an exam, Try next time!!"
        }
        }
        sum += mark;
    }

    average = sum / 5.0;
    cout << "The average is: " << average << endl;
    cout << "The student: " << count << " Qualifies!" << endl;

    return 0;
}
