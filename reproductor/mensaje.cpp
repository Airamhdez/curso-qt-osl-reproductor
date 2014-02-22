#include "mensaje.h"

Mensaje::Mensaje(QString texto, QWidget *parent) :
    QDialog(parent)
{
    QGridLayout *gridLay;
    gridLay = new QGridLayout(this);
    QLabel *lblTexto;
    lblTexto = new QLabel(texto);
    gridLay->addWidget(lblTexto);
    this->setLayout(gridLay);

}
