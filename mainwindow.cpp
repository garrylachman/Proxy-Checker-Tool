/*
 * Copyright (C) 2016 Garry Lachman garry@lachman.co under GNU LGPL
 * https://rev.proxies.online
 * This library is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License version 2.1, as published by the Free Software Foundation.
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addSingleProxy_clicked()
{
    AddSingleProxyDialog *dialog = new AddSingleProxyDialog();
    if (dialog->exec()) {
        QString proxyTypeName = Helpers::proxyTypeByIndex(dialog->getProxyType());

        int rowIndex = createTableProxyItem(dialog->getProxyHost(),
                                            QString("%1").arg(dialog->getProxyPort()),
                                            proxyTypeName);
    }
}

int MainWindow::createTableProxyItem(QString host, QString port, QString type)
{
    int rowIndex = ui->proxiesList->rowCount();
    ui->proxiesList->insertRow(rowIndex);

    QTableWidgetItem *hostItem = new QTableWidgetItem(host);
    ui->proxiesList->setItem(rowIndex, 0, hostItem);

    QTableWidgetItem *portItem = new QTableWidgetItem(port);
    ui->proxiesList->setItem(rowIndex, 1, portItem);

    QTableWidgetItem *typeItem = new QTableWidgetItem(type);
    ui->proxiesList->setItem(rowIndex, 2, typeItem);

    QTableWidgetItem *statusItem = new QTableWidgetItem("Not checked");
    ui->proxiesList->setItem(rowIndex, 3, statusItem);

    return rowIndex;
}
