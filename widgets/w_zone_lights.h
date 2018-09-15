#ifndef ZONELIGHTWIDGET_H
#define ZONELIGHTWIDGET_H

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QObject>
#include <QStackedWidget>

#include "w_lightcontrolcontainer.h"
#include "zone.h"
#include "preset.h"

class ZoneLightsWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ZoneLightsWidget(Zone zone, QWidget *parent = 0);
    ZoneLightsWidget() {}
    QStackedWidget *topWidget;

private:
    Zone zone;
    QGridLayout *contentLayout;
    QStackedWidget *topLayout;
    LightControlContainerWidget *colorLightControlWidget;


signals:
    void setCustomLight(QString color, Zone zone, int id);

public slots:

private slots:
    void addToggleFunctions();
    void showCustomLights(QWidget *widget);
    void togglePower(int id);
    void updateState(Light *light);
    void showPresetChooser(QWidget *widget);
    void hidePresetChooser();
    void buttonListClicked(int id);
};
#endif // ZONELIGHTWIDGET_H
