#include <QApplication>
//#include <QSlider>
//#include <QSpinBox>
#include <iostream>
//#include <QTimer>
//#include "print.h"
#include <QPushButton>
//#include <QPixmap>
//#include <QPaintEvent>
//#include <QPainter>

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>


/*class ImageButton : public QPushButton
{
    Q_OBJECT

public:
    ImageButton() = default;

    ImageButton(QWidget *parrent);

    void paintEvent(QPaintEvent *e) override;

    QSize sizeHint() const override;

    QSize minimumSizeHint() const override;

    void keyPressEvent(QKeyEvent *e) override;
public slots:
    void setUp();

    void setDown();
private:
    QPixmap mCurrentButtonPixmap;
    QPixmap mButtonDownPixmap;
    QPixmap mButtonUpPixmap;
    bool isDown = false;
};

ImageButton::ImageButton(QWidget *parrent)
{
    setParent(parrent);
    setToolTip("Стоп");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mButtonUpPixmap = QPixmap("fileUp.png");
    mButtonDownPixmap = QPixmap("fileDown.png");
    mCurrentButtonPixmap = mButtonUpPixmap;
    setGeometry(mCurrentButtonPixmap.rect());
    connect(this, &QPushButton::clicked, this, &ImageButton::setDown);

}

void ImageButton::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentButtonPixmap);
}

QSize ImageButton::sizeHint() const
{
    return QSize(100, 100);
}

QSize ImageButton::minimumSizeHint() const
{
    return sizeHint();
}

void ImageButton::keyPressEvent(QKeyEvent *e)
{
    std::cout<< e << std::endl;
    setDown();
}

void ImageButton::setDown()
{
    mCurrentButtonPixmap = mButtonDownPixmap;
    update();
    QTimer::singleShot(100, this, &ImageButton::setUp);
}

void ImageButton::setUp()
{
    mCurrentButtonPixmap = mButtonUpPixmap;
    update();
}*/

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    //----Spinbox and slider----------------
   /* auto *slider = new QSlider(Qt::Horizontal);

    auto *spinbox = new QSpinBox();

    slider->setMaximum(0);
    slider->setMaximum(100);

    spinbox->setMinimum(0);
    spinbox->setMaximum(100);

    QObject::connect(slider, &QSlider::valueChanged, spinbox, &QSpinBox::setValue);
    QObject::connect(spinbox, QOverload<int>::of(&QSpinBox::valueChanged), slider, &QSlider::setValue);

    slider->resize(500, 50);
    spinbox->resize(50, 50);
    
    slider->move(1000, 500);
    spinbox->move(900, 500);

    slider->show();
    spinbox->show();*/
    //----------------------------------------
   //------------Image--------------
    /*ImageButton redButton(nullptr);
    redButton.setFixedSize(100, 100);
    redButton.move(1000, 400);
    QObject::connect(&redButton, &QPushButton::clicked, [](){std::cout << "cliked\n";});
    redButton.show();*/
    //------------------------------

    QWidget *window = new QWidget;
    QPushButton *button1 = new QPushButton("One", window);
    QPushButton *button2 = new QPushButton("Two", window);
    QPushButton *button3 = new QPushButton("Three", window);
    QPushButton *button4 = new QPushButton("Four", window);
    QPushButton *button5 = new QPushButton("Five", window);
    
    auto *layout  = new QGridLayout(window);
    layout->addWidget(button1, 0, 0);
    layout->addWidget(button2, 0, 1);
    layout->addWidget(button3, 1, 0, 1, 2);
    layout->addWidget(button4, 2, 0);
    layout->addWidget(button5, 2, 1);
  //  button1->move(40, 50);
  //  button2->move(140, 150);
  //  button3->move(200, 200);

    window->resize(300, 300);
    window->move(1000, 500);
    window->show();
    return app.exec();
}
#include "main.moc"