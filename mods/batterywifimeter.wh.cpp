// ==WindhawkMod==
// @id              batterywifimeter
// @name            battery-wifi meter
// @description     Battery and wifi meters over the taskbar: Minecraft pixel icons plus smooth liquid glass and sci-fi designs
// @version         1.0.4
// @author          acegamer819
// @include         explorer.exe
// @github          https://github.com/jacksongoodrich27-lab
// @license         MIT
// @compilerOptions -lgdi32 -luser32 -lshell32 -lwlanapi
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
# Minecraft Status Bars

Two meters drawn over your taskbar:

* **Battery meter** (hearts row): 10% per icon, 5% per half icon.
* **Wifi meter** (hunger row): 10% per icon, 5% per half icon.

Each meter has its own settings: on/off, design, pixel offsets
(positive X = right, positive Y = down), anchor, size, idle animation,
taskbar-gone animation, animation length and more.

## Designs

**Battery - Minecraft:** Classic, Golden, Poison, Wither, Frozen, Hardcore,
Pink Round, Apple, Star, Diamond, Ender, Lava, Soul.
**Battery - smooth:** Liquid Glass Capsule, Sci-Fi Energy Cells, Neon Pulse
Line, Glass Orbs.

**Wifi - Minecraft:** Drumstick, Steak, Bread, Cookie, Carrot, Golden Carrot,
Melon Slice, Mushroom, Cake Slice, Golden Apple, Apple, Salmon, Beetroot.
**Wifi - smooth:** Liquid Glass Bars, Sci-Fi Signal Arcs, Hologram Spectrum,
Glass Orbs.

## Smooth designs

The smooth designs are drawn with anti-aliased vector shapes and have their
own animations (liquid waves, bubbles, glass sheen, scanning sweeps, energy
pulses, ripples). Pick a color or use Auto, which shifts from red to green
with the level. Animation can be Full, Subtle or Off, and the speed is
adjustable.

## Colors

Ice Blue, Aqua, Emerald, Magenta, Amber, Violet, Crimson, Auto (by level) and
**Liquid Glass**, a clear frosted tint that slowly drifts between soft blue,
lavender, pink and mint (static soft blue when animation is Off).

## Minecraft designs

"High-quality shading" adds a soft gradient, bevelled edges and a drop shadow
to the pixel icons.

Everything is click-through and only shows while the taskbar is on screen.
PCs with no battery hide the battery meter; PCs with no wifi adapter hide the
wifi meter.
*/
// ==/WindhawkModReadme==

// ==WindhawkModSettings==
/*
- heartsEnabled: true
  $name: "Hearts: show battery meter"
- heartsTheme: classic
  $name: "Hearts: design"
  $options:
  - classic: Classic Heart
  - golden: Golden Heart
  - poison: Poison Heart
  - wither: Wither Heart
  - frozen: Frozen Heart
  - hardcore: Hardcore Heart
  - pink: Pink Round Heart
  - apple: Apple
  - star: Star
  - diamond: Diamond
  - ender: Ender Heart
  - lava: Lava Heart
  - soul: Soul Heart
  - glass: Liquid Glass Capsule (smooth)
  - cells: Sci-Fi Energy Cells (smooth)
  - neon: Neon Pulse Line (smooth)
  - orbs: Glass Orbs (smooth)
- heartsColor: auto
  $name: "Hearts: color of smooth designs"
  $description: Used by the smooth designs. Auto changes with the battery level. Liquid Glass is a clear, slowly shifting pastel tint.
  $options:
  - ice: Ice Blue
  - aqua: Aqua
  - emerald: Emerald
  - magenta: Magenta
  - amber: Amber
  - violet: Violet
  - crimson: Crimson
  - auto: Auto (by battery level)
  - glass: Liquid Glass (clear, shifting pastel)
- heartsModernAnim: full
  $name: "Hearts: animation of smooth designs"
  $options:
  - full: Full
  - subtle: Subtle
  - off: Off
- heartsAnimSpeed: 100
  $name: "Hearts: smooth animation speed (%)"
  $description: 100 is normal. Range 10 to 400.
- heartsHQ: true
  $name: "Hearts: high-quality shading (Minecraft designs)"
- heartsOffsetX: 0
  $name: "Hearts: horizontal offset (pixels)"
  $description: Positive moves right, negative moves left.
- heartsOffsetY: 0
  $name: "Hearts: vertical offset (pixels)"
  $description: Positive moves down, negative moves up.
- heartsAnchor: center
  $name: "Hearts: horizontal anchor"
  $options:
  - left: Left edge of taskbar
  - center: Center of taskbar
  - right: Right edge of taskbar
- heartsScale: 2
  $name: "Hearts: size"
  $description: Screen pixels per icon pixel (1 to 8).
- heartsIdle: none
  $name: "Hearts: animation (Minecraft designs)"
  $options:
  - none: None
  - pulse: Pulse
  - bounce: Bounce
  - wave: Wave
- heartsHide: fade
  $name: "Hearts: taskbar-gone animation"
  $options:
  - instant: Instant
  - fade: Fade
  - slide: Slide down and fade
  - shrink: Shrink
  - cascade: Cascade (one by one / wipe)
- heartsAnimMs: 300
  $name: "Hearts: show/hide animation length (ms)"
- heartsShakeOnLow: true
  $name: "Hearts: shake when battery is 20% or lower"
- heartsWave: true
  $name: "Hearts: regeneration wave while charging"
- hungerEnabled: true
  $name: "Hunger: show wifi meter"
- hungerTheme: drumstick
  $name: "Hunger: design"
  $options:
  - drumstick: Drumstick
  - steak: Steak
  - bread: Bread
  - cookie: Cookie
  - carrot: Carrot
  - goldcarrot: Golden Carrot
  - melon: Melon Slice
  - mushroom: Mushroom
  - cake: Cake Slice
  - goldapple: Golden Apple
  - apple: Apple
  - salmon: Cooked Salmon
  - beetroot: Beetroot
  - glass: Liquid Glass Bars (smooth)
  - arcs: Sci-Fi Signal Arcs (smooth)
  - spectrum: Hologram Spectrum (smooth)
  - orbs: Glass Orbs (smooth)
- hungerColor: ice
  $name: "Hunger: color of smooth designs"
  $description: Used by the smooth designs. Auto changes with the signal level. Liquid Glass is a clear, slowly shifting pastel tint.
  $options:
  - ice: Ice Blue
  - aqua: Aqua
  - emerald: Emerald
  - magenta: Magenta
  - amber: Amber
  - violet: Violet
  - crimson: Crimson
  - auto: Auto (by signal level)
  - glass: Liquid Glass (clear, shifting pastel)
- hungerModernAnim: full
  $name: "Hunger: animation of smooth designs"
  $options:
  - full: Full
  - subtle: Subtle
  - off: Off
- hungerAnimSpeed: 100
  $name: "Hunger: smooth animation speed (%)"
  $description: 100 is normal. Range 10 to 400.
- hungerHQ: true
  $name: "Hunger: high-quality shading (Minecraft designs)"
- hungerOffsetX: 190
  $name: "Hunger: horizontal offset (pixels)"
  $description: Positive moves right, negative moves left.
- hungerOffsetY: 0
  $name: "Hunger: vertical offset (pixels)"
  $description: Positive moves down, negative moves up.
- hungerAnchor: center
  $name: "Hunger: horizontal anchor"
  $options:
  - left: Left edge of taskbar
  - center: Center of taskbar
  - right: Right edge of taskbar
- hungerScale: 2
  $name: "Hunger: size"
  $description: Screen pixels per icon pixel (1 to 8).
- hungerIdle: none
  $name: "Hunger: animation (Minecraft designs)"
  $options:
  - none: None
  - pulse: Pulse
  - bounce: Bounce
  - wave: Wave
- hungerHide: fade
  $name: "Hunger: taskbar-gone animation"
  $options:
  - instant: Instant
  - fade: Fade
  - slide: Slide down and fade
  - shrink: Shrink
  - cascade: Cascade (one by one / wipe)
- hungerAnimMs: 300
  $name: "Hunger: show/hide animation length (ms)"
- hungerShakeOnLow: true
  $name: "Hunger: shake when signal is 20% or lower (or disconnected)"
- hungerWave: true
  $name: "Hunger: saturation wave while signal is excellent (90%+)"
*/
// ==/WindhawkModSettings==

#include <windows.h>
#include <shellapi.h>
#include <wlanapi.h>
#include <cmath>
#include <cstring>
#include <atomic>
#include <algorithm>
#include <string>
#include <vector>

// ---------- themes ----------
// Sprite chars: . = clear, K = outline, A = main color, B = highlight, C = accent
// Empty icons use a darkened version of the theme colors automatically.
struct Theme {
    const char* rows[9];
    DWORD k, a, b, c;
};

static const int kSprite = 9;  // every sprite is 9 x 9
static const int kStep = 8, kNumIcons = 10;
static const int kNumPixelThemes = 13;  // Minecraft designs
static const int kNumThemes = 17;       // + 4 smooth designs

#define S_HEART { \
    ".KKK.KKK.", \
    "KBAAKAAAK", \
    "KAAAAAAAK", \
    "KAAAAAAAK", \
    ".KAAAAAK.", \
    "..KAAAK..", \
    "...KAK...", \
    "....K....", \
    "........." }

