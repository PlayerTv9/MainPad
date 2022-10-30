#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_actionGrassetto_triggered()
{
    QTextCharFormat formato{};
    if(ui->actionGrassetto->isChecked())
       formato.setFontWeight(QFont::Bold);
    else
        formato.setFontWeight(QFont::Normal);
    ui->textEdit->setCurrentCharFormat(formato);

}


void MainWindow::on_actionCorsivo_triggered()
{
    QTextCharFormat formato{};
    if(ui->actionCorsivo->isChecked())
        formato.setFontWeight(QFont::Cursive);
    else
        formato.setFontWeight(QFont::Normal);
    ui->textEdit->setCurrentCharFormat(formato);
}


void MainWindow::on_actionApri_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Apri un File", "C://");
    QFile file(filename);

    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Errore", "Impossibile aprire il file!");
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setPlainText(text);

    file.close();
}


void MainWindow::on_actionSalva_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Salva file", "C://", ".txt");
    QFile file(filename);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Errore", "Impossibile salvare il file!");
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();


}

