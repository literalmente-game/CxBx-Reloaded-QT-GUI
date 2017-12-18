#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_actionExit_triggered();

    void on_actionGo_To_The_Official_CxBx_Reloaded_Website_triggered();

    void on_actionEmulationStart_triggered();

    void on_actionOpen_Xbe_triggered();

    void on_actionAbout_triggered();

    void on_actionEmulation_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
