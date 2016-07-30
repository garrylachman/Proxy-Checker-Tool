/*
 * Copyright (C) 2016 Garry Lachman garry@lachman.co under GNU LGPL
 * https://rev.proxies.online
 * This library is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License version 2.1, as published by the Free Software Foundation.
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 */
#include "addsingleproxydialog.h"
#include "ui_addsingleproxydialog.h"

AddSingleProxyDialog::AddSingleProxyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddSingleProxyDialog)
{
    ui->setupUi(this);
}

AddSingleProxyDialog::~AddSingleProxyDialog()
{
    delete ui;
}

QString AddSingleProxyDialog::getProxyHost() {
    return ui->host->text();
}

int AddSingleProxyDialog::getProxyPort() {
    bool ok;
    int port(ui->port->text().toInt(&ok));
    if ( ! ok) {
        port = 8080;
    }
    return port;
}

int AddSingleProxyDialog::getProxyType() {
    return ui->type->currentIndex();
}
