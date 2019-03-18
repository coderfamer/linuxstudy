#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

class login : public QDialog
{
    Q_OBJECT

public:
    login(QWidget *parent = 0);
    ~login();
};

#endif // LOGIN_H
