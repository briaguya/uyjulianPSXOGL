
#include "externals.h"

static const uint8_t version = 1;
static const uint8_t revision = 0;
static const uint8_t build = 1;

extern "C" const char *PSEgetLibName(void)
{
	return "";
}

extern "C" uint32_t PSEgetLibType(void)
{
	return PSE_LT_GPU;
}

extern "C" uint32_t PSEgetLibVersion(void)
{
	return version << 16 | revision << 8 | build;
}

extern "C" const char *GPUgetLibInfos(void)
{
	return "";
}

extern "C" void GPUmakeSnapshot(void)
{
}

extern "C" int32_t GPUinit(void)
{
	return LoadPSE();
}

extern "C" int32_t GPUopen(uint32_t *, char *, char *)
{
	return OpenPSE();
}

extern "C" int32_t GPUclose(void)
{
	return ClosePSE();
}

extern "C" int32_t GPUshutdown(void)
{
	return ShutdownPSE();
}

extern "C" void GPUcursor(int32_t, int32_t, int32_t)
{
}

extern "C" void GPUupdateLace(void)
{
	return UpdateLacePSE();
}

extern "C" uint32_t GPUreadStatus(void)
{
	return ReadStatusPSE();
}

extern "C" void GPUwriteStatus(uint32_t gdata)
{
	return WriteStatusPSE(gdata);
}

extern "C" void GPUreadDataMem(uint32_t *pMem, int32_t iSize)
{
	return ReadDataMemPSE(pMem, iSize);
}

extern "C" uint32_t GPUreadData(void)
{
	return ReadDataPSE();
}

extern "C" void GPUwriteDataMem(uint32_t *pMem, int32_t iSize)
{
	return WriteDataMemPSE(pMem, iSize);
}

extern "C" int32_t GPUconfigure(void)
{
	return 0;
}

extern "C" void GPUwriteData(uint32_t gdata)
{
	return WriteDataPSE(gdata);
}

extern "C" void GPUabout(void)
{
}

extern "C" int32_t GPUtest(void)
{
	return 0;
}

extern "C" int32_t GPUdmaChain(uint32_t *baseAddrL, uint32_t addr)
{
	return DmaChainPSE(baseAddrL, addr);
}

extern "C" int32_t GPUfreeze(uint32_t ulGetFreezeData, GPUFreeze_t *pF)
{
	return FreezePSE(ulGetFreezeData, pF);
}

extern "C" void GPUgetScreenPic(uint8_t *)
{
}

extern "C" void GPUshowScreenPic(uint8_t *)
{
}

extern "C" void GPUsetfix(uint32_t)
{
}

extern "C" void GPUvisualVibration(uint32_t, uint32_t)
{
}

extern "C" void GPUvBlank(int32_t val)
{
	return VBlankPSE(val);
}

extern "C" void GPUhSync(int32_t val)
{
	return HSyncPSE(val);
}
