#include <QObject>
#include "numberup.h"

NumberUp::NumberUp(QObject *parent): QObject(parent), count(0), msg("0 hits"){

}

void NumberUp::setMessage(QString str){
    msg = str;
    emit messageChanged();
}

void NumberUp::upHits(){
    qDebug("inside Uphits");
    count++;
    setMessage(QString("%1 hit").arg(count));
}
