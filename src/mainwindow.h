#pragma once

#include <QMainWindow>
#include <QToolBar>
#include <QLineEdit>
#include <QProgressBar>
#include <QStatusBar>
#include <QLabel>
#include <QWebEngineView>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override = default;

private slots:
    void onAddressEntered();

private:
    void setupToolBar();
    void setupMenuBar();
    void setupStatusBar();

    QToolBar       *m_toolBar      = nullptr;
    QLineEdit      *m_addressBar   = nullptr;
    QAction        *m_backAction   = nullptr;
    QAction        *m_forwardAction= nullptr;
    QAction        *m_reloadAction = nullptr;
    QAction        *m_homeAction   = nullptr;
    QProgressBar   *m_progressBar  = nullptr;
    QLabel         *m_progressLabel= nullptr;
    QWebEngineView *m_webView      = nullptr;
};