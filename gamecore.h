#ifndef GAMECORE_H
#define GAMECORE_H

#include <QObject>

class GameCore : public QObject
{
    Q_OBJECT
public:
    explicit GameCore(QObject *parent = 0);

signals:

public slots:
};

#endif // GAMECORE_H