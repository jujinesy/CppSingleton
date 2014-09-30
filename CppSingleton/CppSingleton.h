#pragma once
#include <mutex>
#include <memory>
#include <assert.h>

template <class T>
class CppSingleton
{
public:
	static T* Instance() {
		if (!m_pInstance) {
			m_bInitialized = true;
			m_pInstance = new T;
		}
		assert(m_pInstance != NULL);
		return m_pInstance;
	}

	static void destroyInstance() {
		if (m_pInstance) {
			m_bInitialized = false;
			delete m_pInstance;
			m_pInstance = NULL;
		}
	}

	/**
	* @note
	* 유일한 인스턴스를 보장하기 위한 값
	* new <class T> 를 막기 위한 flag
	*/
	static bool m_bInitialized;

protected:
	CppSingleton() {
		assert(!m_pInstance);
		assert(m_bInitialized);
	};
private:
	static T* m_pInstance;
	CppSingleton(CppSingleton const&);            // 복사 숨김
	CppSingleton& operator=(CppSingleton const&); // 할당 숨김
};

template <class T> T* CppSingleton<T>::m_pInstance = NULL;
template <class T> bool CppSingleton<T>::m_bInitialized = false;


//template<typename T>
//class CppSingleton
//{
//public:
//	static T* GetInstance()
//	{
//		std::call_once(m_onceFlag, [] {
//			m_pInstance.reset(new T);
//		});
//
//		return m_pInstance.get();
//	}
//
//private:
//	static std::shared_ptr<T> m_pInstance;
//	static std::once_flag m_onceFlag;
//};
//template<typename T> std::shared_ptr<T> CppSingleton<T>::m_pInstance = NULL;
//template<typename T> std::once_flag CppSingleton<T>::m_onceFlag;