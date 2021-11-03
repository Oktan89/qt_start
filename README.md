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