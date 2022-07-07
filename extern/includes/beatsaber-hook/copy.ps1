.\build.ps1

& adb push ./build/libbeatsaber-hook_1_2_3.so /sdcard/Android/data/com.beatgames.beatsaber/files/libs/libbeatsaber-hook_1_2_3.so
Copy-Item -Force build/libbeatsaber-hook_1_0_0.so ../libbeatsaber-hook_1_0_0.so