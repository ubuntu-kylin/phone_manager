#include <QApplication>
#include "html5applicationviewer.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Html5ApplicationViewer viewer;
    viewer.setOrientation(Html5ApplicationViewer::ScreenOrientationAuto);
//    viewer.setWindowFlags(Qt::FramelessWindowHint);
    viewer.setWindowTitle("优麒麟手机助手");
    viewer.setMaximumSize(900,600);
    viewer.setMinimumSize(900,600);

    viewer.showNormal();
//    viewer.showMaximized();


//    viewer.showExpanded();
    viewer.loadFile(QLatin1String("html/index.html"));
//        viewer.loadFile(QLatin1String("/home/zwh/html5ppt/youdao/index.html"));



//    viewer.loadFile(QLatin1String("http://demo.marcofolio.net/3d_animation_css3/"));



    return app.exec();
}
