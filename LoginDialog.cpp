#include "LoginDialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) : QDialog(parent), ui(new Ui::LoginDialog)
{
    // 加载UI布局（替代原来的setupUI）
    ui->setupUi(this);
    ui->usernameLineEdit->setAutoFillBackground(false);
    ui->usernameLineEdit->setCompleter(nullptr); // 禁用自动完成
    ui->passwdLineEdit->setAutoFillBackground(false);
    ui->passwdLineEdit->setCompleter(nullptr);

    // 强制清空输入框（覆盖任何潜在默认值）
    ui->usernameLineEdit->clear();
    ui->passwdLineEdit->clear();
    ui->usernameLineEdit->setPlaceholderText("请输入用户名");
    // 密码占位符 + 隐藏输入
    ui->passwdLineEdit->setPlaceholderText("请输入密码");
    // 补充UI文件未设置的控件属性（如密码框隐藏输入）
    ui->passwdLineEdit->setEchoMode(QLineEdit::Password);
    // 设置窗口标题（覆盖UI文件默认标题）
    setWindowTitle("登陆");
    // 连接按钮信号（UI文件中的按钮对象名与代码一致，可直接使用）
}

LoginDialog::~LoginDialog()
{
    delete ui; // 释放UI资源
}

void LoginDialog::on_LoginButton_clicked()
{
    // 通过UI指针获取输入内容
    QString username = ui->usernameLineEdit->text();
    QString passwd = ui->passwdLineEdit->text();
    if(validateUser(username, passwd))
    {
        accept();
        emit LoginSuccess();
    } else {
        QMessageBox::warning(this, "错误", "用户名与密码不匹配");
    }
}

void LoginDialog::on_SignupButton_clicked()
{
    // 保留注册逻辑（可后续补充）
}

bool LoginDialog::validateUser(const QString &username, const QString &passwd)
{
    // 保留原验证逻辑
    if(username == "localadmin" && passwd == "localadmin") return true;
    else return false;
}
