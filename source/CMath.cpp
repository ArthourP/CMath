#include <cmath>

#include "../SDK/plugin.h"

typedef void 
	(*logprintf_t)(char* format, ...)
;

logprintf_t 
	logprintf
;

void 
	**ppPluginData
;

extern void 
	*pAMXFunctions
;

PLUGIN_EXPORT bool PLUGIN_CALL Load(void **ppData)
{
   pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
   logprintf = (logprintf_t)ppData[PLUGIN_DATA_LOGPRINTF];

   logprintf("CMath plugin loaded - Jelly23");
   return 1;
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
	logprintf("CMath plugin Un-Loaded - Jelly23");
}

cell AMX_NATIVE_CALL cc_cosh(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = coshf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_sinh(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = sinhf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_tanh(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = tanhf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_acosh(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = acoshf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_asinh(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = asinhf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_atanh(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = atanhf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_exp(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = expf ( amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_frexp(AMX* amx, cell* params)
{
	int conv; cell* retn = 0; cell* addr2 = 0;
	amx_ctof(retn) = frexpf(amx_ctof(params[1]), &conv);
	amx_GetAddr(amx, params[2], &addr2);
	*addr2 = conv;
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_ldexp(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = ldexpf (amx_ctof(params[1]) , params[2]);
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_log10(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = log10f(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_modf(AMX* amx, cell* params)
{

	float conv; cell* addr2 = 0; cell* retn = 0;
	amx_ctof(retn) = modff(amx_ctof(params[1]), &conv);
	amx_GetAddr(amx, params[2], &addr2);
	*addr2 = amx_ftoc(conv);
    return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_exp2(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = exp2f(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_expm1(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = expm1f(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_ilogb(AMX* amx, cell* params)
{
	return ilogbf(amx_ctof(params[1]));
}

cell AMX_NATIVE_CALL cc_log1p(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = log1pf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_log2(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = log2f(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_logb(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = logbf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_scalbn(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = scalbnf(amx_ctof(params[1]), params[2]);
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_cbrt(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = cbrtf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_hypot(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = hypotf(amx_ctof(params[1]), amx_ctof(params[2]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_tgamma(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = tgammaf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_lgamma(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = lgammaf(amx_ctof(params[1]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_remquo(AMX* amx, cell* params)
{
	cell* retn = 0; cell* addr3 = 0; int conv;
	amx_ctof(retn) = remquof(amx_ctof(params[1]), amx_ctof(params[2]), &conv);
	amx_GetAddr(amx, params[3], &addr3);
	*addr3 = conv;
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_copysign(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = copysignf(amx_ctof(params[1]), amx_ctof(params[2]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_fdim(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = fdimf(amx_ctof(params[1]), amx_ctof(params[2]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_fmax(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = fmaxf(amx_ctof(params[1]), amx_ctof(params[2]));
	return amx_ftoc(retn);
}

cell AMX_NATIVE_CALL cc_fmin(AMX* amx, cell* params)
{
	cell* retn = 0;
	amx_ctof(retn) = fminf(amx_ctof(params[1]), amx_ctof(params[2]));
	return amx_ftoc(retn);
}

AMX_NATIVE_INFO projectNatives[] =
{
	{"cosh", cc_cosh},
	{"sinh", cc_sinh},
	{"tanh", cc_tanh},
	{"acosh", cc_acosh},
	{"asinh", cc_asinh},
	{"atanh", cc_atanh},
	{"exp", cc_exp},
	{"frexp", cc_frexp},
	{"ldexp", cc_ldexp},
	{"log10", cc_log10},
	{"modf", cc_modf},
	{"exp2", cc_exp2},
	{"expm1", cc_expm1},
	{"ilogb", cc_ilogb},
	{"log1p", cc_log1p},
	{"log2", cc_log2},
	{"logb", cc_logb},
	{"scalbn", cc_scalbn},
	{"cbrt", cc_cbrt},
	{"hypot", cc_hypot},
	{"tgamma", cc_tgamma},
	{"lgamma", cc_lgamma},
	{"remquo", cc_remquo},
	{"copysign", cc_copysign},
	{"fdim", cc_fdim},
	{"fmax", cc_fmax},
	{"fmin", cc_fmin},
	{0, 0}
};

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports()
{
   return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES;
}

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad(AMX *amx)
{
   return amx_Register(amx, projectNatives, -1);
}

PLUGIN_EXPORT int PLUGIN_CALL AmxUnload(AMX *amx)
{
   return AMX_ERR_NONE;
}