#include "UIBridge.h"
#include <QDebug>

UIBridge::UIBridge(QObject* i3lWindows) : QObject(i3lWindows) {
    connect(this, SIGNAL(hmiEvent(QString,QString)), i3lWindows, SLOT(handleHMIEvent(QString,QString)));
}
void UIBridge::log(QString message) {
    qDebug() << "hunght abcd";
}
