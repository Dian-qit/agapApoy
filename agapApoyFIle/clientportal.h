#ifndef CLIENTPORTAL_H
#define CLIENTPORTAL_H

#include <QMainWindow>

namespace Ui {
class clientPortal;
}

class clientPortal : public QMainWindow
{
    Q_OBJECT

public:
    explicit clientPortal(QWidget *parent = nullptr);
    ~clientPortal();

private:
    Ui::clientPortal *ui;
};

#endif // CLIENTPORTAL_H
