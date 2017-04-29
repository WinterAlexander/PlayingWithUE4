cmake_minimum_required (VERSION 2.6)
project (UE4)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER "C:/Program Files/mingw-w64/x86_64-5.3.0-posix-seh-rt_v4-rev0/mingw64/bin/g++.exe")
set(CMAKE_C_COMPILER "C:/Program Files/mingw-w64/x86_64-5.3.0-posix-seh-rt_v4-rev0/mingw64/bin/gcc.exe")

include("C:/Users/Alexander Winter/Desktop/PlayingWithUE4/Intermediate/ProjectFiles/IncludeDirectories.cmake")
include("C:/Users/Alexander Winter/Desktop/PlayingWithUE4/Intermediate/ProjectFiles/Definitions.cmake")
include("C:/Users/Alexander Winter/Desktop/PlayingWithUE4/Intermediate/ProjectFiles/UE4Editor.cmake")

set(MONO_ROOT_PATH "C:/Program Files/Epic Games/UE_4.15/Engine/Binaries/DotNET")
set(BUILD cd "${MONO_ROOT_PATH}")

# Custom target for UE4Editor project, Development configuration
add_custom_target(UE4Editor-Development ${BUILD} && UnrealBuildTool.exe UE4Editor Win64 Development -project="C:/Users/Alexander Winter/Desktop/PlayingWithUE4/PlayingWithUE4.uproject" -game)
add_custom_target(UE4Editor-Development-CLEAN ${BUILD} && UnrealBuildTool.exe UE4Editor Win64 Development -project="C:/Users/Alexander Winter/Desktop/PlayingWithUE4/PlayingWithUE4.uproject" -clean)

include("C:/Users/Alexander Winter/Desktop/PlayingWithUE4/Intermediate/ProjectFiles/UE4Game.cmake")

# Custom target for UE4Game project, Development configuration
add_custom_target(UE4Game-Development ${BUILD} && UnrealBuildTool.exe UE4Game Win64 Development -project="C:/Users/Alexander Winter/Desktop/PlayingWithUE4/PlayingWithUE4.uproject" -game)
add_custom_target(UE4Game-Development-CLEAN ${BUILD} && UnrealBuildTool.exe UE4Game Win64 Development -project="C:/Users/Alexander Winter/Desktop/PlayingWithUE4/PlayingWithUE4.uproject" -clean)

include("C:/Users/Alexander Winter/Desktop/PlayingWithUE4/Intermediate/ProjectFiles/PlayingWithUE4.cmake")

# Custom target for PlayingWithUE4 project, Development configuration
add_custom_target(PlayingWithUE4-Development ${BUILD} && UnrealBuildTool.exe PlayingWithUE4 Win64 Development -project="C:/Users/Alexander Winter/Desktop/PlayingWithUE4/PlayingWithUE4.uproject" -game)
add_custom_target(PlayingWithUE4-Development-CLEAN ${BUILD} && UnrealBuildTool.exe PlayingWithUE4 Win64 Development -project="C:/Users/Alexander Winter/Desktop/PlayingWithUE4/PlayingWithUE4.uproject" -clean)

include("C:/Users/Alexander Winter/Desktop/PlayingWithUE4/Intermediate/ProjectFiles/PlayingWithUE4Editor.cmake")

# Custom target for PlayingWithUE4Editor project, Development configuration
add_custom_target(PlayingWithUE4Editor-Development ${BUILD} && UnrealBuildTool.exe PlayingWithUE4Editor Win64 Development -project="C:/Users/Alexander Winter/Desktop/PlayingWithUE4/PlayingWithUE4.uproject" -game)
add_custom_target(PlayingWithUE4Editor-Development-CLEAN ${BUILD} && UnrealBuildTool.exe PlayingWithUE4Editor Win64 Development -project="C:/Users/Alexander Winter/Desktop/PlayingWithUE4/PlayingWithUE4.uproject" -clean)

add_executable(PleaseIgnoreMe ${PlayingWithUE4Editor_FILES})