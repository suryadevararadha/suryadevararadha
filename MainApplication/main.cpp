#include<QApplication>
#include<QWidget>
#include<patient.h>
#include<details.h>
#include<QTabWidget>
#include<QTabBar>
#include<QHBoxLayout>
int main(int argc,char *argv[])
{
    QApplication app(argc,argv);

    QWidget *pWidget= new QWidget();
    QWidget *pRefraktion = new QWidget();
    QWidget *pVisuref = new QWidget();
    QTabWidget *pTabWidget = new QTabWidget();

    Patient *ppatient = new Patient();
    Details *pdetails = new Details();
    QHBoxLayout *pHboxLayout = new QHBoxLayout();


    pHboxLayout->addWidget(ppatient);
    ppatient->setFixedSize(344,423);

    pHboxLayout->addWidget(pdetails);
    pdetails->setFixedSize(448,423);

    pWidget->setLayout(pHboxLayout);


    QObject::connect(ppatient,SIGNAL(listclicked(QJsonObject)),pdetails,SLOT(updateui(QJsonObject)));

    pTabWidget->addTab(pWidget,"Patient");
    pTabWidget->addTab(pRefraktion,"Refraktion");
    pTabWidget->addTab(pVisuref,"Visus");


    pTabWidget->show();
    pTabWidget->setFixedSize(800,471);
    QTabBar *ptb = pTabWidget->tabBar();


    ptb->addTab(QIcon("C:\\Users\\x6rkris1\\Desktop\\lock.png"),"");
    ptb->addTab(QIcon("C:\\Users\\x6rkris1\\Desktop\\settings.png"),"");

    pTabWidget->setWindowTitle("Visuref");
    pTabWidget->setStyleSheet("color: white");
    pTabWidget->setStyleSheet("background-color: black");
    pTabWidget->setAutoFillBackground(true);
    pdetails->setStyleSheet("background-color: white");



    return app.exec();
}