#define S_HARDCORE { \
    ".KKK.KKK.", \
    "KBAAKAAAK", \
    "KACAAACAK", \
    "KAAAAAAAK", \
    ".KAAAAAK.", \
    "..KAAAK..", \
    "...KAK...", \
    "....K....", \
    "........." }

#define S_ROUND { \
    "..KK.KK..", \
    ".KBAKAAK.", \
    "KBAAAAAAK", \
    "KAAAAAAAK", \
    "KAAAAAAAK", \
    ".KAAAAAK.", \
    "..KAAAK..", \
    "...KAK...", \
    "....K...." }

#define S_APPLE { \
    "....K.CC.", \
    "..KKKKKK.", \
    ".KBAAAAAK", \
    "KBAAAAAAK", \
    "KAAAAAAAK", \
    "KAAAAAAAK", \
    ".KAAAAAK.", \
    "..KAAAK..", \
    "...KKK..." }

#define S_STAR { \
    "....K....", \
    "...KAK...", \
    "KKKKAKKKK", \
    "KAAABAAAK", \
    ".KAAAAAK.", \
    "..KAAAK..", \
    ".KAAKAAK.", \
    ".KAK.KAK.", \
    "KKK...KKK" }

#define S_DIAMOND { \
    "..KKKKK..", \
    ".KBBAAAK.", \
    "KBBAAAAAK", \
    "KKKKKKKKK", \
    ".KAAAAAK.", \
    "..KAAAK..", \
    "...KAK...", \
    "....K....", \
    "........." }

#define S_DRUMSTICK { \
    "....KKKK.", \
    "..KKAAAAK", \
    ".KABAAAAK", \
    ".KAAAAAAK", \
    ".KAAAAAK.", \
    ".KAAAAK..", \
    "KCKKKK...", \
    "KCCK.....", \
    ".KK......" }

#define S_STEAK { \
    ".........", \
    "..KKKKK..", \
    ".KAAAAAKK", \
    "KABAACAAK", \
    "KAAAACCAK", \
    "KAAAAAAAK", \
    ".KAAAAAK.", \
    "..KKKKK..", \
    "........." }

#define S_BREAD { \
    ".........", \
    "..KKKKKK.", \
    ".KABAAAAK", \
    "KAABAABAK", \
    "KAAAAAAAK", \
    "KAAAAAAAK", \
    "KCCCCCCCK", \
    ".KKKKKKK.", \
    "........." }

#define S_COOKIE { \
    "..KKKKK..", \
    ".KAAAAAK.", \
    "KABAACAAK", \
    "KAAAAAAAK", \
    "KACAAAACK", \
    "KAAAAAAAK", \
    "KAAACAAAK", \
    ".KAAAAAK.", \
    "..KKKKK.." }

#define S_CARROT { \
    "...KCKCK.", \
    "...KCCCK.", \
    "..KKAAAK.", \
    "..KABAAAK", \
    "..KAAAAK.", \
    "...KAAAK.", \
    "...KAAK..", \
    "....KAK..", \
    ".....K..." }

#define S_MELON { \
    ".........", \
    "KKKKKKKKK", \
    "KABAAAAAK", \
    "KAAAKAAAK", \
    ".KAAAAAK.", \
    "..KAAAK..", \
    "..KCCCK..", \
    "...KKK...", \
    "........." }

#define S_MUSHROOM { \
    "..KKKKK..", \
    ".KAACAAAK", \
    "KAAAAACAK", \
    "KACAAAAAK", \
    "KKKKKKKKK", \
    "..KBBBK..", \
    "..KBBBK..", \
    "..KBBBK..", \
    "...KKK..." }

#define S_CAKE { \
    "....KCK..", \
    "..KKBBBKK", \
    ".KBBBBBBK", \
    "KKKKKKKKK", \
    "KAAAAAAAK", \
    "KACCCCCAK", \
    "KAAAAAAAK", \
    "KKKKKKKKK", \
    "........." }

// ----- 13 Minecraft heart designs -----
//                       outline     main        highlight   accent
static const Theme kHeartThemes[kNumPixelThemes] = {
    { S_HEART,    0xFF000000, 0xFFFF1313, 0xFFFFFFFF, 0xFFFFFFFF },  // Classic
    { S_HEART,    0xFF3D2A00, 0xFFFFD21F, 0xFFFFF5B0, 0xFFFFFFFF },  // Golden
    { S_HEART,    0xFF000000, 0xFF7FA81A, 0xFFD8F07A, 0xFFFFFFFF },  // Poison
    { S_HEART,    0xFF000000, 0xFF4A4A4A, 0xFF9A9A9A, 0xFFFFFFFF },  // Wither
    { S_HEART,    0xFF0B3A5A, 0xFF4FC3F7, 0xFFE6F9FF, 0xFFFFFFFF },  // Frozen
    { S_HARDCORE, 0xFF000000, 0xFFB01010, 0xFFFFFFFF, 0xFF000000 },  // Hardcore
    { S_ROUND,    0xFF5A0A3A, 0xFFFF5FA8, 0xFFFFD6EA, 0xFFFFFFFF },  // Pink Round
    { S_APPLE,    0xFF000000, 0xFFE02A2A, 0xFFFFB3B3, 0xFF3CB043 },  // Apple
    { S_STAR,     0xFF5A3A00, 0xFFFFD83A, 0xFFFFF6B0, 0xFFFFFFFF },  // Star
    { S_DIAMOND,  0xFF0A3A3A, 0xFF4EE8D8, 0xFFE0FFFF, 0xFFFFFFFF },  // Diamond
    { S_HEART,    0xFF1A0033, 0xFFA020F0, 0xFFE8B0FF, 0xFFFFFFFF },  // Ender
    { S_HEART,    0xFF3A0A00, 0xFFFF6A00, 0xFFFFD060, 0xFFFFFFFF },  // Lava
    { S_HEART,    0xFF06124A, 0xFF2D6BFF, 0xFF9CC0FF, 0xFFFFFFFF },  // Soul
};
static const wchar_t* const kHeartThemeNames[kNumThemes] = {
    L"classic", L"golden", L"poison", L"wither", L"frozen",
    L"hardcore", L"pink", L"apple", L"star", L"diamond",
    L"ender", L"lava", L"soul",
    L"glass", L"cells", L"neon", L"orbs"};

// ----- 13 Minecraft wifi / hunger designs -----
static const Theme kHungerThemes[kNumPixelThemes] = {
    { S_DRUMSTICK, 0xFF000000, 0xFFB5651D, 0xFFE8903F, 0xFFEDE3D0 },  // Drumstick
    { S_STEAK,     0xFF000000, 0xFF9A4A22, 0xFFC8743A, 0xFFF0D8B0 },  // Steak
    { S_BREAD,     0xFF000000, 0xFFD9A441, 0xFFF2CC77, 0xFFA8701F },  // Bread
    { S_COOKIE,    0xFF000000, 0xFFD9A05B, 0xFFF0C98A, 0xFF5A3418 },  // Cookie
    { S_CARROT,    0xFF000000, 0xFFFF8A1F, 0xFFFFC27A, 0xFF3CB043 },  // Carrot
    { S_CARROT,    0xFF3D2A00, 0xFFFFD21F, 0xFFFFF5B0, 0xFF3CB043 },  // Golden Carrot
    { S_MELON,     0xFF000000, 0xFFFF4D5E, 0xFFFFA0A8, 0xFF4CBB3C },  // Melon Slice
    { S_MUSHROOM,  0xFF000000, 0xFFD93A3A, 0xFFF0E0C0, 0xFFFFFFFF },  // Mushroom
    { S_CAKE,      0xFF000000, 0xFFF0D28A, 0xFFFFFFFF, 0xFFE0243A },  // Cake Slice
    { S_APPLE,     0xFF3D2A00, 0xFFFFD21F, 0xFFFFF5B0, 0xFF3CB043 },  // Golden Apple
    { S_APPLE,     0xFF000000, 0xFFE02A2A, 0xFFFFB3B3, 0xFF3CB043 },  // Apple
    { S_STEAK,     0xFF3A1208, 0xFFE8735A, 0xFFFFB09C, 0xFFFFE0D0 },  // Cooked Salmon
    { S_CARROT,    0xFF2A0010, 0xFFA0143C, 0xFFE0607E, 0xFF3CB043 },  // Beetroot
};
static const wchar_t* const kHungerThemeNames[kNumThemes] = {
    L"drumstick", L"steak", L"bread", L"cookie", L"carrot",
    L"goldcarrot", L"melon", L"mushroom", L"cake", L"goldapple",
    L"apple", L"salmon", L"beetroot",
    L"glass", L"arcs", L"spectrum", L"orbs"};

enum Kind { KIND_HEARTS = 0, KIND_HUNGER = 1 };

// ---------- meter ----------
struct Config {
    bool enabled = true;
    int offX = 0, offY = 0, scale = 2, animMs = 300;
    int anchor = 1;  // 0 left, 1 center, 2 right
    int idle = 0;    // 0 none, 1 pulse, 2 bounce, 3 wave
    int hide = 1;    // 0 instant, 1 fade, 2 slide, 3 shrink, 4 cascade
    int theme = 0;
    bool shake = true, wave = true, hq = true;
    int color = 0;      // smooth designs: 0-6 fixed colors, 7 auto, 8 liquid glass
    int speed = 100;    // smooth animation speed in percent
    float mAnim = 1.f;  // smooth animation amount: 1 full, 0.45 subtle, 0 off
};

