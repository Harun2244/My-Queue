#include <algorithm>
#include <initializer_list>
#include <iostream>

template <typename T>
class MojQueue {
  public:
  MojQueue()
      : pocetak_{0},
        kraj_{0},
        kapacitet_{30},
        size_{0},
        data_{new T[kapacitet_]} {}

  MojQueue(const std::initializer_list<T>& kju)
      : pocetak_{0},
        kraj_{kju.size() - 1},
        kapacitet_{30},
        size_{kju.size()},
        data_{new T[kapacitet_]} {
    std::copy(kju.begin(), kju.end(), data_);
  }

  MojQueue(const MojQueue& other)
      : pocetak_{other.pocetak_},
        kraj_{other.kraj_},
        kapacitet_{other.kapacitet_},
        size_{other.size_} {
    data_ = new T[kapacitet_];
    for (int i = pocetak_; i <= kraj_; ++i) {
      data_[i] = other.data_[i];
    }
  }

  MojQueue(MojQueue&& other)
      : pocetak_{other.pocetak_},
        kraj_{other.kraj_},
        kapacitet_{other.kapacitet_},
        size_{other.size_},
        data_{other.data_} {
    delete[] other.data_;
    other.pocetak_ = 0;
    other.kraj_ = 0;
    other.kapacitet_ = 0;
  }

  MojQueue& operator=(const MojQueue& other) {
    pocetak_ = other.pocetak_;
    kraj_ = other.kraj_;
    kapacitet_ = other.kapacitet_;
    size_ = other.size_;
    data_ = new T[kapacitet_];
    for (int i = pocetak_; i <= kraj_; ++i) {
      data_[i] = other.data_[i];
    }
    return *this;
  }

  MojQueue& operator=(MojQueue&& other) {
    pocetak_ = other.pocetak_;
    kraj_ = other.kraj_;
    kapacitet_ = other.kapacitet_;
    size_ = other.size_;
    data_ = other.data_;
    delete[] other.data_;
    other.pocetak_ = 0;
    other.kraj_ = 0;
    other.kapacitet_ = 0;
    return *this;
  }

  ~MojQueue() {
    delete[] data_;
    pocetak_ = 0;
    kraj_ = 0;
    kapacitet_ = 0;
    //std::cout << "destruktor aktiviran" << std::endl;
  }

  bool jePun() { return size_ == kapacitet_; }

  bool jePrazan() { return size_ == 0; }

  template <typename U>
  void ubaci(U&& x) {
    if (jePrazan()) {
      data_[pocetak_] = std::forward<U>(x);
      // kraj_ = (kraj_ + 1) % kapacitet_;
      ++size_;
    }

    else if (!jePun()) {
      kraj_ = (kraj_ + 1) % kapacitet_;
      data_[kraj_] = std::forward<U>(x);
      ++size_;
    } else {
      throw std::out_of_range{"Pun Queue!"};
    }
  }

  T izbaci() {
    if (!jePrazan()) {
      int indeks_za_pop = pocetak_;
      if(pocetak_ != kraj_){
       pocetak_ = (pocetak_ + 1) % kapacitet_;
      }
      else{}
      --size_;
      return std::move(data_[indeks_za_pop]);
    } else {
      throw std::out_of_range{"Prazan Queue"};
    }
  }

  int& operator[](int a) { return data_[a]; }

  size_t Pocetak() { return pocetak_; }

  size_t Kraj() { return kraj_; }

  size_t Pocetak() const { return pocetak_; }

  size_t Kraj() const { return kraj_; }

  size_t kapacitet() const {return kapacitet_;}

  size_t size() const {return size_;}

  private:
  size_t pocetak_;
  size_t kraj_;
  size_t kapacitet_;
  size_t size_;
  T* data_;
};
