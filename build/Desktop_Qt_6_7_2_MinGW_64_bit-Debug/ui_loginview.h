/********************************************************************************
** Form generated from reading UI file 'loginview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVIEW_H
#define UI_LOGINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_loginView
{
public:

    void setupUi(QDialog *loginView)
    {
        if (loginView->objectName().isEmpty())
            loginView->setObjectName("loginView");
        loginView->resize(400, 300);

        retranslateUi(loginView);

        QMetaObject::connectSlotsByName(loginView);
    } // setupUi

    void retranslateUi(QDialog *loginView)
    {
        loginView->setWindowTitle(QCoreApplication::translate("loginView", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginView: public Ui_loginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
