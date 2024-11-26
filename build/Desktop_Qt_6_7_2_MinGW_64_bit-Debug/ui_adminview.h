/********************************************************************************
** Form generated from reading UI file 'adminview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINVIEW_H
#define UI_ADMINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_adminview
{
public:

    void setupUi(QDialog *adminview)
    {
        if (adminview->objectName().isEmpty())
            adminview->setObjectName("adminview");
        adminview->resize(400, 300);

        retranslateUi(adminview);

        QMetaObject::connectSlotsByName(adminview);
    } // setupUi

    void retranslateUi(QDialog *adminview)
    {
        adminview->setWindowTitle(QCoreApplication::translate("adminview", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminview: public Ui_adminview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINVIEW_H
