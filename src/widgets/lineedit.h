/*
 * Copyright (c) 2014-2019 Patrizio Bekerle -- http://www.bekerle.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#pragma once

#include <QWidget>
#include <QEvent>
#include <QLineEdit>

class LineEdit : public QLineEdit
{
Q_OBJECT

public:
    explicit LineEdit(QWidget *parent = nullptr);

protected:
    bool eventFilter(QObject *obj, QEvent *event);
};
