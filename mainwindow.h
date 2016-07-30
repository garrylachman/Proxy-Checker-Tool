/*
 * Copyright (C) 2016 Garry Lachman garry@lachman.co under GNU LGPL
 * https://rev.proxies.online
 * This library is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License version 2.1, as published by the Free Software Foundation.
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>

#include "addsingleproxydialog.h"
#include "helpers.h"
#include <qdebug.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int createTableProxyItem(QString host, QString port, QString type);

private slots:
    void on_addSingleProxy_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
