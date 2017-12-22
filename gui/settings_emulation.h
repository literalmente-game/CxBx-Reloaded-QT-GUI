#ifndef SETTINGS_EMULATION_H
#define SETTINGS_EMULATION_H

#include <QWidget>

namespace Ui {
class Settings_Emulation;
}

class Settings_Emulation : public QWidget
{
    Q_OBJECT

public:
    explicit Settings_Emulation(QWidget *parent = 0);
    ~Settings_Emulation();

private:
    Ui::Settings_Emulation *ui;
};

#endif // SETTINGS_EMULATION_H
