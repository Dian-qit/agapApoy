#ifndef REPONDERPORTAL_H
#define REPONDERPORTAL_H

#include <QDialog>

namespace Ui {
class reponderPortal;
}

class reponderPortal : public QDialog
{
    Q_OBJECT

public:
    explicit reponderPortal(QWidget *parent = nullptr);
    ~reponderPortal();

private:
    Ui::reponderPortal *ui;
};

#endif // REPONDERPORTAL_H