struct Meter {
    int kind = 0;
    const wchar_t* prefix = L"";
    const Theme* themes = nullptr;
    const wchar_t* const* themeNames = nullptr;
    Config cfg;

    HWND hwnd = nullptr;
    HDC memDC = nullptr;
    HBITMAP dib = nullptr, oldBmp = nullptr;
    DWORD* bits = nullptr;
    int bufW = 0, bufH = 0;
    std::vector<DWORD> tmp;

    DWORD64 lastTick = 0, lastZ = 0;
    float p = 0.f;  // 0 = gone, 1 = fully shown
    bool shown = false;
    float vShown = 0.f;  // smoothed level for the smooth designs
    bool vInit = false;
};

static Meter g_meters[2];
static HANDLE g_thread = nullptr;
static std::atomic<bool> g_stop{false};

// ---------- settings ----------
static int EnumSetting(const std::wstring& name, const wchar_t* const* opts, int n, int def) {
    PCWSTR s = Wh_GetStringSetting(name.c_str());
    int r = def;
    for (int i = 0; i < n; i++) {
        if (wcscmp(s, opts[i]) == 0) { r = i; break; }
    }
    Wh_FreeStringSetting(s);
    return r;
}

static void LoadMeterSettings(Meter& m) {
    static const wchar_t* const anchors[] = {L"left", L"center", L"right"};
    static const wchar_t* const idles[] = {L"none", L"pulse", L"bounce", L"wave"};
    static const wchar_t* const hides[] = {L"instant", L"fade", L"slide", L"shrink", L"cascade"};
    static const wchar_t* const colors[] = {L"ice", L"aqua", L"emerald", L"magenta",
                                            L"amber", L"violet", L"crimson", L"auto", L"glass"};
    static const wchar_t* const manims[] = {L"full", L"subtle", L"off"};
    static const float manimA[3] = {1.f, 0.45f, 0.f};

    auto N = [&](const wchar_t* suffix) { return std::wstring(m.prefix) + suffix; };

    m.cfg.enabled = Wh_GetIntSetting(N(L"Enabled").c_str()) != 0;
    m.cfg.offX = Wh_GetIntSetting(N(L"OffsetX").c_str());
    m.cfg.offY = Wh_GetIntSetting(N(L"OffsetY").c_str());
    m.cfg.scale = std::clamp(Wh_GetIntSetting(N(L"Scale").c_str()), 1, 8);
    m.cfg.animMs = std::max(1, Wh_GetIntSetting(N(L"AnimMs").c_str()));
    m.cfg.anchor = EnumSetting(N(L"Anchor"), anchors, 3, 1);
    m.cfg.idle = EnumSetting(N(L"Idle"), idles, 4, 0);
    m.cfg.hide = EnumSetting(N(L"Hide"), hides, 5, 1);
    m.cfg.theme = EnumSetting(N(L"Theme"), m.themeNames, kNumThemes, 0);
    m.cfg.shake = Wh_GetIntSetting(N(L"ShakeOnLow").c_str()) != 0;
    m.cfg.wave = Wh_GetIntSetting(N(L"Wave").c_str()) != 0;
    m.cfg.hq = Wh_GetIntSetting(N(L"HQ").c_str()) != 0;
    m.cfg.color = EnumSetting(N(L"Color"), colors, 9, m.kind == KIND_HEARTS ? 7 : 0);
    m.cfg.mAnim = manimA[EnumSetting(N(L"ModernAnim"), manims, 3, 0)];
    m.cfg.speed = std::clamp(Wh_GetIntSetting(N(L"AnimSpeed").c_str()), 10, 400);
}

static void LoadSettings() {
    for (auto& m : g_meters) LoadMeterSettings(m);
}

// ---------- drawing: math and pixels ----------
static inline float Clamp01(float x) { return x < 0.f ? 0.f : (x > 1.f ? 1.f : x); }
static inline float Lerp(float a, float b, float t) { return a + (b - a) * t; }
static inline float Sq(float x) { return x * x; }
static inline float Cov(float d) { return Clamp01(0.5f - d); }  // anti-aliased coverage from a distance
static float Smooth(float t) { t = Clamp01(t); return t * t * (3 - 2 * t); }

static unsigned Hash(unsigned a, unsigned b) {
    unsigned h = a * 2654435761u ^ (b + 1) * 40503u;
    h ^= h >> 13;
    h *= 0x5bd1e995u;
    h ^= h >> 15;
    return h;
}
static float Hash01(unsigned a, unsigned b) { return (Hash(a, b) & 0xFFFFu) / 65535.f; }

static DWORD Mix(DWORD a, DWORD b, float t) {
    t = Clamp01(t);
    int ar = (a >> 16) & 255, ag = (a >> 8) & 255, ab = a & 255;
    int br = (b >> 16) & 255, bg = (b >> 8) & 255, bb = b & 255;
    int r = (int)(ar + (br - ar) * t + 0.5f);
    int g = (int)(ag + (bg - ag) * t + 0.5f);
    int bl = (int)(ab + (bb - ab) * t + 0.5f);
    return ((DWORD)r << 16) | ((DWORD)g << 8) | (DWORD)bl;
}

// Alpha-blend one color over a pixel of the premultiplied-alpha buffer.
static inline void Blend(Meter& m, int x, int y, DWORD rgb, float a) {
    if (a <= 0.003f || x < 0 || y < 0 || x >= m.bufW || y >= m.bufH) return;
    if (a > 1.f) a = 1.f;
    DWORD* d = &m.bits[y * m.bufW + x];
    DWORD dv = *d;
    float ia = 1.f - a;
    float oa = 255.f * a + ((dv >> 24) & 255) * ia;
    float orr = ((rgb >> 16) & 255) * a + ((dv >> 16) & 255) * ia;
    float og = ((rgb >> 8) & 255) * a + ((dv >> 8) & 255) * ia;
    float ob = (rgb & 255) * a + (dv & 255) * ia;
    *d = ((DWORD)std::min(255.f, oa + 0.5f) << 24) | ((DWORD)std::min(255.f, orr + 0.5f) << 16) |
         ((DWORD)std::min(255.f, og + 0.5f) << 8) | (DWORD)std::min(255.f, ob + 0.5f);
}

template <class F>
static void ForBox(Meter& m, float x0, float y0, float x1, float y1, F f) {
    int ix0 = std::max(0, (int)floorf(x0)), iy0 = std::max(0, (int)floorf(y0));
    int ix1 = std::min(m.bufW, (int)ceilf(x1)), iy1 = std::min(m.bufH, (int)ceilf(y1));
    for (int y = iy0; y < iy1; y++)
        for (int x = ix0; x < ix1; x++) f(x, y, x + 0.5f, y + 0.5f);
}

// Rectangle with anti-aliased (fractional) edges.
static void RectAA(Meter& m, float x0, float y0, float x1, float y1, DWORD rgb, float a) {
    int ix0 = std::max(0, (int)floorf(x0)), iy0 = std::max(0, (int)floorf(y0));
    int ix1 = std::min(m.bufW, (int)ceilf(x1)), iy1 = std::min(m.bufH, (int)ceilf(y1));
    for (int y = iy0; y < iy1; y++) {
        float cy = Clamp01(std::min(y + 1.f, y1) - std::max((float)y, y0));
        for (int x = ix0; x < ix1; x++) {
            float cx = Clamp01(std::min(x + 1.f, x1) - std::max((float)x, x0));
            Blend(m, x, y, rgb, a * cx * cy);
        }
    }
}

// Signed distance (in pixels) to a rounded rectangle.
static float SdRRect(float px, float py, float cx, float cy, float hw, float hh, float r) {
    r = std::min(r, std::min(hw, hh));
    float qx = fabsf(px - cx) - (hw - r), qy = fabsf(py - cy) - (hh - r);
    float ox = std::max(qx, 0.f), oy = std::max(qy, 0.f);
    return sqrtf(ox * ox + oy * oy) + std::min(std::max(qx, qy), 0.f) - r;
}

static void FillRect32(Meter& m, int x0, int y0, int x1, int y1, DWORD c, bool onlyClear = false) {
    x0 = std::max(x0, 0); y0 = std::max(y0, 0);
    x1 = std::min(x1, m.bufW); y1 = std::min(y1, m.bufH);
    for (int y = y0; y < y1; y++)
        for (int x = x0; x < x1; x++) {
            DWORD& d = m.bits[y * m.bufW + x];
            if (onlyClear && (d >> 24) != 0) continue;
            d = c;
        }
}

// ---------- drawing: Minecraft pixel icons ----------
static DWORD Dark(DWORD c) {
    DWORD r = ((c >> 16) & 255) * 28 / 100;
    DWORD g = ((c >> 8) & 255) * 28 / 100;
    DWORD b = (c & 255) * 28 / 100;
    return 0xFF000000 | (r << 16) | (g << 8) | b;
}

// f > 0 lightens toward white, f < 0 darkens
static DWORD Shade(DWORD c, float f) {
    f = std::clamp(f, -0.9f, 1.f);
    int r = (c >> 16) & 255, g = (c >> 8) & 255, b = c & 255;
    if (f >= 0.f) {
        r += (int)((255 - r) * f); g += (int)((255 - g) * f); b += (int)((255 - b) * f);
    } else {
        float k = 1.f + f;
        r = (int)(r * k); g = (int)(g * k); b = (int)(b * k);
    }
    return 0xFF000000u | ((DWORD)r << 16) | ((DWORD)g << 8) | (DWORD)b;
}

