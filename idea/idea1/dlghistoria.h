#ifndef DLGHISTORIA_H
#define DLGHISTORIA_H

#include <QDialog>

namespace Ui {
class DlgHistoria;
}

class DlgHistoria : public QDialog
{
    Q_OBJECT

public:
    explicit DlgHistoria(QWidget *parent = 0);
    ~DlgHistoria();

private:
    Ui::DlgHistoria *ui;
};

#endif // DLGHISTORIA_H
