#include "l2_base.h"
#include "ui_l2_base.h"

l2_base::l2_base(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::l2_base)
{
    ui->setupUi(this);
    connectionDB();
}

l2_base::~l2_base()
{
    db.close();
    delete ui;
}

void l2_base::connectionDB(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("l2.db3");
    db.open();
}
