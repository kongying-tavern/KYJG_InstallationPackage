#pragma once
#include <Windows.h>
#include <QDir>
#include <QLabel>
#include <QProcess>
#include <QFileDialog>
#include <QMouseEvent>
#include <QPropertyAnimation>
#include <QtWidgets/QMainWindow>
#include "ui_InstallationPackage.h"
#include "QtWidgetsMessageBox.h"
#include "QtWidgetsMessageBox2.h"

class InstallationPackage : public QMainWindow
{
    Q_OBJECT

public:
    InstallationPackage(QWidget *parent = Q_NULLPTR);

private:
    Ui::InstallationPackageClass ui;


private:
	bool isValidPath = false;
	bool isInstallFinish = false;
	bool isDownBar = false;
	QLabel *MainMaskLabel = nullptr;

	QLabel *ErrorMessageLabel = nullptr;

	QtWidgetsMessageBox *WidgetBox = nullptr;
	QtWidgetsMessageBox2 *WidgetBox2 = nullptr;
private:
	QString SourcePath;
	QString InstallPath="E:/tmp/123";
	QProcess *unZip_7z = nullptr;

private:
	QPoint m_Press;
	QPoint m_Move;
	bool leftBtnClk = false;

private:
	void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
private:
	bool isCoundUn7z();
	bool un7z();
	void ShowMask();
	void HideMask();

private slots:
	void Mini();
	void Exit();

	void isClose(bool isClose);

	void ShowMessageLabel(QString text);
	void HideMessageLabel();
	void ShowMessageBox(QString text);
	void ShowMessageBox2(QString text);

	void Install();
	void CustomSetChange();
	void ChangePathBox();
	void PathChanged(QString path);
	void Start();

	void unZip_ReadStandardOutput();
	void unZip_finished(int exitCode);

	void ReceiveCloseSelfSignalFromMainWidgets();
	void ReceiveCloseSelfSignalFromMainWidgets(bool isOK);
};
