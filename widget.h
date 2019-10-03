#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSequentialAnimationGroup>
namespace Ui
{
    class Widget;
}
class Widget : public QWidget
{
    Q_OBJECT

    public:
        explicit Widget(QWidget *parent = nullptr);

    private slots:

};

#endif // WIDGET_H
