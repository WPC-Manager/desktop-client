#ifndef WPCMANAGER_H
#define WPCMANAGER_H

#include "i18n/localization.h"

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class WPCManager;
}
QT_END_NAMESPACE

class WPCManager : public QMainWindow
{
    Q_OBJECT

public:
    WPCManager(QWidget *parent = nullptr);
    ~WPCManager();

protected:
    void changeEvent(QEvent *event) override;

private slots:
    void on_actionmanager_menu_home_quit_triggered();

    void on_actionmanager_menu_settings_language_english_triggered();

    void on_actionmanager_menu_settings_language_russian_triggered();

private:
    Ui::WPCManager *ui;
    Localization *localization;
};
#endif // WPCMANAGER_H
