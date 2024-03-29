#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <Python.h>
#include "boxbranding.h"

#define MAKE_STRING_FUNCTION(name) \
static PyObject* name(PyObject* self, PyObject* args) \
{ \
	PyObject* res; \
	char *s = _##name(); \
	res = Py_BuildValue("s", s); \
	free(s); \
	return res; \
} \

/* Available functions */
MAKE_STRING_FUNCTION(getIMGVersion)
MAKE_STRING_FUNCTION(getIMGRevision)
MAKE_STRING_FUNCTION(getIMGLanguage)
MAKE_STRING_FUNCTION(getDeveloperName)
MAKE_STRING_FUNCTION(getBoxBrand)
MAKE_STRING_FUNCTION(getDisplayBrand)
MAKE_STRING_FUNCTION(getFriendlyFamily)
MAKE_STRING_FUNCTION(getOEVersion)
MAKE_STRING_FUNCTION(getDriverDate)
MAKE_STRING_FUNCTION(getImageDistro)
MAKE_STRING_FUNCTION(getDisplayDistro)
MAKE_STRING_FUNCTION(getBoxType)
MAKE_STRING_FUNCTION(getDisplayModel)
MAKE_STRING_FUNCTION(getMachineBuild)
MAKE_STRING_FUNCTION(getImageVersion)
MAKE_STRING_FUNCTION(getImageBuild)
MAKE_STRING_FUNCTION(getImageDevBuild)
MAKE_STRING_FUNCTION(getImageType)
MAKE_STRING_FUNCTION(getFeedsUrl)
MAKE_STRING_FUNCTION(getImageFolder)
MAKE_STRING_FUNCTION(getImageFileSystem)
MAKE_STRING_FUNCTION(getMachineMtdBoot)
MAKE_STRING_FUNCTION(getMachineMtdRoot)
MAKE_STRING_FUNCTION(getMachineMtdKernel)
MAKE_STRING_FUNCTION(getMachineRootFile)
MAKE_STRING_FUNCTION(getMachineKernelFile)
MAKE_STRING_FUNCTION(getMachineMKUBIFS)
MAKE_STRING_FUNCTION(getMachineUBINIZE)
MAKE_STRING_FUNCTION(getForceMode)
MAKE_STRING_FUNCTION(getImageArch)
MAKE_STRING_FUNCTION(getImageFPU)
MAKE_STRING_FUNCTION(getDisplayType)
MAKE_STRING_FUNCTION(getHaveSmallFlash)
MAKE_STRING_FUNCTION(getHaveMiddleFlash)
MAKE_STRING_FUNCTION(getHaveTranscoding)
MAKE_STRING_FUNCTION(getHaveMultiTranscoding)
MAKE_STRING_FUNCTION(getHaveMultiLib)
MAKE_STRING_FUNCTION(getMachineProcModel)
MAKE_STRING_FUNCTION(getHaveHDMI)
MAKE_STRING_FUNCTION(getHaveYUV)
MAKE_STRING_FUNCTION(getHaveRCA)
MAKE_STRING_FUNCTION(getHaveAVJACK)
MAKE_STRING_FUNCTION(getHaveSCART)
MAKE_STRING_FUNCTION(getHaveSVIDEO)
MAKE_STRING_FUNCTION(getHaveHDMIinHD)
MAKE_STRING_FUNCTION(getHaveHDMIinFHD)
MAKE_STRING_FUNCTION(getHaveWOL)
MAKE_STRING_FUNCTION(getHaveCI)
MAKE_STRING_FUNCTION(getHaveFan)
MAKE_STRING_FUNCTION(getBlindscanBin)
MAKE_STRING_FUNCTION(getSoCFamily)
MAKE_STRING_FUNCTION(getHaveVFDSymbol)
MAKE_STRING_FUNCTION(getKernelVersion)
MAKE_STRING_FUNCTION(getRCType)
MAKE_STRING_FUNCTION(getRCName)
MAKE_STRING_FUNCTION(getRCIDNum)
MAKE_STRING_FUNCTION(getFHDSkin)
MAKE_STRING_FUNCTION(getE2Service)
MAKE_STRING_FUNCTION(getDBoxLCD)
MAKE_STRING_FUNCTION(getEMMC)
MAKE_STRING_FUNCTION(getMMC)
MAKE_STRING_FUNCTION(getUHD4K)

