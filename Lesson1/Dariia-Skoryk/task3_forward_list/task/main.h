#pragma once

#include <QCoreApplication>
#include <iostream>
#include <forward_list>
#include <ctime>

template <class T>
void reverse(std::forward_list<T>& listToReverse) {
    std::forward_list<T> temporaryForwardList;
    for (const auto& entry : listToReverse) {
        temporaryForwardList.push_front(entry);
    }
    listToReverse.clear();
    listToReverse.splice_after(listToReverse.before_begin(), temporaryForwardList);
}

template <class T>
void output(const std::forward_list<T>& forwardList) {
    for (const auto& entry : forwardList) {
        std::cout << entry << ' ';
    }
    std::cout << std::endl;
}
