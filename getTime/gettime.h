#ifndef GETTIME_H
#define GETTIME_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>

class getTime : public QDialog
{
    Q_OBJECT
    
public:
    explicit getTime(QWidget *parent = 0);
    ~getTime();

private:
    QLabel *label;
    QPushButton *btn;

public slots:
    void currentTime(void);

signals:
    void getData(QString);
    
};

#endif // GETTIME_H
