#include "dlghistoria.h"
#include "ui_dlghistoria.h"

DlgHistoria::DlgHistoria(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DlgHistoria)
{
    ui->setupUi(this);
}

DlgHistoria::~DlgHistoria()
{
    delete ui;
}
