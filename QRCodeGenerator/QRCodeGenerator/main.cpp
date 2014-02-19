#include "Widget.h"
#include <QApplication>
#include <QTextCodec>


int main(int argc, char *argv[])
{
    QTextCodec::setCodecForCStrings( QTextCodec::codecForName( "utf8" ) );

    QApplication app(argc, argv);

    Widget w;
    w.show();
    
    return app.exec();
}
