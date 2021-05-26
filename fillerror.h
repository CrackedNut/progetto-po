#ifndef FILLERROR_H
#define FILLERROR_H

#include <QDialog>

namespace Ui {
class fillError;
}

class fillError : public QDialog
{
    Q_OBJECT

public:
    explicit fillError(QWidget *parent = nullptr);
    ~fillError();

private:
    Ui::fillError *ui;
};

#endif // FILLERROR_H