// state: 0 empty, 1 half, 2 full
static DWORD PixelColor(const Theme& th, int kind, char ch, int x, int state) {
    if (ch == 'K') return th.k;
    bool filled;
    if (kind == KIND_HEARTS)
        filled = state == 2 || (state == 1 && x <= 4);  // fills from the left
    else
        filled = state == 2 || (state == 1 && x >= 4);  // half keeps its right side
    DWORD base = ch == 'B' ? th.b : ch == 'C' ? th.c : th.a;
    return filled ? base : Dark(base);
}

// Draws one sprite centered at (cx, cy), each sprite pixel s screen pixels wide.
// hq adds a vertical gradient, bevelled edges and a soft drop shadow.
static void DrawPixelIcon(Meter& m, const Theme& th, int state, float cx, float cy, float s,
                          bool hq) {
    bool solid[kSprite][kSprite], outl[kSprite][kSprite];
    DWORD col[kSprite][kSprite];
    for (int py = 0; py < kSprite; py++) {
        const char* row = th.rows[py];
        int len = (int)strlen(row);
        for (int px = 0; px < kSprite; px++) {
            char ch = px < len ? row[px] : '.';
            solid[py][px] = ch != '.';
            outl[py][px] = ch == 'K';
            col[py][px] = solid[py][px] ? PixelColor(th, m.kind, ch, px, state) : 0;
        }
    }

    auto rectOf = [&](int px, int py, float off, int& x0, int& y0, int& x1, int& y1) {
        x0 = lroundf(cx + (px - kSprite / 2.f) * s + off);
        x1 = lroundf(cx + (px + 1 - kSprite / 2.f) * s + off);
        y0 = lroundf(cy + (py - kSprite / 2.f) * s + off);
        y1 = lroundf(cy + (py + 1 - kSprite / 2.f) * s + off);
    };

    if (hq) {  // soft shadow one sprite-pixel down and right
        for (int py = 0; py < kSprite; py++)
            for (int px = 0; px < kSprite; px++) {
                if (!solid[py][px]) continue;
                int x0, y0, x1, y1;
                rectOf(px, py, s, x0, y0, x1, y1);
                FillRect32(m, x0, y0, x1, y1, 0x59000000, true);
            }
    }

    for (int py = 0; py < kSprite; py++) {
        for (int px = 0; px < kSprite; px++) {
            if (!solid[py][px]) continue;
            DWORD c = col[py][px];
            if (hq && !outl[py][px]) {
                float f = 0.14f - 0.34f * (py / (float)(kSprite - 1));
                bool up = py == 0 || !solid[py - 1][px] || outl[py - 1][px];
                bool dn = py == kSprite - 1 || !solid[py + 1][px] || outl[py + 1][px];
                bool lf = px == 0 || !solid[py][px - 1] || outl[py][px - 1];
                bool rt = px == kSprite - 1 || !solid[py][px + 1] || outl[py][px + 1];
                if (up) f += 0.20f;
                if (lf) f += 0.10f;
                if (dn) f -= 0.14f;
                if (rt) f -= 0.08f;
                c = Shade(c, f);
            }
            int x0, y0, x1, y1;
            rectOf(px, py, 0.f, x0, y0, x1, y1);
            FillRect32(m, x0, y0, x1, y1, c);
        }
    }
}

// ---------- drawing: smooth (liquid glass / sci-fi) designs ----------
struct MCtx {
    Meter* m;
    float W, H, sc;    // buffer size and screen pixels per art pixel
    float t;           // animation time (already scaled by speed)
    float A;           // animation amount 0..1
    float v;           // level 0..1
    bool connected, special, agitate;
    DWORD deep, bright;
    DWORD64 now;
};

// color: 0-6 fixed colors, 7 auto (by level), 8 liquid glass (clear, slowly shifting pastel)
// t is the animation time; it is 0 when smooth animation is off, so glass stays static then.
static void GetPal(int color, float v, float t, DWORD& deep, DWORD& bright) {
    static const DWORD D[7] = {0x2A7BFF, 0x00A89A, 0x12A150, 0xC21F9A, 0xE07A00, 0x6A3DFF, 0xD01030};
    static const DWORD Bt[7] = {0x7FE9FF, 0x6BFFE0, 0x8CFFB0, 0xFF8CE6, 0xFFD66B, 0xC2A8FF, 0xFF8095};

    if (color == 8) {
        // soft blue -> lavender -> pink -> mint, loops every ~33 s at normal speed.
        // The 20000 s time wrap is an exact multiple of the loop, so there is no jump.
        static const DWORD GD[4] = {0x7FC4FF, 0xB9A4FF, 0xFFA8D8, 0x86F0DE};
        static const DWORD GB[4] = {0xEAF7FF, 0xF3EEFF, 0xFFEEF8, 0xEBFFFA};
        float ph = fmodf(t * 0.12f, 4.f);
        int i0 = std::clamp((int)ph, 0, 3), i1 = (i0 + 1) & 3;
        float f = Smooth(ph - (float)i0);
        deep = Mix(GD[i0], GD[i1], f);
        bright = Mix(GB[i0], GB[i1], f);
        return;
    }

    if (color >= 0 && color < 7) { deep = D[color]; bright = Bt[color]; return; }
    // auto: red -> amber -> green -> aqua as the level rises
    static const DWORD AD[4] = {0xD01030, 0xE07A00, 0x12A150, 0x00A89A};
    static const DWORD AB[4] = {0xFF8095, 0xFFD66B, 0x8CFFB0, 0x6BFFE0};
    static const float S[4] = {0.15f, 0.40f, 0.70f, 1.0f};
    float x = Clamp01(v);
    if (x <= S[0]) { deep = AD[0]; bright = AB[0]; return; }
    for (int i = 1; i < 4; i++) {
        if (x <= S[i]) {
            float tt = (x - S[i - 1]) / (S[i] - S[i - 1]);
            deep = Mix(AD[i - 1], AD[i], tt);
            bright = Mix(AB[i - 1], AB[i], tt);
            return;
        }
    }
    deep = AD[3]; bright = AB[3];
}

static float Flick(const MCtx& c) {
    if (!c.agitate || c.A <= 0.f) return 1.f;
    return 0.55f + 0.45f * Hash01((unsigned)(c.now / 70), 11);
}

static void GlassBody(Meter& m, int x, int y, float d, float ty) {
    float cov = Cov(d);
    if (cov > 0.f) Blend(m, x, y, 0x0B1424, (0.30f + 0.20f * ty) * cov);
}

static void GlassRim(Meter& m, int x, int y, float d, float ty, float sc) {
    float rim = Cov(fabsf(d + 0.45f * sc) - 0.3f * sc);
    Blend(m, x, y, 0xFFFFFF, rim * (0.20f + 0.45f * (1.f - ty)));
}

// ----- battery: Liquid Glass Capsule -----
static void DrawCapsule(MCtx& c) {
    Meter& m = *c.m;
    const float sc = c.sc;
    const float cx = c.W * 0.5f, cy = c.H * 0.5f;
    const float hw = c.W * 0.5f - 2.5f * sc, hh = 5.5f * sc;
    const float left = cx - hw, right = cx + hw, top = cy - hh, bot = cy + hh;
    const float fillX = left + c.v * (right - left);
    const float amp = sc * (1.0f + (c.agitate ? 1.4f : 0.f)) * c.A;
    const float spd = c.agitate ? 6.f : 3.f;
    const float pulse = 0.5f + 0.5f * sinf(c.t * (c.special ? 6.f : 2.f));
    const float glowA = 0.22f + (c.special ? 0.18f : 0.06f) * pulse * c.A;
    const DWORD glowCol = Mix(c.deep, c.bright, 0.35f);

    ForBox(m, left - 4.f * sc, top - 2.5f * sc, right + 4.f * sc, bot + 2.5f * sc,
           [&](int x, int y, float px, float py) {
        float d = SdRRect(px, py, cx, cy, hw, hh, hh);
        if (d > 0.f) Blend(m, x, y, glowCol, expf(-d / (1.2f * sc)) * glowA);
        float cov = Cov(d);
        if (cov <= 0.f) return;
        float ty = (py - top) / (bot - top);
        GlassBody(m, x, y, d, ty);

        if (c.v > 0.001f) {
            float wob = amp * (sinf(py / sc * 0.9f + c.t * spd) + 0.5f * sinf(py / sc * 1.9f - c.t * spd * 0.7f));
            float edge = fillX + wob;
            float lc = Cov(px - edge) * cov;
            if (lc > 0.f) {
                float depth = Clamp01((edge - px) / (5.f * sc));
                float k = 0.12f + 0.55f * (1.f - ty) + 0.33f * (1.f - depth);
                Blend(m, x, y, Mix(c.deep, c.bright, k), 0.92f * lc);
                if (c.special && c.A > 0.f) {
                    float s = sinf(px / sc * 0.55f - py / sc * 0.35f - c.t * 5.f);
                    if (s > 0.82f) Blend(m, x, y, 0xFFFFFF, (s - 0.82f) * 1.1f * lc * c.A);
                }
            }
            float me = Clamp01(1.f - fabsf(px - edge) / (1.1f * sc));
            if (c.v < 0.995f) Blend(m, x, y, 0xFFFFFF, 0.45f * me * cov);
        }

        // glossy highlight band along the top, fading toward both ends
        float hl = Clamp01(1.f - fabsf(py - (top + 0.22f * (bot - top))) / (0.16f * (bot - top)));
        float hx = sqrtf(Clamp01(1.f - fabsf(px - cx) / (hw * 0.98f)));
        Blend(m, x, y, 0xFFFFFF, 0.34f * hl * hx * cov);
        float bl = Clamp01(1.f - fabsf(py - (bot - 0.18f * (bot - top))) / (0.10f * (bot - top)));
        Blend(m, x, y, c.bright, 0.12f * bl * hx * cov);
        GlassRim(m, x, y, d, ty, sc);

        if (c.A > 0.f) {  // sheen sweep
            float sx = (-0.3f + fmodf(c.t * 0.4f, 2.0f)) * c.W + (py - cy) * 0.6f;
            float g = expf(-Sq((px - sx) / (3.5f * sc)));
            Blend(m, x, y, 0xFFFFFF, 0.20f * g * cov * c.A);
        }
    });

    if (c.A > 0.f && c.v > 0.05f) {  // rising bubbles
        for (int i = 0; i < 6; i++) {
            float ph = fmodf(c.t * (0.25f + 0.07f * i) + i * 0.37f, 1.f);
            float span = std::max(0.f, fillX - left - 4.f * sc);
            float bx = left + 1.5f * sc + (0.1f + 0.8f * Hash01(i * 7 + 1, 3)) * span +
                       sinf(c.t * 2.f + i * 1.7f) * 0.6f * sc;
            float br = (0.55f + 0.5f * Hash01(i, 9)) * sc;
            float by = Lerp(bot - 1.8f * sc, top + 1.8f * sc, ph);
            float fade = Smooth(std::min(ph * 5.f, (1.f - ph) * 5.f));
            ForBox(m, bx - br - 2.f, by - br - 2.f, bx + br + 2.f, by + br + 2.f,
                   [&](int x, int y, float px, float py) {
                float d = sqrtf(Sq(px - bx) + Sq(py - by)) - br;
                Blend(m, x, y, 0xFFFFFF, 0.50f * Cov(fabsf(d) - 0.22f * sc) * fade * c.A);
                Blend(m, x, y, 0xFFFFFF, 0.10f * Cov(d) * fade * c.A);
            });
        }
    }
}

