#include <QStyleOption>
#include <QPainter>
#include "acustom.h"

ACustom::ACustom(QWidget *parent) :
    QWidget(parent)
{
    this->setStyleSheet(QString("QWidget {background-color:blue;}"));
}

void ACustom::paintEvent(QPaintEvent *)
{
    QStyleOption styleOpt;
    styleOpt.init(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &styleOpt, &painter, this);
}
