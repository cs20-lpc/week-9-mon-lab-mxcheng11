template <typename T>
LinkedQueue<T>::LinkedQueue() {
    // TODO
}

template <typename T>
LinkedQueue<T>::LinkedQueue(const LinkedQueue<T>& copyObj) {
    copy(copyObj);
}

template <typename T>
LinkedQueue<T>& LinkedQueue<T>::operator=(const LinkedQueue<T>& rightObj) {
    if (this != &rightObj) {
        clear();
        copy(rightObj);
    }
    return *this;
}

template <typename T>
LinkedQueue<T>::~LinkedQueue() {
    clear();
}

template <typename T>
T LinkedQueue<T>::back() const {
    // TODO
}

template <typename T>
void LinkedQueue<T>::clear() {
    // TODO
}

template <typename T>
void LinkedQueue<T>::copy(const LinkedQueue<T>& copyObj) {
    // TODO
}

template <typename T>
void LinkedQueue<T>::dequeue() {
    // TODO
}

template <typename T>
void LinkedQueue<T>::enqueue(const T& elem) {
    // TODO
}

template <typename T>
T LinkedQueue<T>::front() const {
    // TODO
}

template <typename T>
int LinkedQueue<T>::getLength() const {
    return this->length;
}

template <typename T>
bool LinkedQueue<T>::isEmpty() const {
    return this->length == 0;
}
