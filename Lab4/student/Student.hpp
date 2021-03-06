#include <string>
#include <vector>

#include "../listaNote/ListaNote.hpp"
#include "../myLogger/MyLogger.hpp"

class Student
{
private:
    std::string m_name;
    std::vector<ListaNote> m_dataSet;
    SimpleLogger* m_MyLogger;
    
    Student( const Student& ); // non construction-copyable
    Student& operator=( const Student& ); // non copyable

public:
    Student(const std::string& name, std::vector<ListaNote> dataSet, SimpleLogger* logger);
    void showData();
};