// ----- battery: Sci-Fi Energy Cells -----
static void DrawCells(MCtx& c) {
    Meter& m = *c.m;
    const float sc = c.sc;
    const float cy = c.H * 0.5f;
    const float left = 3.f * sc, right = c.W - 3.f * sc;
    const int N = 20;
    const float pitch = (right - left) / N;
    const float cw = pitch * 0.38f, chh = 4.2f * sc, skew = 0.35f;
    const float fillN = c.v * N;
    const float sweep = fmodf(c.t * 0.9f, 1.5f) * N - 2.f;
    const float pulse = 0.5f + 0.5f * sinf(c.t * 6.f);
    const float flick = Flick(c);
    const int leadIdx = c.v > 0.001f ? (int)ceilf(fillN) - 1 : -1;

    for (int i = 0; i < N; i++) {
        const float ccx = left + (i + 0.5f) * pitch;
        const float lit = Clamp01(fillN - i);
        const DWORD col = Mix(c.deep, c.bright, i / (float)(N - 1));
        const float sw = c.A > 0.f ? expf(-Sq((i - sweep) / 1.6f)) : 0.f;
        const float leadK = (i == leadIdx) ? 0.7f + 0.3f * pulse : 1.f;
        const float ext = cw + chh * skew + 3.f * sc;
        ForBox(m, ccx - ext, cy - chh - 3.f * sc, ccx + ext, cy + chh + 3.f * sc,
               [&](int x, int y, float px, float py) {
            float qx = px - (py - cy) * skew;
            float d = SdRRect(qx, py, ccx, cy, cw, chh, 0.7f * sc);
            if (d > 0.f && lit > 0.f)
                Blend(m, x, y, col, expf(-d / (1.3f * sc)) * 0.32f * lit * flick * leadK);
            float cov = Cov(d);
            if (cov <= 0.f) return;
            float ty = Clamp01((py - (cy - chh)) / (2.f * chh));
            Blend(m, x, y, col, 0.10f * cov);
            if (lit > 0.f) {
                DWORD cc = Mix(col, 0xFFFFFF, 0.40f * (1.f - ty) + 0.5f * sw * c.A);
                Blend(m, x, y, cc, lit * 0.85f * leadK * cov * flick);
            }
            float ring = Cov(fabsf(d + 0.3f * sc) - 0.22f * sc);
            if (lit > 0.f) Blend(m, x, y, Mix(col, 0xFFFFFF, 0.5f), ring * 0.7f);
            else Blend(m, x, y, col, ring * 0.32f);
        });
    }

    // HUD frame: thin rails, corner brackets and a level needle
    const float yt = cy - chh - 1.9f * sc, yb = cy + chh + 1.9f * sc;
    const float xl = left - 2.3f * sc, xr = right + 2.3f * sc;
    const float ba = 0.55f + 0.35f * (0.5f + 0.5f * sinf(c.t * 3.f)) * c.A;
    const float bl = 3.f * sc, bt = 0.7f * sc;
    const DWORD bc = c.bright;
    RectAA(m, xl, yt, xr, yt + 0.35f * sc, c.deep, 0.35f);
    RectAA(m, xl, yb - 0.35f * sc, xr, yb, c.deep, 0.35f);
    RectAA(m, xl, yt, xl + bl, yt + bt, bc, ba);  RectAA(m, xl, yt, xl + bt, yt + bl, bc, ba);
    RectAA(m, xr - bl, yt, xr, yt + bt, bc, ba);  RectAA(m, xr - bt, yt, xr, yt + bl, bc, ba);
    RectAA(m, xl, yb - bt, xl + bl, yb, bc, ba);  RectAA(m, xl, yb - bl, xl + bt, yb, bc, ba);
    RectAA(m, xr - bl, yb - bt, xr, yb, bc, ba);  RectAA(m, xr - bt, yb - bl, xr, yb, bc, ba);
    if (c.v > 0.001f) {
        float fx = left + c.v * (right - left);
        RectAA(m, fx - 0.3f * sc, 0.1f * sc, fx + 0.3f * sc, yt, 0xFFFFFF, 0.85f);
        RectAA(m, fx - 0.3f * sc, yb, fx + 0.3f * sc, c.H - 0.1f * sc, 0xFFFFFF, 0.85f);
    }
}

// ----- battery: Neon Pulse Line -----
static void DrawNeon(MCtx& c) {
    Meter& m = *c.m;
    const float sc = c.sc;
    const float cy = c.H * 0.5f, left = 3.f * sc, right = c.W - 3.f * sc, th = 1.25f * sc;
    const float mid = (left + right) * 0.5f, hl = (right - left) * 0.5f;
    const float fx = left + c.v * (right - left);
    const float flick = Flick(c);
    const float pulseSpd = c.special ? 1.1f : 0.45f;

    ForBox(m, 0.f, cy - 6.f * sc, c.W, cy + 6.f * sc, [&](int x, int y, float px, float py) {
        float d = SdRRect(px, py, mid, cy, hl, th, th);
        float u = Clamp01((px - left) / (right - left));
        DWORD col = Mix(c.deep, c.bright, 0.25f + 0.75f * u);
        if (d > 0.f && c.v > 0.01f) {
            float reach = Clamp01((fx + 2.5f * sc - px) / (5.f * sc));
            Blend(m, x, y, col, expf(-d / (1.9f * sc)) * 0.55f * reach * flick);
        }
        float cov = Cov(d);
        if (cov <= 0.f) return;
        Blend(m, x, y, c.deep, 0.16f * cov);
        Blend(m, x, y, col, 0.30f * Cov(fabsf(d + 0.25f * sc) - 0.2f * sc));
        float lc = Cov(px - fx) * cov;
        if (lc > 0.f) {
            float core = Clamp01(1.f - fabsf(py - cy) / th);
            Blend(m, x, y, Mix(col, 0xFFFFFF, core * 0.6f), 0.95f * lc * flick);
            if (c.A > 0.f) {
                for (int k = 0; k < 3; k++) {
                    float pos = left + fmodf(c.t * pulseSpd + k / 3.f, 1.f) * (fx - left);
                    float g = expf(-Sq((px - pos) / (2.2f * sc)));
                    Blend(m, x, y, 0xFFFFFF, 0.6f * g * lc * c.A);
                }
            }
        }
    });

    for (int k = 0; k <= 10; k++) {  // tick marks
        float tx = left + k * (right - left) / 10.f;
        bool on = tx <= fx + 0.01f;
        DWORD tc = on ? Mix(c.deep, c.bright, 0.25f + 0.75f * (k / 10.f)) : c.deep;
        float a = on ? 0.9f : 0.35f;
        RectAA(m, tx - 0.3f * sc, cy - th - 3.f * sc, tx + 0.3f * sc, cy - th - 1.4f * sc, tc, a);
        RectAA(m, tx - 0.3f * sc, cy + th + 1.4f * sc, tx + 0.3f * sc, cy + th + 3.f * sc, tc, a);
    }

    if (c.v > 0.01f) {  // glowing head
        float hr = 2.0f * sc * (0.8f + 0.2f * sinf(c.t * 9.f) * c.A);
        ForBox(m, fx - 7.f * sc, cy - 6.f * sc, fx + 7.f * sc, cy + 6.f * sc,
               [&](int x, int y, float px, float py) {
            float r2 = Sq(px - fx) + Sq(py - cy);
            Blend(m, x, y, c.bright, 0.55f * expf(-r2 / Sq(3.2f * sc)) * flick);
            Blend(m, x, y, 0xFFFFFF, 0.95f * expf(-r2 / Sq(hr * 0.8f)) * flick);
        });
    }
}

