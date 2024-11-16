#include "wpcmanager.h"
#include "ui_wpcmanager.h"

WPCManager::WPCManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WPCManager)
{
    ui->setupUi(this);
}

WPCManager::~WPCManager()
{
    delete ui;
}
