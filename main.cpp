#include <QCoreApplication>
#include "unit.h"
#include "pudg.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Unit *u1 = new Unit();
    Unit *u2 = new pudg();

    for (int i=0; i<10; i++){
        u1->attack(*u2);
        u2->spell_1(*u1);
        cout<< u1->name << ": " << u1->health <<" ||"<<u2->name << ": "<< u2->health <<endl;
        if (u1->health<=0 || u2->health<=0){
            cout<<"FINISH "<< u1->health<<" ||" << u2->health <<endl;

            if (u1->health > 0){
                cout<< u1->name << " win" << endl;
            }
            else{
                    cout << u2->name <<  "  win" << endl;
                    ;
            }
            break;
        }
    }

    return a.exec();
}
