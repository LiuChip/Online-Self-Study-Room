//Notice: We do not provide the server address.

#include "LoginDialog.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent):QDialog(parent)
{
    setupUI();
    setWindowTitle("登陆");
    setFixedSize(200,300);
}

void LoginDialog::setupUI()
{
    QVBoxLayout *layout1=new QVBoxLayout(this);
    usernameLineEdit=new QLineEdit;
    passwdLineEdit=new QLineEdit;
    usernameLineEdit->setPlaceholderText("请输入用户名");
    passwdLineEdit->setEchoMode(QLineEdit::Password);
    passwdLineEdit->setPlaceholderText("请输入密码");

    LoginButton = new QPushButton("登陆");
    connect(LoginButton,&QPushButton::clicked,this,&LoginDialog::on_LoginButton_clicked);

    SignupButton = new QPushButton("注册");
    connect(SignupButton,&QPushButton::clicked,this,&LoginDialog::on_SignupButton_clicked);

    layout1->addWidget(usernameLineEdit);
    layout1->addWidget(passwdLineEdit);
    layout1->addWidget(LoginButton);
    layout1->addWidget(SignupButton);

}

void LoginDialog::on_LoginButton_clicked()
{
    QString username=usernameLineEdit->text();
    QString passwd=passwdLineEdit->text();
    if(validateUser(username,passwd))
    {
        accept();
        emit LoginSuccess();
    }else{
        QMessageBox::warning(this,"错误","用户名与密码不匹配");
    }
}

void LoginDialog::on_SignupButton_clicked()
{

}

bool LoginDialog::validateUser(const QString &username, const QString &passwd)
{
    if(username=="localadmin"&&passwd=="localadmin") return true;
    else return false;//Please supplement the request server section by yourself
}
