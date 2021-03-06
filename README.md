# CMath

English: This plugin allows you to use some of the functions in CMath library from C++. Few functions aren't included since they exist in pawn by default.

Reference: http://www.cplusplus.com/reference/cmath/

## Function list:
```pawn
native Float:cosh(Float:x);
native Float:sinh(Float:x);
native Float:tanh(Float:x);
native Float:acosh(Float:x);
native Float:asinh(Float:x);
native Float:atanh(Float:x);
native Float:exp(Float:x);
native Float:frexp(Float:x, &exp);
native Float:ldexp(Float:x, exp);
native Float:log10(Float:x);
native Float:modf(Float:x, &Float:intpart);
native Float:exp2(Float:x);
native Float:expm1(Float:x);
native ilogb(Float:x);
native Float:log1p(Float:x);
native Float:log2(Float:x);
native Float:logb(Float:x);
native Float:scalbn(Float:x, exp);
native Float:cbrt(Float:x);
native Float:hypot(Float:x, Float:y);
native Float:tgamma(Float:x);
native Float:lgamma(Float:x);
native Float:remquo(Float:numer, Float:denom, &quot);
native Float:copysign(Float:x, Float:y);
native Float:fdim(Float:x, Float:y);
native Float:fmax(Float:x, Float:y);
native Float:fmin(Float:x, Float:y);
```

# Building: 
- **Linux**
    + git clone https://github.com/Jelly23/CMath.git
    + cd CMath/source
    + make
- **Windows**
    + git clone https://github.com/Jelly23/CMath.git
    + ...
