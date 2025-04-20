#ifndef RESPONDERHUB_H
#define RESPONDERHUB_H

#include <QDialog>

namespace Ui {
class responderHub;
}

class responderHub : public QDialog
{
    Q_OBJECT

public:
    explicit responderHub(QWidget *parent = nullptr);
    ~responderHub();

private:
    Ui::responderHub *ui;
};

#endif // RESPONDERHUB_H