// ----- both: Glass Orbs (battery fills from the left, wifi from the right) -----
static void DrawOrbs(MCtx& c, bool fromRight) {
    Meter& m = *c.m;
    const float sc = c.sc;
    const float r = 4.2f * sc;
    const DWORD glowCol = Mix(c.deep, c.bright, 0.5f);
    const float flick = Flick(c);

    for (int i = 0; i < kNumIcons; i++) {
        int order = fromRight ? kNumIcons - 1 - i : i;
        float level = Clamp01(c.v * 10.f - order);
        bool lead = level > 0.f && level < 1.f;
        float ocx = (i * kStep + 4.5f) * sc;
        float ocy = c.H * 0.5f + c.A * 0.45f * sc * sinf(c.t * 2.f + i * 0.7f);
        float amp = sc * 0.9f * c.A * (0.25f + 0.75f * sinf(3.14159265f * level)) * (c.agitate ? 1.8f : 1.f);
        float glow = level * (0.30f + (lead ? 0.15f * (0.5f + 0.5f * sinf(c.t * 5.f)) * c.A : 0.f) +
                              (c.special ? 0.12f * (0.5f + 0.5f * sinf(c.t * 6.f - i * 0.7f)) * c.A : 0.f));
        ForBox(m, ocx - r - 3.f * sc, ocy - r - 3.f * sc, ocx + r + 3.f * sc, ocy + r + 3.f * sc,
               [&](int x, int y, float px, float py) {
            float d = sqrtf(Sq(px - ocx) + Sq(py - ocy)) - r;
            if (d > 0.f && glow > 0.f) Blend(m, x, y, glowCol, expf(-d / (1.1f * sc)) * glow * flick);
            float cov = Cov(d);
            if (cov <= 0.f) return;
            float ty = Clamp01((py - (ocy - r)) / (2.f * r));
            GlassBody(m, x, y, d, ty);
            if (level > 0.001f) {
                float surf = (ocy + r) - level * 2.f * r + amp * sinf(px / sc * 1.3f + c.t * 3.f + i * 1.1f);
                float lc = Cov(surf - py) * cov;
                float depth = Clamp01((py - surf) / (2.f * r));
                Blend(m, x, y, Mix(c.deep, c.bright, 0.70f - 0.45f * depth), 0.93f * lc * flick);
                if (level < 0.999f)
                    Blend(m, x, y, 0xFFFFFF, 0.45f * Clamp01(1.f - fabsf(py - surf) / (0.8f * sc)) * cov);
            }
            float hx = (px - (ocx - 0.38f * r)) / (0.50f * r);
            float hy = (py - (ocy - 0.45f * r)) / (0.24f * r);
            Blend(m, x, y, 0xFFFFFF, 0.55f * Clamp01(1.3f - sqrtf(hx * hx + hy * hy)) * cov);
            GlassRim(m, x, y, d, ty, sc);
        });
    }
}

// ----- wifi: Liquid Glass Bars -----
static void DrawGlassBars(MCtx& c) {
    Meter& m = *c.m;
    const float sc = c.sc;
    const float bot = 13.f * sc;
    const DWORD glowCol = Mix(c.deep, c.bright, 0.5f);
    const float flick = Flick(c);

    for (int i = 0; i < kNumIcons; i++) {
        float h = (2.6f + i * 0.95f) * sc;
        float top = bot - h;
        float bcx = (i * kStep + 4.5f) * sc, hw = 3.1f * sc, bcy = (top + bot) * 0.5f, hh = h * 0.5f;
        float level = Clamp01(c.v * 10.f - i);
        bool lead = level > 0.f && level < 1.f;
        float amp = sc * 0.8f * c.A * (0.25f + 0.75f * sinf(3.14159265f * level)) * (c.agitate ? 1.8f : 1.f);
        float glow = level * (0.28f + (lead ? 0.14f * (0.5f + 0.5f * sinf(c.t * 5.f)) * c.A : 0.f) +
                              (c.special ? 0.12f * (0.5f + 0.5f * sinf(c.t * 6.f - i * 0.7f)) * c.A : 0.f));
        ForBox(m, bcx - hw - 3.f * sc, top - 3.f * sc, bcx + hw + 3.f * sc, bot + 3.f * sc,
               [&](int x, int y, float px, float py) {
            float d = SdRRect(px, py, bcx, bcy, hw, hh, 1.5f * sc);
            if (d > 0.f && glow > 0.f) Blend(m, x, y, glowCol, expf(-d / (1.1f * sc)) * glow * flick);
            float cov = Cov(d);
            if (cov <= 0.f) return;
            float ty = Clamp01((py - top) / h);
            GlassBody(m, x, y, d, ty);
            if (level > 0.001f) {
                float surf = bot - level * h + amp * sinf(px / sc * 1.7f + c.t * 3.f + i * 0.8f);
                float lc = Cov(surf - py) * cov;
                float depth = Clamp01((py - surf) / h);
                Blend(m, x, y, Mix(c.deep, c.bright, 0.70f - 0.45f * depth), 0.93f * lc * flick);
                if (level < 0.999f)
                    Blend(m, x, y, 0xFFFFFF, 0.45f * Clamp01(1.f - fabsf(py - surf) / (0.8f * sc)) * cov);
            }
            float sx = (px - (bcx - 0.45f * hw)) / (0.20f * hw);
            Blend(m, x, y, 0xFFFFFF, 0.40f * expf(-sx * sx) * Clamp01(1.f - ty * 0.8f) * cov);
            GlassRim(m, x, y, d, ty, sc);
        });
    }
}

// ----- wifi: Sci-Fi Signal Arcs -----
static void DrawArcs(MCtx& c) {
    Meter& m = *c.m;
    const float sc = c.sc;
    const float cy = c.H * 0.5f, ox = 4.f * sc;
    const float wavePos = fmodf(c.t * 1.5f, 1.7f) * 10.f - 1.f;
    const float pulse = 0.5f + 0.5f * sinf(c.t * 5.f);
    const float flick = Flick(c);

    ForBox(m, 0.f, 0.f, c.W, c.H, [&](int x, int y, float px, float py) {
        float dx = px - ox, dy = py - cy;
        if (dx < 0.f) return;
        float dist = sqrtf(dx * dx + dy * dy);
        float ai = (dist / sc - 7.f) / 7.3f;
        int i = (int)floorf(ai + 0.5f);
        if (i < 0 || i > 9) return;
        float ri = (7.f + i * 7.3f) * sc;
        float dd = fabsf(dist - ri) - 0.65f * sc;
        float vf = Clamp01((5.7f * sc - fabsf(dy)) / (0.9f * sc));
        if (vf <= 0.f) return;
        float lit = Clamp01(c.v * 10.f - i);
        DWORD col = Mix(c.bright, c.deep, i / 11.f);
        float cov = Cov(dd) * vf;
        float sw = c.A > 0.f ? expf(-Sq((ai - wavePos) / 0.9f)) : 0.f;
        float leadK = (lit > 0.f && lit < 1.f) ? 0.75f + 0.25f * pulse : 1.f;
        if (lit > 0.f && dd > 0.f)
            Blend(m, x, y, col, expf(-dd / (1.1f * sc)) * 0.38f * lit * vf * flick);
        if (cov <= 0.f) return;
        Blend(m, x, y, c.deep, 0.20f * cov);
        if (lit > 0.f) {
            DWORD cc = Mix(col, 0xFFFFFF, 0.25f + 0.6f * sw * c.A);
            Blend(m, x, y, cc, lit * (0.70f + 0.30f * sw * c.A) * leadK * cov * flick);
        }
    });

    // source dot with an expanding ripple
    const bool on = c.connected;
    const float ph = fmodf(c.t * 0.8f, 1.f);
    ForBox(m, ox - 9.f * sc, cy - 9.f * sc, ox + 9.f * sc, cy + 9.f * sc,
           [&](int x, int y, float px, float py) {
        float r = sqrtf(Sq(px - ox) + Sq(py - cy));
        Blend(m, x, y, on ? c.bright : c.deep, 0.5f * expf(-r * r / Sq(2.6f * sc)) * flick);
        Blend(m, x, y, on ? 0xFFFFFF : c.deep, Cov(r - 1.4f * sc) * (on ? 0.95f : 0.6f));
        if (on && c.A > 0.f) {
            float rr = (1.6f + 4.5f * ph) * sc;
            Blend(m, x, y, c.bright, (1.f - ph) * 0.6f * Cov(fabsf(r - rr) - 0.3f * sc) * c.A);
        }
    });
}

