#ifndef DLGBUSCAR_H
#define DLGBUSCAR_H

#include <QDialog>

namespace Ui {
class DlgBuscar;
}

class DlgBuscar : public QDialog
{
    Q_OBJECT

public:
    explicit DlgBuscar(QWidget *parent = 0);
    ~DlgBuscar();

private:
    Ui::DlgBuscar *ui;
};

#endif // DLGBUSCAR_H
