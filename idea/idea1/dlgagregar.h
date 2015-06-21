#ifndef DLGAGREGAR_H
#define DLGAGREGAR_H

#include <QDialog>

namespace Ui {
class DlgAgregar;
}

class DlgAgregar : public QDialog
{
    Q_OBJECT

public:
    explicit DlgAgregar(QWidget *parent = 0);
    ~DlgAgregar();

private:
    Ui::DlgAgregar *ui;
};

#endif // DLGAGREGAR_H
