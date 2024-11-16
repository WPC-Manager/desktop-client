#include "wpcmanager.h"
#include "ui_wpcmanager.h"

WPCManager::WPCManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WPCManager)
{
    ui->setupUi(this);
    if (!localization->ChangeLanguage("en_US")) {
        QMessageBox::critical(this, tr("errors.header"), tr("errors.201"), QMessageBox::Button::Close);
        qApp->exit(201);
    }
    ui->actionmanager_menu_settings_language_english->setChecked(true);
}

WPCManager::~WPCManager()
{
    delete ui;
}

void WPCManager::changeEvent(QEvent *event) {
    if (event->type() == QEvent::LanguageChange)
        ui->retranslateUi(this);
}

void WPCManager::on_actionmanager_menu_home_quit_triggered()
{
    qApp->exit(0);
}


void WPCManager::on_actionmanager_menu_settings_language_english_triggered()
{
    if (!localization->ChangeLanguage("en_US")) {
        QMessageBox::warning(this, tr("errors.header"), tr("errors.202"), QMessageBox::Button::Ok);
        ui->actionmanager_menu_settings_language_english->setChecked(false);
        return;
    }
    ui->actionmanager_menu_settings_language_english->setChecked(true);
    ui->actionmanager_menu_settings_language_russian->setChecked(false);
}


void WPCManager::on_actionmanager_menu_settings_language_russian_triggered()
{
    if (!localization->ChangeLanguage("ru_RU")) {
        QMessageBox::warning(this, tr("errors.header"), tr("errors.202"), QMessageBox::Button::Ok);
        ui->actionmanager_menu_settings_language_russian->setChecked(false);
        return;
    }
    ui->actionmanager_menu_settings_language_russian->setChecked(true);
    ui->actionmanager_menu_settings_language_english->setChecked(false);
}

