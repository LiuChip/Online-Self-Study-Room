#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include "ui_LoginDialog.h" // 包含UI生成的头文件

QT_BEGIN_NAMESPACE
namespace Ui { class LoginDialog; } // 声明UI命名空间
QT_END_NAMESPACE

class LoginDialog : public QDialog
{
    Q_OBJECT
private:
    Ui::LoginDialog *ui; // UI控件管理指针
    bool validateUser(const QString &username, const QString &passwd);
private slots:
    void on_LoginButton_clicked();
    void on_SignupButton_clicked();
public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog(); // 添加析构函数释放UI资源
signals:
    void LoginSuccess();
};

#endif // LOGINDIALOG_H
