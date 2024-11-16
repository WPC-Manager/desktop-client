#ifndef WPCMANAGER_H
#define WPCMANAGER_H

#include <QMainWindow>

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

private:
    Ui::WPCManager *ui;
};
#endif // WPCMANAGER_H
