set(CMAKE_PREFIX_PATH "C:/Qt/5.15.2/mingw81_64/lib/cmake")

find_package(Qt5 COMPONENTS

        Core

        Gui

        Widgets

        REQUIRED)

target_link_libraries(MySkillboxApp

        Qt5::Core

        Qt5::Gui

        Qt5::Widgets)

При проблемах с debian sudo apt install libxcb-xinerama0
export QT_DEBUG_PLUGINS=1 (пишем в консоли для отладки приложений QT)
https://wiki.qt.io/Building_Qt_5_from_Git#Linux.2FX11
https://www.cyberforum.ru/qt/thread2472880.html

Для сборки слотов qt5_wrap_cpp (MOC_SOURCES ${HEADERS})
http://www.devexp.ru/2010/01/cmake-i-qt/