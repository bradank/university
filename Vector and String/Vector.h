template<typename T>
class Vector
{
public:
	Vector(T* _data, size_t _size)
	{
		if (_data != nullptr && _size > 0)
		{
			data = new T[_size];
			size = capacity= _size;
			for (size_t i = 0; i < _size; i++)
			{
				data[i] = _data[i];
			}
		}
		else
		{
			data = nullptr;
			size = capacity = 0;
		}
	}

	Vector()
	{
		data = nullptr;
		size = capacity = 0;
	}

	Vector(const Vector& other)
	{
		if (other.data != nullptr && other.size > 0)
		{
			data = new T[other.size];
			size = capacity = other.size;
			for (size_t i = 0; i < size; i++)
			{
				data[i] = other.data[i];
			}
		}
		else
		{
			data = nullptr;
			size = capacity = 0;
		}
	}

	Vector& operator=(const Vector& rhs)
	{
		if (this == &rhs) return *this;

		if (rhs.data != nullptr && rhs.size > 0)
		{
			data = new T[rhs.size];
			size = capacity = rhs.size;
			for (size_t i = 0; i < size; i++)
			{
				data[i] = rhs.data[i];
			}
		}
		else
		{
			data = nullptr;
			size = capacity = 0;
		}

		return *this;
	}

	~Vector()
	{
		delete[] data;
	}

	T& operator[](size_t idx)
	{
		return data[idx];
	}

	const T& operator[](size_t idx) const
	{
		return data[idx];
	}

	void push_back(const T& element)
	{
		if ((size + 1) > capacity)
		{
			if (capacity == 0)
			{
				capacity = 1;
			}
			resize(capacity * 2);
		}

		data[size] = element;
		size++;
	}

	size_t GetSize()
	{
		return size;
	}

	using predicate = bool(*)(const T&);
	size_t findAll(predicate cond)
	{
		size_t counter = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (cond(data[i]) == true)
			{
				counter++;
			}
		}
		return counter;
	}
private:
	T* data;
	size_t size;
	size_t capacity;

	void resize(size_t newCapacity)
	{
		T* temp = new T[newCapacity];
		for (size_t i = 0; i < size; i++)
		{
			temp[i] = data[i];
		}
		delete[] data;
		data = temp;
		capacity = newCapacity;
	}
};
