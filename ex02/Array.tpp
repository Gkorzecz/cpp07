

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array() : size(0), rawArray(new T[0])
{}

template <typename T>
Array<T>::Array(unsigned int n) : size(n), rawArray(new T[n])
{}

template <typename T>
Array<T>::Array(const Array<T> &other)
{
    this->rawArray = NULL;
    *this = other;
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->rawArray;
}

template <typename T>
unsigned int Array<T>::getSize() const
{
    return (this->size);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> & original)
{
    if (this->rawArray != NULL)
    {
        delete[] this->rawArray;
    }
    this->size = original.size;
    this->rawArray = new T[this->size];
    for(unsigned int position = 0; position < this->size; position++)
    {
        this->rawArray[position] = original.rawArray[position];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int position) const
{
    if (position >= this->size)
    {
        std::stringstream buffer;
        buffer << "Bad position " << position;
        throw std::out_of_range(buffer.str()); 
    }
    return (this->rawArray[position]);
}


template <typename T>
std::ostream & operator<<(std::ostream &os, const Array<T> &array)
{
    size_t size = array.getSize();
    for(size_t position = 0; position < size; position++)
    {
        os << array[position];
    }
    return (os);
}

#endif