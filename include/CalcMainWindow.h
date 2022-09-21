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
    CalcMainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {}

public slots:
    void add(){
        bool ok;
        int num1 = lineEdit1->text().toInt(&ok);
        if (!ok) {
            lineResult->setText("Error");
            return;
        }
        int num2 = lineEdit2->text().toInt(&ok);
        if (!ok) {
            lineResult->setText("Error");
            return;
        }
        QString result = QString::number(num1 + num2);
        lineResult->setText(result);
    };
    void sub(){
        bool ok;
        int num1 = lineEdit1->text().toInt(&ok);
        if (!ok) {
            lineResult->setText("Error");
            return;
        }
        int num2 = lineEdit2->text().toInt(&ok);
        if (!ok) {
            lineResult->setText("Error");
            return;
        }
        QString result = QString::number(num1 - num2);
        lineResult->setText(result);

    };
    void mult(){
        bool ok;
        int num1 = lineEdit1->text().toInt(&ok);
        if (!ok) {
            lineResult->setText("Error");
            return;
        }
        int num2 = lineEdit2->text().toInt(&ok);
        if (!ok) {
            lineResult->setText("Error");
            return;
        }
        QString result = QString::number(num1 * num2);
        lineResult->setText(result);

    };
    void div(){
        bool ok;
        int num1 = lineEdit1->text().toInt(&ok);
        if (!ok) {
            lineResult->setText("Error");
            return;
        }
        int num2 = lineEdit2->text().toInt(&ok);
        if (!ok) {
            lineResult->setText("Error");
            return;
        }
        QString result = QString::number(num1 / num2);
        lineResult->setText(result);

    };
    void clear() {
        lineEdit1->setText("");
        lineEdit2->setText("");
        lineResult->setText("");
    }
};

#endif //INC_37_1_CALCMAINWINDOW_H
