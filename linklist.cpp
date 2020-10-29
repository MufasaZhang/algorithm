#include <stdio.h>
#include "linklist.h"

albert_linklist::albert_linklist() {

}

albert_linklist::~albert_linklist() {

}

int albert_linklist::insert_linklist(struct single_linklist *addr, TARGET_DATATYPE data) {
    if (NULL == addr) return -1;
    struct single_linklist *ptr = new single_linklist;
    if (NULL == ptr) return -2;
    ptr->data = data;
    ptr->next = addr->next;
    addr->next = ptr;
}

int albert_linklist::insert_linklist(struct double_linklist *addr, TARGET_DATATYPE data) {
    if (NULL == addr) return -1;
    struct double_linklist *ptr = new double_linklist;
    if (NULL == ptr) return -2;
    ptr->data = data;
    ptr->next = addr->next;
    ptr->pre = addr;
    if (addr->next) 
        addr->next->pre = ptr;
    addr->next = ptr;
}

int albert_linklist::delete_linklist(struct single_linklist *addr, TARGET_DATATYPE data) {
    if (NULL == addr) return -1;
    struct single_linklist *ptr = addr, *tmp = NULL;
    while (NULL != ptr->next) {
        if (ptr->next->data == data) {
            tmp = ptr->next;
            ptr->next = ptr->next->next;
            delete tmp;
            return 0;
        }
    }
    return 1;
}

int albert_linklist::delete_linklist(struct double_linklist *addr, TARGET_DATATYPE data) {
    if (NULL == addr) return -1;
    struct double_linklist *ptr = addr, *tmp = NULL;
    while (NULL != ptr->next) {
        if (ptr->next->data == data) {
            tmp = ptr->next;
            ptr->next = ptr->next->next;
            tmp->next->pre = ptr;
            delete tmp;
            return 0;
        }
    }
    return 1;
}

int albert_linklist::destroy_linklist(struct single_linklist *addr) {
    if (NULL == addr) return -1;
    struct single_linklist *ptr = addr, *tmp;
    while (ptr != NULL) {
        tmp = ptr;
        ptr = ptr->next;
        delete tmp;
    }
    return 0;
}

int albert_linklist::destroy_linklist(struct double_linklist *addr) {
    if (NULL == addr) return -1;
    struct double_linklist *ptr = addr, *tmp;
    while (ptr != NULL) {
        tmp = ptr;
        ptr = ptr->next;
        delete tmp;
    }
    return 0;
}




