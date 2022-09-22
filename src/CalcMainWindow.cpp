#include "CalcMainWindow.h"

CalcMainWindow::CalcMainWindow(QWidget *parent) : QMainWindow(parent) {}

void CalcMainWindow::resizeEvent(QResizeEvent *event) {
    QFont lineEditFont;
    QFont font;
    lineEditFont.setPixelSize(this->size().height() / 10);
    lineEdit1->setFont(lineEditFont);
    lineEdit2->setFont(lineEditFont);
    lineResult->setFont(lineEditFont);
    font.setPixelSize(this->size().height() / 15 + 5);
    setFont(font);
}

void CalcMainWindow::add(){
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

void CalcMainWindow::sub(){
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

void CalcMainWindow::mult(){
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

void CalcMainWindow::div(){
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

void CalcMainWindow::clear() {
    lineEdit1->setText("");
    lineEdit2->setText("");
    lineResult->setText("");
}