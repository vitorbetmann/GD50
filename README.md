# 8 Classic Remade in C

---

## Project Details

- Recreated classic games in C to deepen understanding of low-level programming and game architecture, triggering the development of the SMILE Game Engine.
- Gained hands-on experience integrating **C**, **Python**, **CMake**, and **shell scripting**.
- Deployed playable versions online via **WebAssembly** (see links below).

---

## 🕹️ Games

### 🟢 Pong

A fully playable Pong clone with build automation support.

- Wrote a **Python script** that auto-generates a `.cmake` file listing all `.c` source files.
- This script is included in `CMakeLists.txt` to keep build configuration clean and up-to-date.

**Play:** [itch.io](https://vitorbetmann.itch.io/pong)  
**Repo:** [GitHub Repo](https://github.com/vitorbetmann/pong)

---

### 🐤 Flappy Bird

- 🧠 Designed a **state machine** using **function pointers** to promote modular, readable, and scalable code. *(See SMILE Game Engine)*
- 📊 Built a **custom queue** with O(1) enqueue/dequeue operations for managing pipes.
- ⚡ Applied a **tracked iteration** optimization so the bird only checks collision with the next pipe, reducing per-frame computation.

**Play:** [itch.io](https://vitorbetmann.itch.io/fifty-bird)  
**Repo:** [GitHub Repo](https://github.com/vitorbetmann/fifty_bird)

---
