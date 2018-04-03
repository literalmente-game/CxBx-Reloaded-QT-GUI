#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = 0);
    ~About();

private slots:
    void on_btnOK_clicked();

    void on_btnGithub_clicked();

    void on_btnContributors_clicked();

private:
    Ui::About *ui;

};

#endif // ABOUT_H
