#ifndef LOCALIZATION_H
#define LOCALIZATION_H

#include <QObject>
#include <QApplication>
#include <QTranslator>

class Localization : public QObject
{
    Q_OBJECT
public:
    explicit Localization(QObject *parent = nullptr);
    bool ChangeLanguage(QString locale);

signals:
};

#endif // LOCALIZATION_H
