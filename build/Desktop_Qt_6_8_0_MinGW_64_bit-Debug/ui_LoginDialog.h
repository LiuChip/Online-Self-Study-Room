/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwdLineEdit;
    QPushButton *LoginButton;
    QPushButton *SignupButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(200, 300);
        Dialog->setMinimumSize(QSize(200, 300));
        Dialog->setMaximumSize(QSize(200, 300));
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 80, 162, 201));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        usernameLineEdit = new QLineEdit(widget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setMinimumSize(QSize(160, 30));

        verticalLayout->addWidget(usernameLineEdit);

        passwdLineEdit = new QLineEdit(widget);
        passwdLineEdit->setObjectName("passwdLineEdit");
        passwdLineEdit->setMinimumSize(QSize(160, 30));

        verticalLayout->addWidget(passwdLineEdit);

        LoginButton = new QPushButton(widget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setMinimumSize(QSize(140, 20));
        LoginButton->setMaximumSize(QSize(140, 20));
        LoginButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        LoginButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(LoginButton);

        SignupButton = new QPushButton(widget);
        SignupButton->setObjectName("SignupButton");
        SignupButton->setEnabled(true);
        SignupButton->setMinimumSize(QSize(140, 20));
        SignupButton->setMaximumSize(QSize(140, 20));
        SignupButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(SignupButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        LoginButton->setText(QCoreApplication::translate("Dialog", "\347\231\273\351\231\206", nullptr));
        SignupButton->setText(QCoreApplication::translate("Dialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
