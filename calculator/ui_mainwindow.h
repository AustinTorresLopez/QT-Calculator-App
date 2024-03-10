/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *txtFirstNu;
    QLabel *txtSecondNu;
    QLabel *label_3;
    QLineEdit *txtFirstNum;
    QLineEdit *txtSecondNum;
    QPushButton *btnAdd;
    QPushButton *btnSubtract;
    QPushButton *btnDivide;
    QPushButton *btnMultiply;
    QLineEdit *txtResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(431, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txtFirstNu = new QLabel(centralwidget);
        txtFirstNu->setObjectName("txtFirstNu");
        txtFirstNu->setGeometry(QRect(60, 30, 101, 16));
        txtSecondNu = new QLabel(centralwidget);
        txtSecondNu->setObjectName("txtSecondNu");
        txtSecondNu->setGeometry(QRect(60, 80, 101, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 180, 101, 16));
        txtFirstNum = new QLineEdit(centralwidget);
        txtFirstNum->setObjectName("txtFirstNum");
        txtFirstNum->setGeometry(QRect(180, 30, 121, 31));
        txtSecondNum = new QLineEdit(centralwidget);
        txtSecondNum->setObjectName("txtSecondNum");
        txtSecondNum->setGeometry(QRect(180, 70, 121, 31));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(80, 120, 51, 32));
        btnSubtract = new QPushButton(centralwidget);
        btnSubtract->setObjectName("btnSubtract");
        btnSubtract->setGeometry(QRect(150, 120, 51, 32));
        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        btnDivide->setGeometry(QRect(210, 120, 51, 32));
        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        btnMultiply->setGeometry(QRect(280, 120, 51, 32));
        txtResult = new QLineEdit(centralwidget);
        txtResult->setObjectName("txtResult");
        txtResult->setGeometry(QRect(120, 170, 121, 31));
        txtResult->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 431, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        txtFirstNu->setText(QCoreApplication::translate("MainWindow", "First Number:", nullptr));
        txtSecondNu->setText(QCoreApplication::translate("MainWindow", "Second Number:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result: ", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSubtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
