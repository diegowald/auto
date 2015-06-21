#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dlgbuscar.h"
#include "dlghistoria.h"
#include "dlgagregar.h"
#include "dlgmantenimientopreventivo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_released()
{
    DlgBuscar dlg(this);
    dlg.exec();
}

void MainWindow::on_pushButton_2_released()
{
    DlgHistoria dlg(this);
    dlg.exec();
}

void MainWindow::on_pushButton_3_released()
{
    DlgAgregar dlg(this);
    dlg.exec();
}

void MainWindow::on_pushButton_4_released()
{
    DlgMantenimientoPreventivo dlg(this);
    dlg.exec();
}
