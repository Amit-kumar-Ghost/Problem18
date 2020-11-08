/*
 write a program that read  a sequence of grade (till -1 is entered ), and prints seperated by a space end you sequence by typing -1 


 example ::
      71 86 68 94 -1 (stop here )
      class average = 79.75


   ->>>>>   indicating the flag if flage = -1 break the loop 

*/
#include<iostream>
using namespace std;
int main() {
   
    int grade;
    cout << " Enter the grade separated by comma " << endl;
    cout << " End the sequence by typing -1 " << endl;
    int gradeSum = 0;
    int Aveggrade;
    bool flag;

    flag = false;
    int numstudents = 0;
    while (flag == false) {

        cin >> grade;
        if (grade == -1) {
            flag = true;
        }
        else {
            gradeSum += grade;
            numstudents++;
        }

    }

  
   
    Aveggrade = gradeSum / numstudents;
    cout << Aveggrade << endl;

    return 0;

}