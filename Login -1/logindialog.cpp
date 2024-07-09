#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "admin" && password == "1234") {
        accept(); // Close the dialog and return QDialog::Accepted
    } else {
        QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
    }
}

void LoginDialog::on_cancelButton_clicked()
{
    reject(); // Close the dialog and return QDialog::Rejected
}
