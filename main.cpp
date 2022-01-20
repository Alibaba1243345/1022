#include <QCoreApplication>
#include "student.h"
#include "teacher.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Student s1;
    s1.print();

    Teacher s2;
    s2.print();

    return a.exec();
}
