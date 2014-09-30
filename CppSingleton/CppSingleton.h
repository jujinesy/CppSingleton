#pragma once
#include <mutex>
#include <memory>

template<typename T>
class CppSingleton
{
public:
	static T* GetInstance()
	{
		std::call_once(m_onceFlag, [] {
			m_pInstance.reset(new T);
		});

		return m_pInstance.get();
	}

private:
	static std::shared_ptr<T> m_pInstance;
	static std::once_flag m_onceFlag;
};
template<typename T> std::shared_ptr<T> CppSingleton<T>::m_pInstance = NULL;
template<typename T> std::once_flag CppSingleton<T>::m_onceFlag;