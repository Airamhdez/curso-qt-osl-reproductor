#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QWidget>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QDir>
#include <QSlider>
#include <QFileDialog>
#include <QToolButton>
#include <QMenu>
#include <QMenuBar>
#include "mensaje.h"
#include "metadatadialog.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    QGridLayout*        lytMain_;
    QWidget*            wgtMain_;
    QMediaPlayer*       mediaPlayer_;
    QSlider*            playerSlider_;
    QVideoWidget*       videoWidget_;
    QSlider*            volumeSlider_;
    QToolButton*        btnOpen_;
    QToolButton*        btnPlay_;
    QToolButton*        btnPause_;
    QToolButton*        btnStop_;
    QMenuBar* mainMenu_;
    QMenu* mnuArchivo_;
    QAction* actArchivoAbrir_;
    QMenu* mnuAyuda_;
    QAction* actAyudaAcercaDe_;
    QMenu* mnuVer_;
    QAction* actPantallaCompleta_;
    QAction* actMetadatos_;

private slots:
    void onOpen();
    void onSeek();
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);
    void onVolumeChanged(int volume);
    void alAcercaDe();
    void alMetadatos();

};

#endif // MAINWINDOW_H