/* Module specification */
static PyMethodDef boxbrandingMethods[] = {
	{ "getIMGVersion", getIMGVersion, METH_NOARGS, NULL },
	{ "getIMGRevision", getIMGRevision, METH_NOARGS, NULL },
	{ "getIMGLanguage", getIMGLanguage, METH_NOARGS, NULL },
	{ "getDeveloperName", getDeveloperName, METH_NOARGS, NULL },
	{ "getBoxBrand", getBoxBrand, METH_NOARGS, NULL },
	{ "getDisplayBrand", getDisplayBrand, METH_NOARGS, NULL },
	{ "getFriendlyFamily", getFriendlyFamily, METH_NOARGS, NULL },
	{ "getOEVersion", getOEVersion, METH_NOARGS, NULL },
	{ "getDriverDate", getDriverDate, METH_NOARGS, NULL },
	{ "getImageDistro", getImageDistro, METH_NOARGS, NULL },
	{ "getDisplayDistro", getDisplayDistro, METH_NOARGS, NULL },
	{ "getBoxType", getBoxType, METH_NOARGS, NULL },
	{ "getDisplayModel", getDisplayModel, METH_NOARGS, NULL },
	{ "getMachineBuild", getMachineBuild, METH_NOARGS, NULL },
	{ "getImageVersion", getImageVersion, METH_NOARGS, NULL },
	{ "getImageBuild", getImageBuild, METH_NOARGS, NULL },
	{ "getImageDevBuild", getImageDevBuild, METH_NOARGS, NULL },
	{ "getImageType", getImageType, METH_NOARGS, NULL },
	{ "getFeedsUrl", getFeedsUrl, METH_NOARGS, NULL },
	{ "getImageFolder", getImageFolder, METH_NOARGS, NULL },
	{ "getImageFileSystem", getImageFileSystem, METH_NOARGS, NULL },
	{ "getMachineMtdBoot", getMachineMtdBoot, METH_NOARGS, NULL },
	{ "getMachineMtdRoot", getMachineMtdRoot, METH_NOARGS, NULL },
	{ "getMachineMtdKernel", getMachineMtdKernel, METH_NOARGS, NULL },
	{ "getMachineRootFile", getMachineRootFile, METH_NOARGS, NULL },
	{ "getMachineKernelFile", getMachineKernelFile, METH_NOARGS, NULL },
	{ "getMachineMKUBIFS", getMachineMKUBIFS, METH_NOARGS, NULL },
	{ "getMachineUBINIZE", getMachineUBINIZE, METH_NOARGS, NULL },
	{ "getForceMode", getForceMode, METH_NOARGS, NULL },
	{ "getImageArch", getImageArch, METH_NOARGS, NULL },
	{ "getImageFPU", getImageFPU, METH_NOARGS, NULL },
	{ "getDisplayType", getDisplayType, METH_NOARGS, NULL },
	{ "getHaveSmallFlash", getHaveSmallFlash, METH_NOARGS, NULL },
	{ "getHaveMiddleFlash", getHaveMiddleFlash, METH_NOARGS, NULL },
	{ "getHaveTranscoding", getHaveTranscoding, METH_NOARGS, NULL },
	{ "getHaveMultiTranscoding", getHaveMultiTranscoding, METH_NOARGS, NULL },
	{ "getHaveMultiLib", getHaveMultiLib, METH_NOARGS, NULL },
	{ "getMachineProcModel", getMachineProcModel, METH_NOARGS, NULL },
	{ "getHaveHDMI", getHaveHDMI, METH_NOARGS, NULL },
	{ "getHaveYUV", getHaveYUV, METH_NOARGS, NULL },
	{ "getHaveRCA", getHaveRCA, METH_NOARGS, NULL },
	{ "getHaveAVJACK", getHaveAVJACK, METH_NOARGS, NULL },
	{ "getHaveSCART", getHaveSCART, METH_NOARGS, NULL },
	{ "getHaveSVIDEO", getHaveSVIDEO, METH_NOARGS, NULL },
	{ "getHaveHDMIinHD", getHaveHDMIinHD, METH_NOARGS, NULL },
	{ "getHaveHDMIinFHD", getHaveHDMIinFHD, METH_NOARGS, NULL },
	{ "getHaveWOL", getHaveWOL, METH_NOARGS, NULL },
	{ "getHaveCI", getHaveCI, METH_NOARGS, NULL },
	{ "getHaveFan", getHaveFan, METH_NOARGS, NULL },
	{ "getBlindscanBin", getBlindscanBin, METH_NOARGS, NULL },
	{ "getSoCFamily", getSoCFamily, METH_NOARGS, NULL },
	{ "getHaveVFDSymbol", getHaveVFDSymbol, METH_NOARGS, NULL },
	{ "getKernelVersion", getKernelVersion, METH_NOARGS, NULL },
	{ "getRCType", getRCType, METH_NOARGS, NULL },
	{ "getRCName", getRCName, METH_NOARGS, NULL },
	{ "getRCIDNum", getRCIDNum, METH_NOARGS, NULL },
	{ "getFHDSkin", getFHDSkin, METH_NOARGS, NULL },
	{ "getE2Service", getE2Service, METH_NOARGS, NULL },
	{ "getDBoxLCD", getDBoxLCD, METH_NOARGS, NULL },
	{ "getEMMC", getEMMC, METH_NOARGS, NULL },
	{ "getMMC", getMMC, METH_NOARGS, NULL },
	{ "getUHD4K", getUHD4K, METH_NOARGS, NULL },
	{ NULL, NULL, 0, NULL }
};

/* Initialize the module */
#if PY_MAJOR_VERSION >= 3
static struct PyModuleDef boxbrandingmodule_moduledef = {
		PyModuleDef_HEAD_INIT,
		"boxbranding",
		"boxbranding",
		-1,
		boxbrandingMethods,
		NULL,
		NULL,
		NULL,
		NULL,
	};

PyObject* PyInit_boxbranding() {
	PyModule_Create(&boxbrandingmodule_moduledef);
#else
void initboxbranding() {
	Py_InitModule("boxbranding", boxbrandingMethods);
#endif
}
