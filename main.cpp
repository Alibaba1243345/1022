#include <QCoreApplication>
#include "student.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Student s1;
    s1.print();

    return a.exec();
}
