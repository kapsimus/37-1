//
// Created by avz on 20.09.2022.
//

#ifndef INC_37_1_CALCMAINWINDOW_H
#define INC_37_1_CALCMAINWINDOW_H
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QRegExp>

class CalcMainWindow : public QMainWindow {
    Q_OBJECT

public:
    QLineEdit *lineEdit1 = nullptr, *lineEdit2 = nullptr, *lineResult = nullptr;
    CalcMainWindow(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *event) override;

public slots:
    void add();
    void sub();
    void mult();
    void div();
    void clear();
};

#endif //INC_37_1_CALCMAINWINDOW_H
