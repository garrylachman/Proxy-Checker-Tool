/*
 * Copyright (C) 2016 Garry Lachman garry@lachman.co under GNU LGPL
 * https://rev.proxies.online
 * This library is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License version 2.1, as published by the Free Software Foundation.
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 */
#ifndef ADDSINGLEPROXYDIALOG_H
#define ADDSINGLEPROXYDIALOG_H

#include <QDialog>

namespace Ui {
class AddSingleProxyDialog;
}

class AddSingleProxyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddSingleProxyDialog(QWidget *parent = 0);
    ~AddSingleProxyDialog();
    QString getProxyHost();
    int getProxyPort();
    int getProxyType();

private slots:
    void on_isAuth_toggled(bool checked);

private:
    Ui::AddSingleProxyDialog *ui;
};

#endif // ADDSINGLEPROXYDIALOG_H
