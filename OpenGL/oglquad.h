#ifndef OGLQUAD_H
#define OGLQUAD_H

#include <QGLWidget>

class OGLQuad : public QGLWidget
{
protected:
    virtual void initializeGL();
    virtual void resizeGL(int nWidth, int nHeight);
    virtual void paintGL();

public:
    OGLQuad(QWidget *pwt = 0);
};

#endif // OGLQUAD_H
