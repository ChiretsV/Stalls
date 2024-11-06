#include "admin.h"
#include "ui_admin.h"


Admin::Admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);

}

Admin::~Admin()
{
    delete ui;
}



void Admin::slot_for_replenishment(QString item, int value)
{
    int rowCount = ui->tableWidget->rowCount();

    ui->tableWidget->insertRow(rowCount);

    if (ui->tableWidget->columnCount() < 2) {
        ui->tableWidget->setColumnCount(2);
    }

    QTableWidgetItem *itemWidget = new QTableWidgetItem(item);
    QTableWidgetItem *valueWidget = new QTableWidgetItem(QString::number(value));

    ui->tableWidget->setItem(rowCount, 0, itemWidget);
    ui->tableWidget->setItem(rowCount, 1, valueWidget);
}



void Admin::on_send_to_shop_clicked()
{
    // Пройдемся по всем строкам tableWidget
    for (int i = 0; i < ui->tableWidget->rowCount(); ++i)
    {
        QTableWidgetItem* item_name_cell = ui->tableWidget->item(i, 0);
        if (!item_name_cell) {
            continue; // Пропускаем, если ячейка пустая
        }
        QString item = item_name_cell->text();

        QTableWidgetItem* quantity_cell = ui->tableWidget->item(i, 1);
        if (!quantity_cell) {
            continue; // Пропускаем, если ячейка пустая
        }
        int value = quantity_cell->text().toInt();

        // Отправляем сигнал с именем товара и его количеством
        emit send_to_admin_db(item, value);
        emit send_to_database(item, value);
    }
}



void Admin::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    item_name = item->text();
    value = item->data(Qt::UserRole).toInt();
}



void Admin::on_delete_product_clicked()
{
    // Проверяем, что есть выбранные строки
    if (ui->tableWidget->currentRow() >= 0) {
        int row = ui->tableWidget->currentRow(); // Получаем индекс текущей выбранной строки
        ui->tableWidget->removeRow(row); // Удаляем строку
        qDebug() << "Удалена строка:" << row;
    } else {
        qDebug() << "Строка не выбрана";
    }
}

