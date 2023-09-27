//
// Created by GXZC on 2023/9/27.
//

#ifndef DIGITALCLOCK_DIGITALCLOCK_H
#define DIGITALCLOCK_DIGITALCLOCK_H


#include <QLCDNumber>

//! [0]
class DigitalClock : public QLCDNumber
{
Q_OBJECT

public:
    DigitalClock(QWidget *parent = nullptr);

private slots:
    void showTime();
};
//! [0]


#endif //DIGITALCLOCK_DIGITALCLOCK_H
