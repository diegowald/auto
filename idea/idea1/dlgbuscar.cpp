#include "dlgbuscar.h"
#include "ui_dlgbuscar.h"

DlgBuscar::DlgBuscar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgBuscar)
{
    ui->setupUi(this);
}

DlgBuscar::~DlgBuscar()
{
    delete ui;
}
