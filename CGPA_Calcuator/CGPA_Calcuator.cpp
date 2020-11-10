

#include <iostream>
#include <string>

using namespace std;

void grade_out(string& subject, string grade, float cgpa);

float marks_validation(string& marks);


int main()
{
    string subject{}, marks{};
    float percentage{};
    cout << "Please Enter your subject: ";
    cin >> subject;
    cout << endl;
    
    percentage = marks_validation(marks);

    if (percentage >= 85)
    {
        grade_out(subject, "A", 4.00);
    }    
    else if (percentage >= 80)
    {
        grade_out(subject, "A-", 3.70);
    }    
    else if (percentage >= 75)
    {
        grade_out(subject, "B+", 3.30);
    }
    else if (percentage >= 70)
    {
        grade_out(subject, "B", 3.00);
    }
    else if (percentage >= 65)
    {
        grade_out(subject, "B-", 2.70);
    }
    else if (percentage >= 61)
    {
        grade_out(subject, "C+", 2.30);
    }
    else if (percentage >= 58)
    {
        grade_out(subject, "C", 2.00);
    }
    else if (percentage >= 55)
    {
        grade_out(subject, "C-", 1.70);
    }
    else if (percentage >= 50)
    {
        grade_out(subject,"D", 1.00);
    }
    else
    {
        grade_out(subject,"F", 0.00);
    }
    

}

float marks_validation(std::string& marks)
{
    while (true)
    {
        cout << "Please Enter your percentage: ";
        cin >> marks;
        cout << endl;
        for (size_t i = 0; i < marks.length(); i++)
        {
            if (isdigit(marks[i]) == 0) {
                continue;
            }
        }
        
        return stof(marks);
    }
}

void grade_out(string& subject, string grade, float cgpa)
{

    cout << "Your Grade for " << subject << " is: " << grade << endl;
    cout << "Your CGPA for " << subject << " is: " << cgpa << endl;
}

