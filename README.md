# Basic MapLibre Native (Qt) harita

## 1) maplibre-native-qt'yi kur (bir kerelik)

```bash
git clone --recurse-submodules https://github.com/maplibre/maplibre-native-qt.git
cd maplibre-native-qt
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release \
      -DMLN_QT_WITH_WIDGETS=ON -DCMAKE_INSTALL_PREFIX=$HOME/maplibre-qt
cmake --build build
cmake --install build
```

(Qt6 ve OpenGL dev paketleri gerekli. Submodule'ler büyük, ilk build uzun sürer.)

## 2) Uygulamayı derle

```bash
cmake -B build -DCMAKE_PREFIX_PATH="$HOME/maplibre-qt;/path/to/Qt/6.x/gcc_64"
cmake --build build
./build/basic_map
```

İnternet bağlantısı lazım (tile'lar OpenFreeMap'ten geliyor).
