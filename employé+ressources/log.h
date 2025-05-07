#ifndef LOG_H
#define LOG_H

#include <QDialog>
//#include <opencv2/core/mat.hpp>
#include <QtMultimedia/QAudioFormat>
#include <QtMultimedia/QAudioSource>
#include <QtMultimedia/QMediaCaptureSession>
#include <QTimer>
#include <QBuffer>
#include <QProcess>
namespace Ui {
class log;
}

class log : public QDialog
{
    Q_OBJECT

public:
    explicit log(QWidget *parent = nullptr);
    ~log();

private slots:
    void on_connect_2_clicked();

    void on_recof_2_clicked();
    //cv::Mat convertQImageToMat(const QImage &image);

    void on_recov_2_clicked();

private:
    Ui::log *ui;
    QMediaCaptureSession *captureSession;
    QAudioSource *audioSource;
    QBuffer *audioBuffer;
};

#endif // LOG_H
