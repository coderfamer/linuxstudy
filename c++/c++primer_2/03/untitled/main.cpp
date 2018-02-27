#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <QVector>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QVector<int> aa;
    for (int i=0; i<4; i++)
    {
        aa.append(i);
    }


    w.show();

    return a.exec();
}
