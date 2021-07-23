#include <iostream>

typedef struct	s_Data
{
	std::string str;
	int			num;
	std::string	str2;
}				Data;

void *serialize()
{
	Data *data = new Data;
	char ascci[96];

	for (int i = 32 ; i < 128 ; i++)
		ascci[i - 32] = i;
	data->num = rand() % 128;
	data->str.reserve(8);
	data->str2.reserve(12);
	for (int i = 0 ; i < 12 ; i++)
	{
		if (i < 8)
			data->str += ascci[rand() % 96];
		data->str2 += ascci[rand() % 96];
	}
	
	char *ret = new char[54];
	std::memcpy(ret, data, 54);
	delete data;
	return ret;
}

Data *deserialize(void *ptr)
{
	return (Data *)ptr;
}

int	main(void)
{
	std::srand (std::time (NULL));
	void *ptr = serialize();
	Data *data = deserialize(ptr);
	
	std::cout << "Data str: " << data->str << std::endl;
	std::cout << "Data int: " << data->num << std::endl;
	std::cout << "Data str2: " << data->str2 << std::endl;
}
