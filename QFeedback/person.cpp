#include "person.h"

person::person(QObject *parent) : QObject(parent)
{

}

void person::Listen(QString Words)
{
    qDebug() << Name << "says someone told me..." << Words;
}

void person::Gossip(QString Words)
{
    qDebug() << Name << "says " << Words;
    emit Speak(Words);

}
