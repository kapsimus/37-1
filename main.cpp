#include <QApplication>
#include "./ui_calc.h"
#include "CalcMainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.lineEdit1 = calc.lineEdit1;
    window.lineEdit2 = calc.lineEdit2;
    window.lineResult = calc.lineEdit3;
    window.show();
    return QApplication::exec();
}