// ----- wifi: Hologram Spectrum -----
static void DrawSpectrum(MCtx& c) {
    Meter& m = *c.m;
    const float sc = c.sc;
    const float cy = c.H * 0.5f, left = 3.f * sc, right = c.W - 3.f * sc;
    const int N = 20;
    const float pitch = (right - left) / N, hwb = pitch * 0.28f, hmax = 5.4f * sc;
    const float litN = c.v * N;
    const float scanX = fmodf(c.t * 0.55f, 1.25f) * c.W - 0.1f * c.W;
    const float flick = Flick(c);

    RectAA(m, left, cy - 0.2f * sc, right, cy + 0.2f * sc, c.deep, 0.35f);

    for (int i = 0; i < N; i++) {
        float lit = Clamp01(litN - i);
        float prof = 0.22f + 0.78f * ((i + 1) / (float)N);
        float an = (0.5f + 0.5f * sinf(c.t * 4.2f + i * 0.95f)) * (0.55f + 0.45f * sinf(c.t * 2.1f - i * 0.5f));
        float hgt = Lerp(prof, 0.18f + 0.82f * an, c.A);
        float hh = hmax * (lit > 0.f ? Lerp(0.15f, hgt, lit) : 0.10f);
        float bcx = left + (i + 0.5f) * pitch;
        DWORD col = Mix(c.deep, c.bright, (i + 0.5f) / N);
        ForBox(m, bcx - hwb - 3.f * sc, cy - hmax - 3.f * sc, bcx + hwb + 3.f * sc, cy + hmax + 3.f * sc,
               [&](int x, int y, float px, float py) {
            float d = SdRRect(px, py, bcx, cy, hwb, hh, hwb);
            if (lit > 0.f && d > 0.f) Blend(m, x, y, col, expf(-d / (1.2f * sc)) * 0.35f * lit * flick);
            float cov = Cov(d);
            if (cov <= 0.f) return;
            if (lit <= 0.f) { Blend(m, x, y, c.deep, 0.40f * cov); return; }
            float e = Clamp01(fabsf(py - cy) / hh);
            DWORD cc = Mix(col, 0xFFFFFF, 0.5f * (1.f - e));
            Blend(m, x, y, cc, 0.92f * lit * cov * flick);
            float g = expf(-Sq((px - scanX) / (3.f * sc))) * c.A;
            Blend(m, x, y, 0xFFFFFF, 0.5f * g * cov * lit);
        });
    }
}

// ----- post effects for the smooth designs -----
static void ShrinkBuffer(Meter& m, float s) {
    size_t n = (size_t)m.bufW * m.bufH;
    if (s <= 0.02f) { memset(m.bits, 0, n * 4); return; }
    m.tmp.assign(m.bits, m.bits + n);
    float cx = m.bufW * 0.5f, cy = m.bufH * 0.5f;
    for (int y = 0; y < m.bufH; y++) {
        int iy = (int)floorf(cy + (y + 0.5f - cy) / s);
        for (int x = 0; x < m.bufW; x++) {
            int ix = (int)floorf(cx + (x + 0.5f - cx) / s);
            bool ok = ix >= 0 && iy >= 0 && ix < m.bufW && iy < m.bufH;
            m.bits[y * m.bufW + x] = ok ? m.tmp[iy * m.bufW + ix] : 0;
        }
    }
}

static void WipeBuffer(Meter& m, float front, float soft) {
    for (int y = 0; y < m.bufH; y++) {
        for (int x = 0; x < m.bufW; x++) {
            float a = Clamp01((front - x) / soft);
            if (a >= 1.f) continue;
            DWORD& d = m.bits[y * m.bufW + x];
            if (a <= 0.f) { d = 0; continue; }
            DWORD ca = (DWORD)(((d >> 24) & 255) * a), cr = (DWORD)(((d >> 16) & 255) * a);
            DWORD cg = (DWORD)(((d >> 8) & 255) * a), cb = (DWORD)((d & 255) * a);
            d = (ca << 24) | (cr << 16) | (cg << 8) | cb;
        }
    }
}

// ---------- shared system state ----------
struct Shared {
    bool hasBattery = false, charging = false, fullscreen = false;
    int percent = 100;
    bool hasWifi = false, wifiConnected = false;
    int quality = 0;
};
static Shared g_sys;
static HANDLE g_wlan = nullptr;

static void PollWifi(bool& has, bool& connected, int& quality) {
    has = false; connected = false; quality = 0;

    if (!g_wlan) {
        DWORD ver = 0;
        if (WlanOpenHandle(2, nullptr, &ver, &g_wlan) != ERROR_SUCCESS) {
            g_wlan = nullptr;
            return;
        }
    }

    PWLAN_INTERFACE_INFO_LIST list = nullptr;
    if (WlanEnumInterfaces(g_wlan, nullptr, &list) != ERROR_SUCCESS || !list) {
        WlanCloseHandle(g_wlan, nullptr);  // service may have restarted; reopen next time
        g_wlan = nullptr;
        return;
    }

    for (DWORD i = 0; i < list->dwNumberOfItems; i++) {
        WLAN_INTERFACE_INFO& info = list->InterfaceInfo[i];
        has = true;
        if (info.isState != wlan_interface_state_connected) continue;

        PWLAN_CONNECTION_ATTRIBUTES attr = nullptr;
        DWORD size = 0;
        WLAN_OPCODE_VALUE_TYPE vt;
        if (WlanQueryInterface(g_wlan, &info.InterfaceGuid,
                               wlan_intf_opcode_current_connection, nullptr,
                               &size, (PVOID*)&attr, &vt) == ERROR_SUCCESS && attr) {
            connected = true;
            quality = std::max(quality, (int)attr->wlanAssociationAttributes.wlanSignalQuality);
            WlanFreeMemory(attr);
        }
    }
    WlanFreeMemory(list);
}

static void UpdateShared(DWORD64 now) {
    static DWORD64 lastCheck = 0, lastWifi = 0;

    if (lastCheck == 0 || now - lastCheck > 300) {
        lastCheck = now;
        SYSTEM_POWER_STATUS sps;
        if (GetSystemPowerStatus(&sps)) {
            g_sys.hasBattery = !(sps.BatteryFlag & 128) && sps.BatteryLifePercent <= 100;
            g_sys.percent = sps.BatteryLifePercent;
            g_sys.charging = sps.ACLineStatus == 1;
        }
        QUERY_USER_NOTIFICATION_STATE qs;
        g_sys.fullscreen = SUCCEEDED(SHQueryUserNotificationState(&qs)) &&
                           (qs == QUNS_BUSY || qs == QUNS_RUNNING_D3D_FULL_SCREEN ||
                            qs == QUNS_PRESENTATION_MODE);
    }
    if (lastWifi == 0 || now - lastWifi > 1000) {
        lastWifi = now;
        PollWifi(g_sys.hasWifi, g_sys.wifiConnected, g_sys.quality);
    }
}

// ---------- window helpers ----------
static void EnsureBuffer(Meter& m, int w, int h) {
    if (m.dib && m.bufW == w && m.bufH == h) return;
    if (m.dib) {
        SelectObject(m.memDC, m.oldBmp);
        DeleteObject(m.dib);
        m.dib = nullptr;
    }
    if (!m.memDC) m.memDC = CreateCompatibleDC(nullptr);
    BITMAPINFO bi{};
    bi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bi.bmiHeader.biWidth = w;
    bi.bmiHeader.biHeight = -h;  // top-down
    bi.bmiHeader.biPlanes = 1;
    bi.bmiHeader.biBitCount = 32;
    bi.bmiHeader.biCompression = BI_RGB;
    m.dib = CreateDIBSection(m.memDC, &bi, DIB_RGB_COLORS, (void**)&m.bits, nullptr, 0);
    m.oldBmp = (HBITMAP)SelectObject(m.memDC, m.dib);
    m.bufW = w;
    m.bufH = h;
}

static bool TaskbarPresent(RECT& tb) {
    HWND tray = FindWindowW(L"Shell_TrayWnd", nullptr);
    if (!tray || !IsWindowVisible(tray) || !GetWindowRect(tray, &tb)) return false;
    HMONITOR mon = MonitorFromWindow(tray, MONITOR_DEFAULTTONEAREST);
    MONITORINFO mi{sizeof(mi)};
    if (!GetMonitorInfoW(mon, &mi)) return false;
    RECT inter;
    if (!IntersectRect(&inter, &tb, &mi.rcMonitor)) return false;
    long area = (tb.right - tb.left) * (tb.bottom - tb.top);
    long ia = (inter.right - inter.left) * (inter.bottom - inter.top);
    return area > 0 && ia * 2 >= area;  // at least half of the taskbar on screen
}

