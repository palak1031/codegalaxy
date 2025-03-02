#include<iostream>
using namespace std;
class student
{
    int rno;
    char ename[30];
    float perc;

    public:
    void acceptdata();
    void displaydata();
};
void student::acceptdata(){
    cout<<"enter roll no:";
    cin>>rno;
    cout<<"enter ename:";
    cin>>ename;
    cout<<"enter percentage";
    cin>>perc;
}
void student::displaydata()
{
    cout<<"rollno:"<<rno;
    cout<<"name:"<<ename;
    cout<<"percentage:"<<perc;

}





