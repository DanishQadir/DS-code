#include <iostream>
 using namespace std;
class Exam
{
private:
    int m_id;
    std::string m_name;
 
public:
    Exam(int id, const std::string &name)
        : m_id(id), m_name(name)
    {
        std::cout << "Constructor called\n";
    }
 
    ~Exam()
    {
        std::cout << "Destructor called\n";
    }
 
    Exam(const Exam &other)
    {
        // Shallow copy: just copy the pointer
        m_id = other.m_id;
        m_name = other.m_name;
 
        std::cout << "Copy constructor called\n";
    }
 
    Exam& operator=(const Exam &other)
    {
        // Shallow copy: just copy the pointer
        m_id = other.m_id;
        m_name = other.m_name;
 
        std::cout << "Assignment operator called\n";
        return *this;
    }
};
 
int main()
{
    Exam ex1(1, "Exam 1");
    Exam ex2 = ex1;
 
    return 0;
}
