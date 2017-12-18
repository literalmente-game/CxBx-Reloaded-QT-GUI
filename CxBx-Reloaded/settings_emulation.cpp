#include "settings_emulation.h"
#include "ui_settings_emulation.h"

Settings_Emulation::Settings_Emulation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings_Emulation)
{
    ui->setupUi(this);
}

Settings_Emulation::~Settings_Emulation()
{
    delete ui;
}
