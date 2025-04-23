#include "mainwindow.h"
#include "LoginDialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog loginDialog;
    if(loginDialog.exec()==QDialog::Accepted)
    {
        MainWindow mainwindow;
        mainwindow.show();
        return a.exec();
    }
    return 0;
}
