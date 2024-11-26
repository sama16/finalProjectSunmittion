/********************************************************************************
** Form generated from reading UI file 'welcomeview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEVIEW_H
#define UI_WELCOMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_welcomeview
{
public:

    void setupUi(QDialog *welcomeview)
    {
        if (welcomeview->objectName().isEmpty())
            welcomeview->setObjectName("welcomeview");
        welcomeview->resize(400, 300);

        retranslateUi(welcomeview);

        QMetaObject::connectSlotsByName(welcomeview);
    } // setupUi

    void retranslateUi(QDialog *welcomeview)
    {
        welcomeview->setWindowTitle(QCoreApplication::translate("welcomeview", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomeview: public Ui_welcomeview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEVIEW_H
