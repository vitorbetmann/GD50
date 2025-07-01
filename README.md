# 8 Classic Remade in C

---

## Project Details

- Recreated classic games in C to deepen understanding of low-level programming and game architecture, triggering the development of the SMILE Game Engine.
- Gained hands-on experience integrating multiple languages and tools, including C, Python, CMake, and shell scripting.
- Made all games playable online via WebAssembly builds, see below.

---

## 🕹️ Games

### 🟢 Pong

A fully playable Pong clone with build automation support.

- Created a Python script to generate a .cmake file listing all .c files, which is included in CMakeLists.txt to set the executable sources.

[itch.io](https://vitorbetmann.itch.io/pong)  
[Repo](https://github.com/vitorbetmann/pong)

---

### 🐤 Flappy Bird

- Designed a state machine architecture using function pointers to maintain modular, readable, and scalable code. (See SMILE Game Engine).
- Built a custom queue to manage pipes with a O(1) enqueue and dequeue operations.
- Applied tracked iteration optimization so the Bird only checks collision with the next pipe, reducing per-frame computation.

[itch.io](https://vitorbetmann.itch.io/fifty-bird)  
[Repo](https://github.com/vitorbetmann/fifty_bird)

---
