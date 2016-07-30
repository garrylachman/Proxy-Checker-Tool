/*
 * Copyright (C) 2016 Garry Lachman garry@lachman.co under GNU LGPL
 * https://rev.proxies.online
 * This library is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License version 2.1, as published by the Free Software Foundation.
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 */
#include "helpers.h"

Helpers::Helpers()
{

}

QString Helpers::proxyTypeByIndex(int type)
{
    switch (type) {
        case 0:
            return QString("Http");
        break;
        case 1:
            return QString("Socks5");
        break;
    }
    return QString("");
}
