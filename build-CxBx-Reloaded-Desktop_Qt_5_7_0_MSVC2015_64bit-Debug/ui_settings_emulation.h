/********************************************************************************
** Form generated from reading UI file 'settings_emulation.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_EMULATION_H
#define UI_SETTINGS_EMULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings_Emulation
{
public:

    void setupUi(QWidget *Settings_Emulation)
    {
        if (Settings_Emulation->objectName().isEmpty())
            Settings_Emulation->setObjectName(QStringLiteral("Settings_Emulation"));
        Settings_Emulation->resize(473, 337);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Settings_Emulation->sizePolicy().hasHeightForWidth());
        Settings_Emulation->setSizePolicy(sizePolicy);

        retranslateUi(Settings_Emulation);

        QMetaObject::connectSlotsByName(Settings_Emulation);
    } // setupUi

    void retranslateUi(QWidget *Settings_Emulation)
    {
        Settings_Emulation->setWindowTitle(QApplication::translate("Settings_Emulation", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings_Emulation: public Ui_Settings_Emulation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_EMULATION_H
