# 🎹 DigiMelody: A Cross-Platform Digital Instrument Simulator

> **Prototype built with Raylib + C | Final version planned with SDL2/OpenGL + RtAudio**

---

## 📖 Overview

**DigiMelody** is a lightweight, cross-platform digital instrument simulator that enables users to play and interact with virtual instruments such as:

- 🎹 Piano  
- 🥁 Drums  
- 🎸 Guitar  
- 🎼 Xylophone  
- 🎶 Flute  

The main application aims to offer professional-grade **low-latency audio (<10ms)**, real-time responsiveness, and smooth graphics, making it ideal for **musicians, educators, learners, and developers**.

The prototype version (this repo) is built using **Raylib** for quick interface testing and audio feedback using native C. The production version will shift to **SDL2**, **OpenGL**, and **RtAudio** for greater control and extensibility.

---

## 🎯 Objectives

- Develop a **modular, low-latency digital instrument system**
- Support **interactive input** (keyboard/touch/mouse)
- Ensure **cross-platform compatibility** (Windows/Linux)
- Minimize system resources: **<15% CPU**, **<50MB RAM** per instrument
- Lay groundwork for future expansion into **browser builds** (WASM) and **hardware-based instruments**

---

## 📌 Features (Prototype)

✅ Built with **C + Raylib**  
✅ Supports basic instrument interaction  
✅ Modular structure for easy migration to SDL2  
✅ Simple keyboard-to-note mapping  
✅ Smooth instrument switching  
✅ Clean and responsive UI

---

## 🔨 Planned Tech Stack (Main Application)

| Component           | Technology                        |
|---------------------|-----------------------------------|
| **Language**         | C / C++                           |
| **Graphics**         | SDL2, OpenGL 3.3                  |
| **Audio**            | RtAudio (low-latency playback)   |
| **Graphics Tools**   | Photoshop / GIMP (for UI assets) |
| **OS Support**       | Linux, Windows                    |

---

## 🧠 Methodology

### 🔈 Phase 1: Audio Setup
- Setup playback with **RtAudio**
- Tune latency to **<10ms**
- Implement basic volume, pitch, and envelope control

### 🎵 Phase 2: Instrument Modeling
- Keyboard/mouse/touch mapping
- Procedural or sampled sound synthesis

### 🎛️ Phase 3: UI & Smart Features
- Graphical layout via SDL2/OpenGL
- Live feedback, chord hints (planned)

---

## 🚀 Getting Started (Prototype)

### Requirements

- [Raylib](https://www.raylib.com/)  
- GCC or Clang  
- Linux/Windows system with OpenGL support

### Build Instructions

```bash
# Clone this repo
git clone https://github.com/yourusername/digimelody.git
cd digimelody

# Build
gcc main.c -o digimelody -lraylib -lm -ldl -lpthread -lGL -lrt

# Run
./digimelody
```

> Make sure Raylib is installed properly on your system.

---

## 🧪 Performance Targets

| Metric          | Target Value         |
|------------------|----------------------|
| Latency          | < 10 ms              |
| CPU Usage        | < 15% per instrument |
| RAM Usage        | < 50 MB per instrument |

Designed to run on low-end systems and portable devices.

---

## 🌱 Future Enhancements

- WebAssembly build for browser demo
- Additional instruments and effects
- Interactive tutorials and note guidance
- Chord recognition and scale helpers
- **Standalone hardware version** using embedded Linux
- Online collaboration features

---

## 🧩 Challenges Faced

- Real-time cross-platform sound generation
- Synchronization of audio and graphics threads
- Manual integration of SDL2/OpenGL with audio engines
- Audio callback tuning for latency control

---

## 👨‍💻 Author

**R. Haricharan**  
📚 MCA Candidate – BMS College of Engineering  
📬 [Optional: insert contact or GitHub profile link]

---

## 📄 References

- [Raylib](https://www.raylib.com/)  
- [SDL2](https://wiki.libsdl.org/)  
- [OpenGL 3.3](https://www.khronos.org/registry/OpenGL-Refpages/)  
- [RtAudio](https://www.music.mcgill.ca/~gary/rtaudio/)  
- [SFML](https://www.sfml-dev.org)  
- [Flowkey (for note reading)](https://www.flowkey.com/en/piano-guide/reading-notes)

---

## 📷 Screenshots / Demos (To Be Added)
Add screenshots or videos of your interface once available.
