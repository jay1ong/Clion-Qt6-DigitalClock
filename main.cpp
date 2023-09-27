#include <QApplication>
#include "digitalclock.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    DigitalClock w;
    w.show();
    return QApplication::exec();
}