// ---------- per-meter tick ----------
static void TickMeter(Meter& m) {
    if (g_stop) { DestroyWindow(m.hwnd); return; }

    const Config& c = m.cfg;
    DWORD64 now = GetTickCount64();
    float dt = m.lastTick ? (float)(now - m.lastTick) : 16.f;
    m.lastTick = now;

    UpdateShared(now);

    RECT tb{};
    bool hasData = (m.kind == KIND_HEARTS) ? g_sys.hasBattery : g_sys.hasWifi;
    bool present = c.enabled && hasData && !g_sys.fullscreen && TaskbarPresent(tb);
    float target = present ? 1.f : 0.f;

    if (c.hide == 0) m.p = target;
    else if (m.p < target) m.p = std::min(target, m.p + dt / c.animMs);
    else if (m.p > target) m.p = std::max(target, m.p - dt / c.animMs);

    if (m.p <= 0.f) {
        if (m.shown) { ShowWindow(m.hwnd, SW_HIDE); m.shown = false; }
        return;
    }
    if (tb.right == tb.left) TaskbarPresent(tb);  // still need geometry while fading out

    const int ti = std::clamp(c.theme, 0, kNumThemes - 1);
    const bool modern = ti >= kNumPixelThemes;

    // ----- what to show -----
    int halves;
    bool shake, wave;
    if (m.kind == KIND_HEARTS) {
        halves = std::clamp((g_sys.percent + 2) / 5, 0, 20);
        shake = c.shake && g_sys.percent <= 20 && !g_sys.charging;
        wave = c.wave && g_sys.charging;
    } else {
        halves = g_sys.wifiConnected ? std::clamp((g_sys.quality + 2) / 5, 1, 20) : 0;
        shake = c.shake && (!g_sys.wifiConnected || g_sys.quality <= 20);
        wave = c.wave && g_sys.wifiConnected && g_sys.quality >= 90;
    }

    // ----- layout -----
    const int sc = c.scale;
    const int W = (kStep * (kNumIcons - 1) + kSprite) * sc;
    const int H = (kSprite + 6) * sc;  // 3 art-pixels of headroom top and bottom
    EnsureBuffer(m, W, H);
    memset(m.bits, 0, (size_t)W * H * 4);

    float pe = Smooth(m.p);

    if (!modern) {
        // ----- Minecraft pixel icons -----
        const Theme& th = m.themes[ti];
        float t = now / 1000.f;
        for (int i = 0; i < kNumIcons; i++) {
            // hearts fill from the left; hunger bars fill from the right
            int order = (m.kind == KIND_HEARTS) ? i : kNumIcons - 1 - i;
            int state = std::clamp(halves - 2 * order, 0, 2);

            float lp = 1.f;
            if (c.hide == 3) lp = pe;
            else if (c.hide == 4)
                lp = std::clamp(m.p * (kNumIcons + 4) - (kNumIcons - 1 - i), 0.f, 1.f);
            if (lp <= 0.f) continue;

            float mult = 1.f, yOff = 0.f;  // yOff in art pixels
            if (c.idle == 1) mult = 1.f + 0.12f * sinf(t * 7.5f);
            else if (c.idle == 2) yOff = -2.f * fabsf(sinf(t * 2.5f));
            else if (c.idle == 3) yOff = -2.f * std::max(0.f, sinf(t * 5.5f - i * 0.6f));
            if (wave && c.idle != 3)
                yOff += -2.f * std::max(0.f, sinf(t * 6.f - i * 0.7f));
            if (shake) yOff += (float)((int)(Hash((unsigned)(now / 90), i) % 3) - 1);

            float s = sc * mult * lp;
            float cx = (i * kStep + kSprite / 2.f) * sc;
            float cy = (3 + kSprite / 2.f + yOff) * sc;
            DrawPixelIcon(m, th, state, cx, cy, s, c.hq);
        }
    } else {
        // ----- smooth designs -----
        float vt;
        if (m.kind == KIND_HEARTS) vt = Clamp01(g_sys.percent / 100.f);
        else vt = g_sys.wifiConnected ? std::max(0.03f, Clamp01(g_sys.quality / 100.f)) : 0.f;
        if (!m.vInit) { m.vShown = vt; m.vInit = true; }
        else m.vShown += (vt - m.vShown) * std::min(1.f, dt / 220.f);

        MCtx mc{};
        mc.m = &m;
        mc.W = (float)W; mc.H = (float)H; mc.sc = (float)sc;
        mc.A = c.mAnim;
        mc.v = m.vShown;
        mc.t = c.mAnim > 0.f ? (float)fmod(now / 1000.0 * (c.speed / 100.0), 20000.0) : 0.f;
        mc.connected = (m.kind == KIND_HEARTS) ? true : g_sys.wifiConnected;
        mc.special = wave;
        mc.agitate = shake;
        mc.now = now;
        GetPal(c.color, mc.v, mc.t, mc.deep, mc.bright);

        int md = ti - kNumPixelThemes;
        if (m.kind == KIND_HEARTS) {
            switch (md) {
                case 0: DrawCapsule(mc); break;
                case 1: DrawCells(mc); break;
                case 2: DrawNeon(mc); break;
                default: DrawOrbs(mc, false); break;
            }
        } else {
            switch (md) {
                case 0: DrawGlassBars(mc); break;
                case 1: DrawArcs(mc); break;
                case 2: DrawSpectrum(mc); break;
                default: DrawOrbs(mc, true); break;
            }
        }

        if (c.hide == 3 && pe < 0.999f) ShrinkBuffer(m, pe);
        else if (c.hide == 4 && m.p < 0.999f) WipeBuffer(m, m.p * (W + 6.f * sc) - 3.f * sc, 3.f * sc);
    }

    // ----- position -----
    int tbW = tb.right - tb.left, tbH = tb.bottom - tb.top;
    int x = tb.left;
    if (c.anchor == 1) x = tb.left + (tbW - W) / 2;
    else if (c.anchor == 2) x = tb.right - W;
    x += c.offX;
    int y = tb.top + (tbH - H) / 2 + c.offY;
    BYTE alpha = 255;
    if (c.hide == 1) alpha = (BYTE)lroundf(255.f * pe);
    else if (c.hide == 2) {
        alpha = (BYTE)lroundf(255.f * pe);
        y += (int)((1.f - pe) * tbH);
    }

    POINT pos{x, y};
    SIZE size{W, H};
    POINT src{0, 0};
    BLENDFUNCTION bf{AC_SRC_OVER, 0, alpha, AC_SRC_ALPHA};
    HDC screen = GetDC(nullptr);
    UpdateLayeredWindow(m.hwnd, screen, &pos, &size, m.memDC, &src, 0, &bf, ULW_ALPHA);
    ReleaseDC(nullptr, screen);

    if (!m.shown) { ShowWindow(m.hwnd, SW_SHOWNOACTIVATE); m.shown = true; }

    // keep us above the taskbar (it re-raises itself when clicked)
    if (now - m.lastZ > 250) {
        m.lastZ = now;
        SetWindowPos(m.hwnd, HWND_TOPMOST, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
    }
}

static LRESULT CALLBACK WndProc(HWND h, UINT msg, WPARAM w, LPARAM l) {
    switch (msg) {
        case WM_TIMER: {
            Meter* m = (Meter*)GetWindowLongPtrW(h, GWLP_USERDATA);
            if (m) TickMeter(*m);
            return 0;
        }
        case WM_NCHITTEST: return HTTRANSPARENT;
        case WM_CLOSE: DestroyWindow(h); return 0;
        case WM_DESTROY: PostQuitMessage(0); return 0;
    }
    return DefWindowProcW(h, msg, w, l);
}

static void FreeMeter(Meter& m) {
    if (m.dib) {
        SelectObject(m.memDC, m.oldBmp);
        DeleteObject(m.dib);
        m.dib = nullptr;
    }
    if (m.memDC) { DeleteDC(m.memDC); m.memDC = nullptr; }
    m.bufW = m.bufH = 0;
    m.hwnd = nullptr;
    m.vInit = false;
}

static DWORD WINAPI Worker(LPVOID) {
    HINSTANCE inst = GetModuleHandleW(nullptr);
    WNDCLASSW wc{};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = inst;
    wc.lpszClassName = L"WH_MinecraftStatusBars";
    RegisterClassW(&wc);

    bool any = false;
    for (auto& m : g_meters) {
        m.hwnd = CreateWindowExW(
            WS_EX_LAYERED | WS_EX_TRANSPARENT | WS_EX_TOPMOST | WS_EX_TOOLWINDOW |
                WS_EX_NOACTIVATE,
            wc.lpszClassName, L"", WS_POPUP, 0, 0, 1, 1, nullptr, nullptr, inst, nullptr);
        if (m.hwnd) {
            SetWindowLongPtrW(m.hwnd, GWLP_USERDATA, (LONG_PTR)&m);
            SetTimer(m.hwnd, 1, 16, nullptr);
            any = true;
        }
    }

    if (any) {
        MSG msg;
        while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
            TranslateMessage(&msg);
            DispatchMessageW(&msg);
        }
    }

    for (auto& m : g_meters) {
        if (m.hwnd && IsWindow(m.hwnd)) DestroyWindow(m.hwnd);
    }
    if (g_wlan) { WlanCloseHandle(g_wlan, nullptr); g_wlan = nullptr; }
    for (auto& m : g_meters) FreeMeter(m);
    UnregisterClassW(wc.lpszClassName, inst);
    return 0;
}

// ---------- Windhawk entry points ----------
BOOL Wh_ModInit() {
    g_meters[KIND_HEARTS].kind = KIND_HEARTS;
    g_meters[KIND_HEARTS].prefix = L"hearts";
    g_meters[KIND_HEARTS].themes = kHeartThemes;
    g_meters[KIND_HEARTS].themeNames = kHeartThemeNames;

    g_meters[KIND_HUNGER].kind = KIND_HUNGER;
    g_meters[KIND_HUNGER].prefix = L"hunger";
    g_meters[KIND_HUNGER].themes = kHungerThemes;
    g_meters[KIND_HUNGER].themeNames = kHungerThemeNames;

    LoadSettings();
    g_stop = false;
    g_thread = CreateThread(nullptr, 0, Worker, nullptr, 0, nullptr);
    return g_thread != nullptr;
}

void Wh_ModSettingsChanged() {
    LoadSettings();
}

void Wh_ModUninit() {
    g_stop = true;
    HWND h = g_meters[0].hwnd;
    if (h) PostMessageW(h, WM_CLOSE, 0, 0);
    if (g_thread) {
        WaitForSingleObject(g_thread, 5000);
        CloseHandle(g_thread);
        g_thread = nullptr;
    }
}
