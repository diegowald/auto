#include "dlgagregar.h"
#include "ui_dlgagregar.h"

DlgAgregar::DlgAgregar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgAgregar)
{
    ui->setupUi(this);
}

DlgAgregar::~DlgAgregar()
{
    delete ui;
}
