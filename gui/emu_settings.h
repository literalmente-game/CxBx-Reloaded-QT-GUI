#ifndef EMU_SETTINGS_H
#define EMU_SETTINGS_H

#include <QDialog>
#include <QSettings>

#include "config.h"

namespace Ui {
class Emu_Settings;
}

class Emu_Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Emu_Settings(QWidget *parent = 0);
    ~Emu_Settings();

private slots:
    void on_btnSearch_Cxbx_clicked();
    void on_btnSearch_Roms_clicked();
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();


private:
    Ui::Emu_Settings *ui;
    Config *config;
};

#endif // EMU_SETTINGS_H
