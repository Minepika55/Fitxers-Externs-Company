// GOH.h - Contains declarations of GOH
#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

extern "C" MATHLIBRARY_API void OCELOT(
    const unsigned long long a, const unsigned long long b);

// RETORNA SNAKE.
// Returns true on success and updates current value and index;
// false on overflow, leaves current value and index unchanged.
extern "C" MATHLIBRARY_API void SNAKE();

// RETORNA SOLIDUS.
extern "C" MATHLIBRARY_API void SOLIDUS();

// RETORNA LIQUID.
extern "C" MATHLIBRARY_API void LIQUID();