#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QTableView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(connectDatabase()){
        // 初始化 tableView
        initTableView();
      }

}

MainWindow::~MainWindow(){}

/**
 * 连接数据库
 * 我用的是sql server，其他的在基础上改一改就行
 * @brief connect
 * @return
 */

bool MainWindow::connectDatabase()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QApplication::applicationDirPath()+"/scooters.dat");    //如果本目录下没有该文件,则会在本目录下生成,否则连接该文件
     if (!db.open()) {
            QMessageBox::warning(0, QObject::tr("Database Error"),
                                 db.lastError().text());
            return false;
     }

}
/**
 * @brief MainWindow::initTableView
 * 从图书管理系统扒过来的，直接把数据库按列塞进去改名字就行
 */

void MainWindow::initTableView() {
    // 数据模型
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("tb_book");
    // 按编号排序
    model->setSort(0, Qt::AscendingOrder);
    // 编号
    model->setHeaderData(0,Qt::Horizontal,tr("Book Code"));
    // 书名
    model->setHeaderData(1,Qt::Horizontal,tr("Book Name"));
    // 库存
    model->setHeaderData(2,Qt::Horizontal,tr("Number"));
    model->select();
    // 表格视图
    QTableView *view = ui->tableView;
    view->setModel(model);
    view->setColumnWidth(1,500);
    view->setSelectionMode(QAbstractItemView::SingleSelection);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
    //  view->setColumnHidden(0, true);
    //  view->resizeColumnsToContents();
    view->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 表头
    QHeaderView *header = view->horizontalHeader();
    header->setStretchLastSection(true);
}

void MainWindow::on_action_triggered()
{
    dlgKinds = new kinds(this);
    dlgKinds->exec();
}
