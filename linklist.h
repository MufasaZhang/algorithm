#ifndef _LINKLIST_H_
#define _LINKLIST_H_
#define TARGET_DATATYPE int

struct single_linklist {
    TARGET_DATATYPE data;
    struct single_linklist *next;
};

struct double_linklist {
    struct double_linklist *pre;
    TARGET_DATATYPE data;
    struct double_linklist *next;
};

class albert_linklist {
public:
    albert_linklist();
    ~albert_linklist();

    //void create_linklist(struct single_linklist *,int num);
    int insert_linklist(struct single_linklist *addr, TARGET_DATATYPE data);
    int insert_linklist(struct double_linklist *addr, TARGET_DATATYPE data);

    int delete_linklist(struct single_linklist *addr, TARGET_DATATYPE data);
    int delete_linklist(struct double_linklist *addr, TARGET_DATATYPE data);

    int destroy_linklist(struct single_linklist *addr);
    int destroy_linklist(struct double_linklist *addr);

private:

};

#endif
