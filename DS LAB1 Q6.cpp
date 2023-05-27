#include<iostream>
#include<string>

class Student
{
    private:
        std::string name;
        int age;
        int rollNo;
    public:
        Student()
        {
            name="";
            age=0;
            rollNo=0;
        }
        Student(std::string name, int age, int rollNo)
        {
            this->name=name;
            this->age=age;
            this->rollNo=rollNo;
        }
        void setName(std::string name)
        {
            this->name=name;
        }
        void setAge(int age)
        {
            this->age=age;
        }
        void setRollNo(int rollNo)
        {
            this->rollNo=rollNo;
        }
        std::string getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
        int getRollNo()
        {
            return rollNo;
        }
};

int main()
{
    Student *s = new Student[6];  // Dynamic memory Allocation
    return 0;
}
