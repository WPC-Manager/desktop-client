#include "localization.h"

Localization::Localization(QObject *parent)
    : QObject{parent}
{}

bool Localization::ChangeLanguage(QString locale) {
    QTranslator* translator = new QTranslator();
    if (!translator->load("i18n/desktop_client_"+locale+".qm")) {
        return false;
    }

    qApp->installTranslator(translator);
    return true;
}
