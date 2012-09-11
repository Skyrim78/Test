#ifndef L2_BASE_H
#define L2_BASE_H

#include <QMainWindow>
#include <QtSql/QtSql>

namespace Ui {
class l2_base;
}

class l2_base : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit l2_base(QWidget *parent = 0);
    ~l2_base();

    QSqlDatabase db;
    
private:
    Ui::l2_base *ui;
private slots:
    void connectionDB();
};

#endif // L2_BASE_H
