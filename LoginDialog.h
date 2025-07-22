#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#endif // LOGINDIALOG_H
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QString>

class LoginDialog : public QDialog
{
    Q_OBJECT
private:
    QLineEdit *usernameLineEdit, *passwdLineEdit;
    QPushButton *LoginButton, *SignupButton;
    void setupUI();
    bool validateUser(const QString &username,const QString &passwd);
private slots:
    void on_LoginButton_clicked();
    void on_SignupButton_clicked();
public:
    explicit LoginDialog(QWidget *parent = nullptr);
    //~LoginDialog();
signals:
    void LoginSuccess();
};
