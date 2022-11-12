#include "my_snakegame.h"
#include "./ui_snakegame.h"

snakegame::snakegame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::snakegame)
{
    ui->setupUi(this);
}

snakegame::~snakegame()
{
    delete ui;
}

