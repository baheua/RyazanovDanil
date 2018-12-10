#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "QDebug"
#include <QMessageBox>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
QString code;
float SrKolvoStrokMetodov(QString code)
{

    QStringList lst = code.split(QRegExp("(void|int|string|float|double|byte)[A-Za-z0-9]*"),  QString::SkipEmptyParts);
    int s = 0;
    for(int i = lst.count()-1; i >= 0; --i)
    {
        const QString& item = lst[i];
        s=s+item.count("\n");
    }
    float s1= (float) s/(lst.count())-1;
    return s1;
}

float KolvoStrokMetodov(QString code)
{

    QStringList lst = code.split(QRegExp("(void|int|string|float|double|byte)[A-Za-z0-9 _]*[(]"),  QString::SkipEmptyParts);
    qDebug() << lst;
    float s1 = lst.count()-1;
    return s1;
}

float SrKolvoStrokModuley(QString code)
{
    QStringList lst = code.split(QRegExp("//module"),  QString::SkipEmptyParts);
    int s = 0;
    for(int i = lst.count()-1; i >= 0; --i)
    {
        const QString& item = lst[i];
        s=s+item.count("\n")-1;
    }
    float s1= (float) s/(lst.count());
    return s1;
}

float KolvoStrokModuley(QString code)
{
    QStringList lst = code.split(QRegExp("//module"),  QString::SkipEmptyParts);
    float s1=lst.count()-1;
    return s1;
}

float KolvoStrokModuleyInc(QString code)
{
    QStringList lst = code.split(QRegExp("#include"),  QString::SkipEmptyParts);
    float s1=lst.count()-1;
    return s1;
}

float SrKolvoStrokClassov(QString code)
{
    QStringList lst = code.split(QRegExp("class "),  QString::SkipEmptyParts);
    int s = 0;
    for(int i = lst.count()-1; i >= 0; --i)
    {
        const QString& item = lst[i];
        s=s+item.count("\n")-1;
    }
    float s1= (float) s/(lst.count());
    return s1;
}

float KolvoStrokClassov(QString code)
{
    QStringList lst = code.split(QRegExp("class "),  QString::SkipEmptyParts);
    float s1=lst.count()-1;
    return s1;
}
int NORM(QString code)
{
    QStringList lst = code.split(QRegExp("class "),  QString::SkipEmptyParts);
    int s = 0;
    for(int i = lst.count()-1; i >= 0; --i)
    {
        const QString& item = lst[i];
        QStringList list = item.split("){",  QString::SkipEmptyParts);
        s=s+item.count(") ")-item.count("this.")-item.count(" ) ");
    }
    return s;
}
int RFC(QString code)
{
    QStringList lst = code.split(QRegExp("class "),  QString::SkipEmptyParts);
    int s = 0;
    for(int i = lst.count()-1; i >= 0; --i)
    {
        const QString& item = lst[i];
        QStringList list = item.split("){",  QString::SkipEmptyParts);
        s=s+item.count(") ")-item.count(" ) ");
    }
    return s;
}
void MainWindow::MWC(QString code)
{
    ui->label_WMC->setText("");
    QStringList lst = code.split(QRegExp("class "),  QString::SkipEmptyParts);
    int s = 0;
    for(int i = lst.count()-1; i >= 0; --i)
    {
        const QString& item = lst[i];
        QStringList list = item.split("){",  QString::SkipEmptyParts);
        s=0;
        for(int j = list.count()-1; j >= 0; --j)
        {
            const QString& ite = list[j];
            if ((ite.count("{")>=ite.count("}"))&&(ite.count("}")!=0))
                s=s+1;
        }
        ui->label_WMC->setText( ui->label_WMC->text()+" "+QString::number(s));
    }
}

