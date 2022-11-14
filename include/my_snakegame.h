#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class snakegame; }
QT_END_NAMESPACE

class snakegame : public QMainWindow
{
    Q_OBJECT

public:
    snakegame(QWidget *parent = nullptr);
    ~snakegame();

private:
    Ui::snakegame *ui;
};
#endif // SNAKEGAME_H
