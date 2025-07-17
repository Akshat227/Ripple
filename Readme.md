# 🌊 Ripple Simulator

A simple and interactive ripple simulator built with **C++**, **SFML**, and **Dear ImGui-SFML**.  
Click anywhere to drop ripples. Tweak their speed, size, and thickness in real-time using ImGui.

> 🎯 Made by Akshat — martial artist by day, code artist by night 😎

---

## 🖼️ Preview

*Imagine ripples rippling gracefully across the dark void... ahh.*  
(Coming soon: gif/screenshots 👀)

---

## 🔧 Features

- 🖱️ Click to create ripples.
- 🎛️ Real-time controls using ImGui:
  - Max radius
  - Speed
  - Outline thickness
- 🌈 Beautiful, fading visuals (transparent rings with alpha blending)

---

## 🚀 Getting Started

### 1. Clone this repo
```bash
git clone https://github.com/yourusername/ripple-simulator.git
cd ripple-simulator
```
## 2. Dependencies
Make sure these are installed:

- SFML (>=2.5)

- ImGui

- ImGui-SFML

## Install via APT:

```bash

sudo apt install libsfml-dev cmake
Then build ImGui-SFML manually (if not available via package manager):
```
```bash
Copy
Edit
git clone https://github.com/eliasdaler/imgui-sfml.git
cd imgui-sfml
cmake .
make
sudo make install
```
## 3. Build
If using CMake:

```bash

mkdir build
cd build
cmake ..
make
./ripple
Or using g++ directly:
```
```bash

g++ main.cpp -o ripple \
    -lsfml-graphics -lsfml-window -lsfml-system \
    -lImGui-SFML -lImGui
```
## 🤔 Why?
Because sometimes, you just wanna click and watch water go bloop bloop
…And also flex SFML + ImGui integration skills. Like a boss 💪

## 🧠 Future Ideas
- 🌈 Color picker for ripple color

- 📸 Save screenshots

- 🎵 Ripple sound effect

- 🎮 Game mode: Zen sandbox or challenge

📜 License
MIT License — Free to use.
