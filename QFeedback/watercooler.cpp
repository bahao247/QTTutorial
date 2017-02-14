#include "watercooler.h"

WaterCooler::WaterCooler(QObject *parent) : QObject(parent)
{
    person Cathy;
    Cathy.Name = "Cathy";

    person Bob;
    Bob.Name = "Bob";

    person Kai;
    Kai.Name = "Kai";
    connect(&Cathy, SIGNAL(Speak(QString)), &Bob, SLOT(Listen(QString)));
    connect(&Cathy, SIGNAL(Speak(QString)), &Kai, SLOT(Listen(QString)));
    connect(&Bob, SIGNAL(Speak(QString)), &Kai, SLOT(Listen(QString)));

    Cathy.Gossip("Cathy heard mark is bald");
    Bob.Gossip("Bob heard mark is bald");
}