void MainWindow::LCOM(QString code)
{
    int P=0, Q=0;
    int m;
    QString coual="";
    QStringList lst = code.split(QRegExp("class "),  QString::SkipEmptyParts);
    int s = 0;
    for(int i = lst.count()-1; i >= 0; --i)
    {
        P=0;
        Q=0;
        const QString& item = lst[i];
        QStringList list = item.split("){",  QString::SkipEmptyParts);
        //QStringList::iterator t = list.begin();
        // s=s+item.count(") ")-item.count(" ) ");
        s=0;
        for(int j = list.count()-1; j >= 0; --j)
        {
            const QString& ite = list[j];
            //  if ((ite.count("{")>=ite.count("}"))&&(ite.count("}")!=0)) s=s+1;
            QStringList lt = ite.split(QRegExp("(void|int|string|float|double|byte)[A-Za-z0-9]*"),  QString::SkipEmptyParts);
            lt.removeDuplicates();
            m = lt.count();
            //  lt.removeAt(lt.count()-1);
            for(int g = lt.count()-1; g >= 1; --g)
            {
                const QString& ir = lt[g];
                QStringList l = ir.split(" ");
                QString dd="+-*=:/%()";
                for(int c = l.count()-1; c >= 1; --c)
                {
                    const QString& r = l[c];
                    if(dd.count(r)==0)
                        coual=coual+r;
                    coual=coual+"++";
                }
            }
        }
        QStringList vars = coual.split("++");
        for(int h = vars.count()-1; h >= 1; --h)
        {
            const QString& qw = vars[h];
            int y=0;
            for(int k = h; k >= 0; --k)
            {
                const QString& qw1 = vars[k];
                if (qw==qw1)
                    {P=P+1; break;}
                else
                    y=y+1;
                if ((k==0)&&(y==vars.count()-1-h))
                    Q=Q+1;
            }
        }
        float C = 0;
        float f1=1;
        float f2=1;
        for (int z=1; z<=m; z++)
            f1=f1*z;
        for (int z=1; z<=m-2; z++)
            f2=f2*z;
        C = sqrt(f1/2/f2);
        C = (P-Q)/C;
        ui->label_LCOM->setText( ui->label_LCOM->text()+" "+QString::number(C));
    }
}

