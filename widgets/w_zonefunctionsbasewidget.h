#ifndef W_ZONEFUNCTIONSBASEWIDGET_H
#define W_ZONEFUNCTIONSBASEWIDGET_H

#include <QObject>
#include <QWidget>
#include <QStackedLayout>
#include "w_zonecontainer.h"

class ZoneFunctionsBaseWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ZoneFunctionsBaseWidget(QWidget *parent = nullptr);
    QWidget *topWidget;
    QHBoxLayout *mainLayout;
    QStackedLayout *contentLayout;


private:
    QMap<QString, ZoneContainerWidget*> *zoneContainerMap;
    ZoneContainerWidget *getZoneContainer(QString zone) { return zoneContainerMap->value(zone); }

signals:

public slots:
    void showZone(QString zone);
};

#endif // W_ZONEFUNCTIONSBASEWIDGET_H
