/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Xbe;
    QAction *actionClose_Xbe;
    QAction *actionSave_Xbe;
    QAction *actionSave_Xbe_as;
    QAction *actionRecent_Xbe_Files;
    QAction *actionExit;
    QAction *actionGo_To_The_Official_CxBx_Reloaded_Website;
    QAction *actionAbout;
    QAction *actionEmulationStart;
    QAction *actionEmulationStop;
    QAction *actionController;
    QAction *actionVideo;
    QAction *actionSound;
    QAction *actionEmulation;
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuSettings;
    QMenu *menuEmulation;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(640, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setAnimated(true);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionOpen_Xbe = new QAction(MainWindow);
        actionOpen_Xbe->setObjectName(QStringLiteral("actionOpen_Xbe"));
        actionClose_Xbe = new QAction(MainWindow);
        actionClose_Xbe->setObjectName(QStringLiteral("actionClose_Xbe"));
        actionSave_Xbe = new QAction(MainWindow);
        actionSave_Xbe->setObjectName(QStringLiteral("actionSave_Xbe"));
        actionSave_Xbe_as = new QAction(MainWindow);
        actionSave_Xbe_as->setObjectName(QStringLiteral("actionSave_Xbe_as"));
        actionRecent_Xbe_Files = new QAction(MainWindow);
        actionRecent_Xbe_Files->setObjectName(QStringLiteral("actionRecent_Xbe_Files"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionGo_To_The_Official_CxBx_Reloaded_Website = new QAction(MainWindow);
        actionGo_To_The_Official_CxBx_Reloaded_Website->setObjectName(QStringLiteral("actionGo_To_The_Official_CxBx_Reloaded_Website"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionEmulationStart = new QAction(MainWindow);
        actionEmulationStart->setObjectName(QStringLiteral("actionEmulationStart"));
        actionEmulationStart->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/images/play.png"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QStringLiteral(":/images/play.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QStringLiteral(":/images/play.png"), QSize(), QIcon::Active, QIcon::Off);
        actionEmulationStart->setIcon(icon);
        actionEmulationStart->setVisible(true);
        actionEmulationStart->setIconVisibleInMenu(true);
        actionEmulationStop = new QAction(MainWindow);
        actionEmulationStop->setObjectName(QStringLiteral("actionEmulationStop"));
        actionEmulationStop->setCheckable(false);
        actionEmulationStop->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEmulationStop->setIcon(icon1);
        actionController = new QAction(MainWindow);
        actionController->setObjectName(QStringLiteral("actionController"));
        actionVideo = new QAction(MainWindow);
        actionVideo->setObjectName(QStringLiteral("actionVideo"));
        actionSound = new QAction(MainWindow);
        actionSound->setObjectName(QStringLiteral("actionSound"));
        actionEmulation = new QAction(MainWindow);
        actionEmulation->setObjectName(QStringLiteral("actionEmulation"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/logos/smashing_drive.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem4->setIcon(icon2);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem14);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(0, 0, 641, 421));
        tableWidget->setMinimumSize(QSize(641, 0));
        tableWidget->setAcceptDrops(false);
        tableWidget->setAutoFillBackground(false);
        tableWidget->setFrameShadow(QFrame::Sunken);
        tableWidget->setLineWidth(20);
        tableWidget->setMidLineWidth(0);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setIconSize(QSize(0, 0));
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(true);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(60);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(40);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(60);
        tableWidget->verticalHeader()->setHighlightSections(true);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1, 24, 59, 59));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/logos/smashing_drive.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1, 85, 59, 59));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/logos/tenchu_return_from_darkness.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1, 145, 59, 59));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/logos/yugioh_the_dawn_of_destiny.png")));
        label_3->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuEmulation = new QMenu(menuBar);
        menuEmulation->setObjectName(QStringLiteral("menuEmulation"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(32, 32));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        mainToolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuEmulation->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen_Xbe);
        menuFile->addAction(actionClose_Xbe);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_Xbe);
        menuFile->addAction(actionSave_Xbe_as);
        menuFile->addSeparator();
        menuFile->addAction(actionRecent_Xbe_Files);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuSettings->addAction(actionController);
        menuSettings->addAction(actionVideo);
        menuSettings->addAction(actionSound);
        menuSettings->addSeparator();
        menuSettings->addAction(actionEmulation);
        menuHelp->addAction(actionGo_To_The_Official_CxBx_Reloaded_Website);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        mainToolBar->addAction(actionEmulationStart);
        mainToolBar->addAction(actionEmulationStop);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CxBx-Reloaded", 0));
        actionOpen_Xbe->setText(QApplication::translate("MainWindow", "Open Xbe...", 0));
        actionClose_Xbe->setText(QApplication::translate("MainWindow", "Close Xbe", 0));
        actionSave_Xbe->setText(QApplication::translate("MainWindow", "Save Xbe", 0));
        actionSave_Xbe_as->setText(QApplication::translate("MainWindow", "Save Xbe as...", 0));
        actionRecent_Xbe_Files->setText(QApplication::translate("MainWindow", "Recent Xbe Files", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionGo_To_The_Official_CxBx_Reloaded_Website->setText(QApplication::translate("MainWindow", "Go To The Official CxBx-Reloaded Website...", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionEmulationStart->setText(QApplication::translate("MainWindow", "Emulation Start", 0));
        actionEmulationStart->setIconText(QApplication::translate("MainWindow", "Emulation Start", 0));
        actionEmulationStop->setText(QApplication::translate("MainWindow", "Emulation Stop", 0));
        actionController->setText(QApplication::translate("MainWindow", "Controller", 0));
        actionVideo->setText(QApplication::translate("MainWindow", "Video", 0));
        actionSound->setText(QApplication::translate("MainWindow", "Sound", 0));
        actionEmulation->setText(QApplication::translate("MainWindow", "Emulation", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Logo", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Title", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Region", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "XDK Version", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "3", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Smashing Drive\n"
"ID: c7e62990", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "4242", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Tenchu - Return from Darkness\n"
"ID: 6ef070ab", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "5849", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(2, 1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Yu-Gi-Oh - The Dawn of Destiny\n"
"ID: 915bba63", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(2, 3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "5849", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
        menuEmulation->setTitle(QApplication::translate("MainWindow", "Emulation", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
