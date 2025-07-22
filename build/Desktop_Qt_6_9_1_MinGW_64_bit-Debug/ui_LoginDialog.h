/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLineEdit *usernameLineEdit;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *passwdLineEdit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *LoginButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *SignupButton;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->setWindowModality(Qt::WindowModality::NonModal);
        LoginDialog->resize(200, 300);
        LoginDialog->setMinimumSize(QSize(200, 300));
        LoginDialog->setMaximumSize(QSize(200, 300));
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1, 0, 201, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        usernameLineEdit = new QLineEdit(layoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setMinimumSize(QSize(160, 30));

        verticalLayout->addWidget(usernameLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        passwdLineEdit = new QLineEdit(layoutWidget);
        passwdLineEdit->setObjectName("passwdLineEdit");
        passwdLineEdit->setMinimumSize(QSize(160, 30));

        verticalLayout->addWidget(passwdLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setMinimumSize(QSize(140, 20));
        LoginButton->setMaximumSize(QSize(140, 20));
        LoginButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        LoginButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(LoginButton, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        SignupButton = new QPushButton(layoutWidget);
        SignupButton->setObjectName("SignupButton");
        SignupButton->setEnabled(true);
        SignupButton->setMinimumSize(QSize(140, 20));
        SignupButton->setMaximumSize(QSize(140, 20));
        SignupButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        verticalLayout->addWidget(SignupButton, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        usernameLineEdit->setText(QCoreApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        passwdLineEdit->setText(QCoreApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\351\231\206", nullptr));
        SignupButton->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
