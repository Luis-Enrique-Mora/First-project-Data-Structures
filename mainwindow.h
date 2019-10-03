#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSequentialAnimationGroup>
QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void on_btnAvion1_clicked();
        void moveAirplane();

        void on_btnStart_clicked();

private:
        Ui::MainWindow *ui;
        QSequentialAnimationGroup *airPlaneAnimation;
};
#endif // MAINWINDOW_H
