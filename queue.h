#ifndef _QUEUE_H_
#define _QUEUE_H_
#include "linklist.h"

struct single_queue {
    struct single_linklist *head;
    int size;
};

struct double_queue {
    struct double_linklist *head;
    int size;
};


class albert_queue : public albert_linklist {

public:
    albert_queue();
    ~albert_queue();
    int queue_create(int size);
    int queue_push(TARGET_DATATYPE data);
    TARGET_DATATYPE queue_pop();
private:

};

#endif
