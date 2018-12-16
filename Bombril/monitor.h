#ifndef MONITOR_H
#define MONITOR_H

#include <QMainWindow>

namespace Ui {
class Monitor;
}

class Monitor : public QMainWindow
{
Q_OBJECT

public:
explicit Monitor(QWidget *parent = nullptr);
~Monitor();

private:
Ui::Monitor *ui;
};

#endif // MONITOR_H
