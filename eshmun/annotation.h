#ifndef ANNOTATION_H
#define ANNOTATION_H

#include <QDialog>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>

namespace Ui {
class Annotation;
}

class Annotation : public QDialog
{
    Q_OBJECT

public:
    explicit Annotation(QWidget *parent = nullptr);
    ~Annotation();

private:
    Ui::Annotation *ui;
};

#endif // ANNOTATION_H
