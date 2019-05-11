#ifndef UIBRIDGE_H
#define UIBRIDGE_H

#include <QObject>

class UIBridge: public QObject
{
    Q_OBJECT
public:
    explicit UIBridge(QObject *i3lWindows = nullptr);
    Q_INVOKABLE void log(QString message);
};

#endif // UIBRIDGE_H
