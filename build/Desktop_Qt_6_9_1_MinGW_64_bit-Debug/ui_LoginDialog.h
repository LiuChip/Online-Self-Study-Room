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
#include <QtWidgets/QLabel>
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
    QSpacerItem *verticalSpacer_top;
    QLabel *avatarLabel;
    QSpacerItem *verticalSpacer_1;
    QLineEdit *usernameLineEdit;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *passwdLineEdit;
    QSpacerItem *verticalSpacer_3;
    QPushButton *LoginButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *SignupButton;
    QSpacerItem *verticalSpacer_bottom;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->setWindowModality(Qt::WindowModality::NonModal);
        LoginDialog->resize(300, 400);
        LoginDialog->setMinimumSize(QSize(300, 400));
        LoginDialog->setMaximumSize(QSize(300, 400));
        LoginDialog->setProperty("resize", QVariant(QSize(300, 400)));
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 297, 401));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_top = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_top);

        avatarLabel = new QLabel(layoutWidget);
        avatarLabel->setObjectName("avatarLabel");
        avatarLabel->setMinimumSize(QSize(80, 80));
        avatarLabel->setMaximumSize(QSize(80, 80));
        avatarLabel->setStyleSheet(QString::fromUtf8("border-radius: 40px;\n"
"background-color: #EEEEEE;\n"
"border: 2px solid #DDDDDD;"));
        avatarLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(avatarLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_1 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_1);

        usernameLineEdit = new QLineEdit(layoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setMinimumSize(QSize(200, 35));

        verticalLayout->addWidget(usernameLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(295, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        passwdLineEdit = new QLineEdit(layoutWidget);
        passwdLineEdit->setObjectName("passwdLineEdit");
        passwdLineEdit->setMinimumSize(QSize(200, 35));
        passwdLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(passwdLineEdit, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setMinimumSize(QSize(180, 30));
        LoginButton->setMaximumSize(QSize(180, 30));

        verticalLayout->addWidget(LoginButton, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(295, 13, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        SignupButton = new QPushButton(layoutWidget);
        SignupButton->setObjectName("SignupButton");
        SignupButton->setMinimumSize(QSize(180, 30));
        SignupButton->setMaximumSize(QSize(180, 30));

        verticalLayout->addWidget(SignupButton, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_bottom = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_bottom);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245QQ\345\217\267", nullptr));
        passwdLineEdit->setPlaceholderText(QCoreApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        SignupButton->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
