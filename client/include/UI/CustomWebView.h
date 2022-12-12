#ifndef CUSTOMWEBVIEW_H
#define CUSTOMWEBVIEW_H

#include <QtWebEngineWidgets/QWebEngineView>
#include <QWidget>

class CustomWebView : public QWebEngineView {
    Q_OBJECT

protected:
    bool event(QEvent* evt);
    bool eventFilter(QObject *obj, QEvent *ev);

signals:
    void playerStateMightChanged();

public:
    explicit CustomWebView(QWidget *parent = nullptr);
    ~CustomWebView();


private:
    QObject *childObj = nullptr;
};

#endif // CUSTOMWEBVIEW_H
