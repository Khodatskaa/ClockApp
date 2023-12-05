#ifndef InnerSize_h
#define InnerSize_h

struct InnerSize
{
public:
    float width;
    float height;

    InnerSize()
    {
        this->width = 150;
        this->height = 50;
    }

    InnerSize(float width, float height)
    {
        this->width = width;
        this->height = height;
    }
};

#endif
