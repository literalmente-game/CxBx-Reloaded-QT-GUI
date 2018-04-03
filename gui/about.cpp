#include <QDesktopServices>
#include <QPixmap>
#include <QUrl>
#include <QDebug>

#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    /*For directories use "\\" to navegate the folders*/
    /*For internal directories in project, use ":/"*/
    QPixmap pix(":/images/Xbox-Logo.jpg");
    int w = ui->lblCxbxLogo->width();
    int h = ui->lblCxbxLogo->height();
    qDebug() << w << h;
    ui->lblCxbxLogo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatioByExpanding));
}

About::~About()
{
    delete ui;
}

/*Close About Cxbx-Reloaded Dialog.*/
void About::on_btnOK_clicked()
{
    this->close();
}

/*Open Cxbx-Reloaded's github.*/
void About::on_btnGithub_clicked()
{
    QString gitURL = "https://github.com/Cxbx-Reloaded/Cxbx-Reloaded";
    QDesktopServices::openUrl(QUrl(gitURL));
}
/*Open Cxbx-Reloaded's github in contributors section.*/
void About::on_btnContributors_clicked()
{
    QString contriURL = "https://github.com/Cxbx-Reloaded/Cxbx-Reloaded/graphs/contributors";
    QDesktopServices::openUrl(QUrl(contriURL));
}
