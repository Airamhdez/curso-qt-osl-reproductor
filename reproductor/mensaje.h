#ifndef MENSAJE_H
#define MENSAJE_H

#include <QDialog>
#include <QString>
#include <QLabel>
#include <QGridLayout>
class Mensaje : public QDialog
{
    Q_OBJECT
public:
   explicit  Mensaje(QString texto, QWidget *parent = 0);
};

#endif // MENSAJE_H
