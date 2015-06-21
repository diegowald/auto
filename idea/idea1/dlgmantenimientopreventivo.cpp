#include "dlgmantenimientopreventivo.h"
#include "ui_dlgmantenimientopreventivo.h"

DlgMantenimientoPreventivo::DlgMantenimientoPreventivo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgMantenimientoPreventivo)
{
    ui->setupUi(this);
}

DlgMantenimientoPreventivo::~DlgMantenimientoPreventivo()
{
    delete ui;
}
