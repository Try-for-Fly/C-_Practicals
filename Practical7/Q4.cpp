#include <iostream>

using namespace std;

class StudentMarks 
{
    private:
        int maths_marks;
        int english_marks;
        int science_marks;
        
    public:
        StudentMarks() 
		{
            maths_marks = 0;
            english_marks = 0;
            science_marks = 0;
        }
        
        // selector methods
        int getMathsM() { return maths_marks; }
        int getEnglishM() { return english_marks; }
        int getScienceM() { return science_marks; }
        
        // modifier methods
        void setMathsMarks(int grade_in) { maths_marks = grade_in; }
        void setEnglishMarks(int grade_in) { english_marks = grade_in; }
        void setScienceMarks(int grade_in) { science_marks = grade_in; }
        
        // operator overloading
        StudentMarks operator+(StudentMarks obj) 
		{
            StudentMarks res;
            res.maths_marks = maths_marks + obj.maths_marks;
            res.english_marks = english_marks + obj.english_marks;
            res.science_marks = science_marks + obj.science_marks;
            return res;
        }
};

int main() {
    StudentMarks student1, student2, student3, total;
    
    student1.setMathsMarks(50);
    student1.setEnglishMarks(60);
    student1.setScienceMarks(70);
    
    student2.setMathsMarks(60);
    student2.setEnglishMarks(70);
    student2.setScienceMarks(80);
    
    student3.setMathsMarks(40);
    student3.setEnglishMarks(30);
    student3.setScienceMarks(80);
    
    total = student1 + student2 + student3;
    
    cout << "Total Maths Marks: " << total.getMathsM() << endl;
    cout << "Average Maths Marks: " << total.getMathsM() / 3 << endl;
    
    cout << "Total English Marks: " << total.getEnglishM() << endl;
    cout << "Average English Marks: " << total.getEnglishM() / 3 << endl;
    
    cout << "Total Science Marks: " << total.getScienceM() << endl;
    cout << "Average Science Marks: " << total.getScienceM() / 3 << endl;
    return 0;
}