void MainWindow::NOC(QString code)
{
    ui->label_NOC->setText("");
    QStringList lst = code.split(QRegExp("class "),  QString::SkipEmptyParts);
    lst.removeFirst();
    QStringList lis, Lclss, Rclss;
    for (int g = 0; g<lst.count(); g++)
    {
        const QString& item = lst[g].trimmed();
        QString St ="";
        for(int i=0; i<item.count(); i++)
            if (item[i]!='\n')
                St=St+QString(item[i]);
            else
                break;
        lis<<St;
    }
    for (int g = 0; g<lis.count(); g++)
    {
        const QString& item = lis[g].trimmed();
        QString St ="";
        for(int i=0; i<item.count(); i++)
            if (item[i]!=' ')
                St=St+QString(item[i]);
            else break;
        Rclss<<St;
    }
    for (int g = 0; g<lis.count(); g++)
    {
        const QString& item = lis[g].trimmed();
        QString St ="";
        lst = item.split(QRegExp("public|protected|private "),  QString::SkipEmptyParts);
        for(int i=0; i<lst.count(); i++)
        {
            St = St+lst[i];
        }
        Lclss<<St;
    }
    for (int g = 0; g<Rclss.count(); g++)
    {
        Lclss[g].replace(0,Rclss[g].count(),"");
        Lclss[g] = Lclss[g].trimmed();
    }
    for (int g = 0; g<Rclss.count(); g++)
    {
        Rclss[g].remove(":");
        int s = 0;
        for (int i = 0; i<Rclss.count(); i++)
        {s=s+Lclss[i].count(Rclss[g]);}
        ui->label_NOC->setText( ui->label_NOC->text()+" "+Rclss[g]+" "+QString::number(s));
    }
}
void MainWindow::DIT(QString code)
{
    QStringList lst = code.split(QRegExp("class "),  QString::SkipEmptyParts);
    lst.removeFirst();
    QStringList lis, Lclss, Rclss;
    for (int g = 0; g<lst.count(); g++)
    {
        const QString& item = lst[g].trimmed();
        QString St ="";
        for(int i=0; i<item.count(); i++)
            if (item[i]!='\n')
                St=St+QString(item[i]);
            else break;
        lis<<St;
    }
    for (int g = 0; g<lis.count(); g++)
    {
        const QString& item = lis[g].trimmed();
        QString St ="";
        for(int i=0; i<item.count(); i++)
            if (item[i]!=' ')
                St=St+QString(item[i]);
            else break;
               Rclss<<St;
    }
    for (int g = 0; g<lis.count(); g++)
    {
        const QString& item = lis[g].trimmed();
        QString St ="";
        lst = item.split(QRegExp("public|protected|private "),  QString::SkipEmptyParts);
        for(int i=0; i<lst.count(); i++)
            St = St+lst[i];
        Lclss<<St;
    }
    for (int g = 0; g<Rclss.count(); g++)
    {
        Lclss[g].replace(0,Rclss[g].count(),"");
        Lclss[g] = Lclss[g].trimmed();
    }
    for (int g = 0; g<Rclss.count(); g++)
    {
        Rclss[g].remove(":");
        Lclss[g].remove(",");
    }
    int** mass=new int*[Rclss.count()+1];
    for(int i=0; i<=Rclss.count();i++)
        mass[i]= new int [Rclss.count()+1];
    for (int g = 0; g<Rclss.count(); g++)
        for (int j = 0; j<Rclss.count(); j++)
        {
            mass[g][j]=0;
            if (g!=j)
                {mass[g][j] = Lclss[g].count(Rclss[j]);}
        }
    int pst = 0;
    int prw = -1;
    int sum =0;
    int max = 0;
    ui->label_DIT->setText("");
    for (int i = 0; i<Rclss.count(); i++)
    {
        prw=i;
        pst=0;
        max = 0;
        sum = 0;
        while (pst<Rclss.count())
        {
            int k;
            if (mass[prw][pst]==1)
            {
                if (prw == i)
                    k=pst;
                mass[prw][pst]=0;
                prw=pst;
                pst=0;
                sum=sum+1;
            }
            else pst=pst+1;
            if (max<sum)
                max=sum;
            if ((pst==Rclss.count())&&(prw!=i))
            {
                prw = i;
                pst=0;
                sum=0;
            }
            if ((pst==Rclss.count())&&(prw==i))
                break;
        }
        for (int g = 0; g<Rclss.count(); g++)
            for (int j = 0; j<Rclss.count(); j++)
            {
                mass[g][j]=0;
                if (g!=j)
                    mass[g][j] = Lclss[g].count(Rclss[j]);
            }
        ui->label_DIT->setText( ui->label_DIT->text()+" "+Rclss[i]+" "+QString::number(max));
    }
}
void MainWindow::on_openfile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",tr("C++ Files (*.cpp *.h)"));
        if (fileName != "")
        {
                QFile file(fileName);
                if (!file.open(QIODevice::ReadOnly)) {
                    QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
                    return;
                }
                QTextStream in(&file);
                ui->plainTextEdit->setText(in.readAll());
                file.close();
        }
        code = ui->plainTextEdit->toPlainText();
}

void MainWindow::on_Metrics_clicked()
{
    QString code = ui->plainTextEdit->toPlainText();
    ui->label_SrKSMet->setText(QString::number(SrKolvoStrokMetodov(code)));
    ui->label_SrKSMod->setText(QString::number(SrKolvoStrokModuley(code)));
    ui->label_SrKSCl->setText(QString::number(SrKolvoStrokClassov(code)));
    MainWindow::MWC(code);
    MainWindow::DIT(code);
    MainWindow::NOC(code);
    ui->label_RFC->setText(QString::number(RFC(code)));
    MainWindow::LCOM(code);
    ui->label_NORM->setText(QString::number(NORM(code)));
    ui->Kol_Met->setText(QString::number(KolvoStrokMetodov(code)));
    ui->Kol_Mod->setText(QString::number(KolvoStrokModuley(code)));
    ui->Kol_Class->setText(QString::number(KolvoStrokClassov(code)));
    ui->Include->setText(QString::number(KolvoStrokModuleyInc(code)));
}
