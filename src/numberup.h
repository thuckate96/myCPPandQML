#ifndef NUMBERUP_H
#define NUMBERUP_H
#include <QObject>

class NumberUp : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
public:
    explicit NumberUp(QObject* parent = 0);
    QString message(){
        return msg;
    }
    void setMessage(QString str);

signals:
    void messageChanged();
public slots:
    void upHits();
private:
    int count;
    QString msg;
};
#endif // NUMBERUP_H
