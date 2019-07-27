#ifndef ACUSTOM_H
#define ACUSTOM_H

#include <QWidget>
#include <QtDesigner/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT ACustom : public QWidget
{
    Q_OBJECT

public:
    ACustom(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);
};

#endif
