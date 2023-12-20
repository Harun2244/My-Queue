 A generic queue data structure using a circular buffer approach.

The container supports the following methods:

    A constructor that takes the maximum number of elements that can be stored in the circular buffer.
    Standard set of constructors and destructors.
    A push method that adds an element to the end of the queue. This method is implemented to recognize move semantics. If it's not possible to add an element to the queue, an out_of_range exception is thrown.
    A pop method that returns and removes the first element in the queue by value.
    front and back methods, along with their const overloads.
    Methods size, capacity, and empty.

