#include "fillerror.h"
#include "ui_fillerror.h"

fillError::fillError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fillError)
{
    ui->setupUi(this);
}

fillError::~fillError()
{
    delete ui;
}
