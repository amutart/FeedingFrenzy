#ifndef FRENZYWINDOW_H
#define FRENZYWINDOW_H

#include <QMainWindow>

namespace Ui {
class FrenzyWindow;
}

class FrenzyWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit FrenzyWindow(QWidget *parent = 0);
    ~FrenzyWindow();
    
private:
    Ui::FrenzyWindow *ui;
};

#endif // FRENZYWINDOW_H
