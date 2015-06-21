#ifndef DLGMANTENIMIENTOPREVENTIVO_H
#define DLGMANTENIMIENTOPREVENTIVO_H

#include <QDialog>

namespace Ui {
class DlgMantenimientoPreventivo;
}

class DlgMantenimientoPreventivo : public QDialog
{
    Q_OBJECT

public:
    explicit DlgMantenimientoPreventivo(QWidget *parent = 0);
    ~DlgMantenimientoPreventivo();

private:
    Ui::DlgMantenimientoPreventivo *ui;
};

#endif // DLGMANTENIMIENTOPREVENTIVO_H
