#pragma once

#include <QMainWindow>

class QLineEdit;
class QToolBar;
class QAction;
class QProgressBar;
class QLabel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    void setupToolBar();   // Module 2 -- done below
    void setupMenuBar();   // Module 2 -- TODO: finish this (see comments in .cpp)
    void setupStatusBar(); // Module 2 -- TODO: finish this (see comments in .cpp)

    QToolBar *m_toolBar = nullptr;
    QAction *m_backAction = nullptr;
    QAction *m_forwardAction = nullptr;
    QAction *m_reloadAction = nullptr;
    QAction *m_homeAction = nullptr;
    QLineEdit *m_addressBar = nullptr;
    QProgressBar *m_progressBar = nullptr;
    QLabel *m_progressLabel = nullptr;
};