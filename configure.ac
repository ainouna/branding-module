AC_INIT([openvision-branding-module],[7.0])
AM_INIT_AUTOMAKE([dist-bzip2 foreign no-define tar-pax])
AC_CONFIG_HEADERS([enigma2-plugins-config.h])

# Silent rules are available since 1.11, but older versions
# are still in use. So don't use them unconditionally.
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

AC_USE_SYSTEM_EXTENSIONS
AC_SYS_LARGEFILE

AC_PROG_CC
AC_PROG_CXX
m4_ifdef([LT_INIT], [LT_INIT], [AC_PROG_LIBTOOL])
AC_CONFIG_MACRO_DIR([m4])

AC_CHECK_HEADERS([dbox/fp.h dbox/lcd-ks0713.h])

AC_PATH_PROG(MSGFMT, msgfmt, AC_MSG_ERROR(Could not find msgfmt))

AM_PATH_PYTHON
AX_PYTHON_DEVEL
AX_PTHREAD

AC_ARG_WITH(imgversion,
	[  --with-imgversion=NUMBER image version [[number,...]]],
	[IMGVERSION="$withval"],[IMGVERSION=""])
AC_SUBST(IMGVERSION)
AC_DEFINE_UNQUOTED(IMGVERSION,"$IMGVERSION",[image version])

AC_ARG_WITH(imgrevision,
	[  --with-imgrevision=NUMBER image revision [[number,...]]],
	[IMGREVISION="$withval"],[IMGREVISION=""])
AC_SUBST(IMGREVISION)
AC_DEFINE_UNQUOTED(IMGREVISION,"$IMGREVISION",[image revision])

AC_ARG_WITH(imglanguage,
	[  --with-imglanguage=NUMBER image language [[english,...]]],
	[IMGLANGUAGE="$withval"],[IMGLANGUAGE=""])
AC_SUBST(IMGLANGUAGE)
AC_DEFINE_UNQUOTED(IMGLANGUAGE,"$IMGLANGUAGE",[image language])

AC_ARG_WITH(developername,
	[  --with-developername=NAME developer name [[persianprince,...]]],
	[DEVELOPERNAME="$withval"],[DEVELOPERNAME=""])
AC_SUBST(DEVELOPERNAME)
AC_DEFINE_UNQUOTED(DEVELOPERNAME,"$DEVELOPERNAME",[developer name])

AC_ARG_WITH(boxbrand,
	[  --with-boxbrand=NAME box brand [[dreambox,...]]],
	[BOXBRAND="$withval"],[BOXBRAND=""])
AC_SUBST(BOXBRAND)
AC_DEFINE_UNQUOTED(BOXBRAND,"$BOXBRAND",[box brand])

AC_ARG_WITH(displaybrand,
	[  --with-displaybrand=NAME box display brand [[dreambox,...]]],
	[DISPLAYBRAND="$withval"],[DISPLAYBRAND=""])
AC_SUBST(DISPLAYBRAND)
AC_DEFINE_UNQUOTED(DISPLAYBRAND,"$DISPLAYBRAND",[box display brand])

AC_ARG_WITH(friendlyfamily,
	[  --with-friendlyfamily=NAME friendly family [[zgemmah9s zgemmah9t zgemmah92s zgemmah92h zgemmah9splus]]],
	[FRIENDLYFAMILY="$withval"],[FRIENDLYFAMILY=""])
AC_SUBST(FRIENDLYFAMILY)
AC_DEFINE_UNQUOTED(FRIENDLYFAMILY,"$FRIENDLYFAMILY",[friendly family])

AC_ARG_WITH(oever,
	[  --with-oever=NUMBER oe number [[10.1,...]]],
	[OE_VER="$withval"],[OE_VER=""])
AC_SUBST(OE_VER)
AC_DEFINE_UNQUOTED(OE_VER,"$OE_VER",[oe number])

AC_ARG_WITH(driverdate,
	[  --with-driverdate=NUMBER driver date [[2022]]],
	[DRIVERDATE="$withval"],[DRIVERDATE=""])
AC_SUBST(DRIVERDATE)
AC_DEFINE_UNQUOTED(DRIVERDATE,"$DRIVERDATE",[driver date])

AC_ARG_WITH(distro,
	[  --with-distro=NAME distro name [[openvision,...]]],
	[DISTRO="$withval"],[DISTRO=""])
AC_SUBST(DISTRO)
AC_DEFINE_UNQUOTED(DISTRO,"$DISTRO",[distro name])

AC_ARG_WITH(displaydistro,
	[  --with-displaydistro=NAME display distro name [[Open Vision,...]]],
	[DISPLAYDISTRO="$withval"],[DISPLAYDISTRO=""])
AC_SUBST(DISPLAYDISTRO)
AC_DEFINE_UNQUOTED(DISPLAYDISTRO,"$DISPLAYDISTRO",[display distro name])

AC_ARG_WITH(boxtype,
	[  --with-boxtype=NAME box model [[dm800,...]]],
	[BOXTYPE="$withval"],[BOXTYPE=""])
AC_SUBST(BOXTYPE)
AC_DEFINE_UNQUOTED(BOXTYPE,"$BOXTYPE",[box model])

AC_ARG_WITH(displaymodel,
	[  --with-displaymodel=NAME box display model [[dm800,...]]],
	[DISPLAYMODEL="$withval"],[DISPLAYMODEL=""])
AC_SUBST(DISPLAYMODEL)
AC_DEFINE_UNQUOTED(DISPLAYMODEL,"$DISPLAYMODEL",[box display model])

AC_ARG_WITH(machinebuild,
	[  --with-machinebuild=NAME stb platform [[dm800,...]]],
	[MACHINE_BUILD="$withval"],[MACHINE_BUILD=""])
AC_SUBST(MACHINE_BUILD)
AC_DEFINE_UNQUOTED(MACHINE_BUILD,"$MACHINE_BUILD",[stb platform])

AC_ARG_WITH(imageversion,
	[  --with-imageversion=NUMBER version number [[number,...]]],
	[IMAGEVERSION="$withval"],[IMAGEVERSION=""])
AC_SUBST(IMAGEVERSION)
AC_DEFINE_UNQUOTED(IMAGEVERSION,"$IMAGEVERSION",[version number])

AC_ARG_WITH(imagebuild,
	[  --with-imagebuild=NUMBER build number [[number,...]]],
	[IMAGEBUILD="$withval"],[IMAGEBUILD=""])
AC_SUBST(IMAGEBUILD)
AC_DEFINE_UNQUOTED(IMAGEBUILD,"$IMAGEBUILD",[build number])

AC_ARG_WITH(imagedevbuild,
	[  --with-imagedevbuild=NUMBER dev build number [[number,...]]],
	[IMAGEDEVBUILD="$withval"],[IMAGEDEVBUILD=""])
AC_SUBST(IMAGEDEVBUILD)
AC_DEFINE_UNQUOTED(IMAGEDEVBUILD,"$IMAGEDEVBUILD",[build number])

AC_ARG_WITH(imagetype,
	[  --with-imagetype=NAME imagetype name [[develop,...]]],
	[DISTRO_TYPE="$withval"],[DISTRO_TYPE=""])
AC_SUBST(DISTRO_TYPE)
AC_DEFINE_UNQUOTED(DISTRO_TYPE,"$DISTRO_TYPE",[imagetype name])

AC_ARG_WITH(feedsurl,
	[  --with-feedsurl=NAME feeds url  [[openvision,...]]],
	[FEEDSURL="$withval"],[FEEDSURL=""])
AC_SUBST(FEEDSURL)
AC_DEFINE_UNQUOTED(FEEDSURL,"$FEEDSURL",[feeds url])

AC_ARG_WITH(imagedir,
	[  --with-imagedir=NAME imagedir folder [[machine,...]]],
	[IMAGEDIR="$withval"],[IMAGEDIR=""])
AC_SUBST(IMAGEDIR)
AC_DEFINE_UNQUOTED(IMAGEDIR,"$IMAGEDIR",[imagedir folder])

AC_ARG_WITH(imagefs,
	[  --with-imagefs=NAME imagefs folder [[ext,...]]],
	[IMAGE_FSTYPES="$withval"],[IMAGE_FSTYPES=""])
AC_SUBST(IMAGE_FSTYPES)
AC_DEFINE_UNQUOTED(IMAGE_FSTYPES,"$IMAGE_FSTYPES",[imagefs folder])

AC_ARG_WITH(mtdbootfs,
	[  --with-mtdbootfs=NAME mtdbootfs number [[mmcblk0p4,...]]],
	[MTD_BOOTFS="$withval"],[MTD_BOOTFS=""])
AC_SUBST(MTD_BOOTFS)
AC_DEFINE_UNQUOTED(MTD_BOOTFS,"$MTD_BOOTFS",[mtdbootfs number])

AC_ARG_WITH(mtdrootfs,
	[  --with-mtdrootfs=NAME mtdrootfs number [[mmcblk0p19,...]]],
	[MTD_ROOTFS="$withval"],[MTD_ROOTFS=""])
AC_SUBST(MTD_ROOTFS)
AC_DEFINE_UNQUOTED(MTD_ROOTFS,"$MTD_ROOTFS",[mtdrootfs number])

AC_ARG_WITH(mtdkernel,
	[  --with-mtdkernel=NAME mtdkernel number [[mmcblk0p18,...]]],
	[MTD_KERNEL="$withval"],[MTD_KERNEL=""])
AC_SUBST(MTD_KERNEL)
AC_DEFINE_UNQUOTED(MTD_KERNEL,"$MTD_KERNEL",[mtdkernel number])

AC_ARG_WITH(rootfile,
	[  --with-rootfile=NAME rootfile name [[rootfs.tar.bz2,...]]],
	[ROOTFS_FILE="$withval"],[ROOTFS_FILE=""])
AC_SUBST(ROOTFS_FILE)
AC_DEFINE_UNQUOTED(ROOTFS_FILE,"$ROOTFS_FILE",[rootfile name])

AC_ARG_WITH(kernelfile,
	[  --with-kernelfile=NAME kernelfile name [[uImage,...]]],
	[KERNEL_FILE="$withval"],[KERNEL_FILE=""])
AC_SUBST(KERNEL_FILE)
AC_DEFINE_UNQUOTED(KERNEL_FILE,"$KERNEL_FILE",[kernelfile name])

AC_ARG_WITH(mkubifs,
	[  --with-mkubifs=NUMBER mkubifs number [[2048,...]]],
	[MKUBIFS_ARGS="$withval"],[MKUBIFS_ARGS=""])
AC_SUBST(MKUBIFS_ARGS)
AC_DEFINE_UNQUOTED(MKUBIFS_ARGS,"$MKUBIFS_ARGS",[mkubifs number])

AC_ARG_WITH(ubinize,
	[  --with-ubinize=NUMBER ubinize number [[2048,...]]],
	[UBINIZE_ARGS="$withval"],[UBINIZE_ARGS=""])
AC_SUBST(UBINIZE_ARGS)
AC_DEFINE_UNQUOTED(UBINIZE_ARGS,"$UBINIZE_ARGS",[ubinize number])

AC_ARG_WITH(forcemode,
	[  --with-forcemode=NAME forcemode name [[no,...]]],
	[FORCE_MODE="$withval"],[FORCE_MODE=""])
AC_SUBST(FORCE_MODE)
AC_DEFINE_UNQUOTED(FORCE_MODE,"$FORCE_MODE",[forcemode name])

AC_ARG_WITH(arch,
	[  --with-arch=NAME arch name [[mips32el,...]]],
	[ARCH_TYPE="$withval"],[ARCH_TYPE=""])
AC_SUBST(ARCH_TYPE)
AC_DEFINE_UNQUOTED(ARCH_TYPE,"$ARCH_TYPE",[arch name])

AC_ARG_WITH(tfpu,
	[  --with-tfpu=NAME tfpu name [[soft,...]]],
	[TFPU_TYPE="$withval"],[TFPU_TYPE=""])
AC_SUBST(TFPU_TYPE)
AC_DEFINE_UNQUOTED(TFPU_TYPE,"$TFPU_TYPE",[tfpu name])

AC_ARG_WITH(display-type,
	[  --with-display-type=NAME display type [[7segment,textlcd...]]],
	[DISPLAY_TYPE="$withval"],[DISPLAY_TYPE=""])
AC_SUBST(DISPLAY_TYPE)
AC_DEFINE_UNQUOTED(DISPLAY_TYPE,"$DISPLAY_TYPE",[display type])

AC_ARG_WITH(small-flash,
	[  --with-small-flash=NAME flash type [[smallflash,...]]],
	[HAVE_SMALLFLASH="$withval"],[HAVE_SMALLFLASH="True"])
AC_SUBST(HAVE_SMALLFLASH)
AC_DEFINE_UNQUOTED(HAVE_SMALLFLASH,"$HAVE_SMALLFLASH",[smallflash])

AC_ARG_WITH(middle-flash,
	[  --with-middle-flash=NAME flash type [[middleflash,...]]],
	[HAVE_MIDDLEFLASH="$withval"],[HAVE_MIDDLEFLASH="True"])
AC_SUBST(HAVE_MIDDLEFLASH)
AC_DEFINE_UNQUOTED(HAVE_MIDDLEFLASH,"$HAVE_MIDDLEFLASH",[middleflash])

AC_ARG_WITH(transcoding,
	[  --with-transcoding=NAME transcoding [[transcoding,...]]],
	[HAVE_TRANSCODING="$withval"],[HAVE_TRANSCODING="True"])
AC_SUBST(HAVE_TRANSCODING)
AC_DEFINE_UNQUOTED(HAVE_TRANSCODING,"$HAVE_TRANSCODING",[transcoding])

AC_ARG_WITH(multitranscoding,
	[  --with-multitranscoding=NAME multitranscoding [[multitranscoding,...]]],
	[HAVE_MULTITRANSCODING="$withval"],[HAVE_MULTITRANSCODING="True"])
AC_SUBST(HAVE_MULTITRANSCODING)
AC_DEFINE_UNQUOTED(HAVE_MULTITRANSCODING,"$HAVE_MULTITRANSCODING",[multitranscoding])

AC_ARG_WITH(multilib,
	[  --with-multilib=NAME multilib [[multilib,...]]],
	[HAVE_MULTILIB="$withval"],[HAVE_MULTILIB="True"])
AC_SUBST(HAVE_MULTILIB)
AC_DEFINE_UNQUOTED(HAVE_MULTILIB,"$HAVE_MULTILIB",[multilib])

AC_ARG_WITH(hdmi,
	[  --with-hdmi=NAME hdmi [[hdmi......]]],
	[HAVE_HDMI="$withval"],[HAVE_HDMI="True"])
AC_SUBST(HAVE_HDMI)
AC_DEFINE_UNQUOTED(HAVE_HDMI,"$HAVE_HDMI",[hdmi])

AC_ARG_WITH(yuv,
	[  --with-yuv=NAME yuv [[yuv......]]],
	[HAVE_YUV="$withval"],[HAVE_YUV="True"])
AC_SUBST(HAVE_YUV)
AC_DEFINE_UNQUOTED(HAVE_YUV,"$HAVE_YUV",[yuv])

AC_ARG_WITH(rca,
	[  --with-rca=NAME rca [[rca......]]],
	[HAVE_RCA="$withval"],[HAVE_RCA="True"])
AC_SUBST(HAVE_RCA)
AC_DEFINE_UNQUOTED(HAVE_RCA,"$HAVE_RCA",[rca])

AC_ARG_WITH(av-jack,
	[  --with-av-jack=NAME av-jack [[av-jack......]]],
	[HAVE_AV_JACK="$withval"],[HAVE_AV_JACK="True"])
AC_SUBST(HAVE_AV_JACK)
AC_DEFINE_UNQUOTED(HAVE_AV_JACK,"$HAVE_AV_JACK",[av-jack])

AC_ARG_WITH(scart,
	[  --with-scart=NAME scart [[scart......]]],
	[HAVE_SCART="$withval"],[HAVE_SCART="True"])
AC_SUBST(HAVE_SCART)
AC_DEFINE_UNQUOTED(HAVE_SCART,"$HAVE_SCART",[scart])

AC_ARG_WITH(svideo,
	[  --with-svideo=NAME svideo [[svideo......]]],
	[HAVE_SVIDEO="$withval"],[HAVE_SVIDEO="True"])
AC_SUBST(HAVE_SVIDEO)
AC_DEFINE_UNQUOTED(HAVE_SVIDEO,"$HAVE_SVIDEO",[svideo])

AC_ARG_WITH(hdmi-in-hd,
	[  --with-hdmi-in-hd=NAME hdmi-in-hd [[hdmi-in-hd......]]],
	[HAVE_HDMI_IN_HD="$withval"],[HAVE_HDMI_IN_HD="True"])
AC_SUBST(HAVE_HDMI_IN_HD)
AC_DEFINE_UNQUOTED(HAVE_HDMI_IN_HD,"$HAVE_HDMI_IN_HD",[hdmi-in-hd])

AC_ARG_WITH(hdmi-in-fhd,
	[  --with-hdmi-in-fhd=NAME hdmi-in-fhd [[hdmi-in-fhd......]]],
	[HAVE_HDMI_IN_FHD="$withval"],[HAVE_HDMI_IN_FHD="True"])
AC_SUBST(HAVE_HDMI_IN_FHD)
AC_DEFINE_UNQUOTED(HAVE_HDMI_IN_FHD,"$HAVE_HDMI_IN_FHD",[hdmi-in-fhd])

AC_ARG_WITH(wol,
	[  --with-wol=NAME wol [[wol......]]],
	[HAVE_WOL="$withval"],[HAVE_WOL="True"])
AC_SUBST(HAVE_WOL)
AC_DEFINE_UNQUOTED(HAVE_WOL,"$HAVE_WOL",[wol])

AC_ARG_WITH(ci,
	[  --with-ci=NAME ci [[ci......]]],
	[HAVE_CI="$withval"],[HAVE_CI="True"])
AC_SUBST(HAVE_CI)
AC_DEFINE_UNQUOTED(HAVE_CI,"$HAVE_CI",[ci])

AC_ARG_WITH(fan,
	[  --with-fan=NAME fan [[fan......]]],
	[HAVE_FAN="$withval"],[HAVE_FAN="True"])
AC_SUBST(HAVE_FAN)
AC_DEFINE_UNQUOTED(HAVE_FAN,"$HAVE_FAN",[fan])

AC_ARG_WITH(blindscanbinary,
	[  --with-blindscanbinary=NAME blindscan binary [[blindscan,...]]],
	[BLINDSCANBINARY="$withval"],[BLINDSCANBINARY=""])
AC_SUBST(BLINDSCANBINARY)
AC_DEFINE_UNQUOTED(BLINDSCANBINARY,"$BLINDSCANBINARY",[blindscan binary])

AC_ARG_WITH(socfamily,
	[  --with-socfamily=NAME SoC family [[SoC,...]]],
	[SOCFAMILY="$withval"],[SOCFAMILY=""])
AC_SUBST(SOCFAMILY)
AC_DEFINE_UNQUOTED(SOCFAMILY,"$SOCFAMILY",[SoC family])

AC_ARG_WITH(vfd-symbol,
	[  --with-vfd-symbol=NAME vfd symbol [[vfdsymbol,...]]],
	[HAVE_VFDSYMBOL="$withval"],[HAVE_VFDSYMBOL="True"])
AC_SUBST(HAVE_VFDSYMBOL)
AC_DEFINE_UNQUOTED(HAVE_VFDSYMBOL,"$HAVE_VFDSYMBOL",[vfdsymbol])

AC_ARG_WITH(kernelversion,
	[  --with-kernelversion=NUMBER kernel version [[4,...]]],
	[KERNELVERSION="$withval"],[KERNELVERSION=""])
AC_SUBST(KERNELVERSION)
AC_DEFINE_UNQUOTED(KERNELVERSION,"$KERNELVERSION",[kernel version])

AC_ARG_WITH(rctype,
	[  --with-rctype=NUMBER rc type [[0,...]]],
	[RCTYPE="$withval"],[RCTYPE=""])
AC_SUBST(RCTYPE)
AC_DEFINE_UNQUOTED(RCTYPE,"$RCTYPE",[rc type])

AC_ARG_WITH(rcname,
	[  --with-rcname=NAME rc name [[dmm,...]]],
	[RCNAME="$withval"],[RCNAME=""])
AC_SUBST(RCNAME)
AC_DEFINE_UNQUOTED(RCNAME,"$RCNAME",[rc name])

AC_ARG_WITH(rcidnum,
	[  --with-rcidnum=NUMBER rc id number [[2,...]]],
	[RCIDNUM="$withval"],[RCIDNUM=""])
AC_SUBST(RCIDNUM)
AC_DEFINE_UNQUOTED(RCIDNUM,"$RCIDNUM",[rc id number])

AC_ARG_WITH(fhdskin,
	[  --with-fhdskin=NAME fhdskin [[fhdskin......]]],
	[HAVE_FHDSKIN="$withval"],[HAVE_FHDSKIN="True"])
AC_SUBST(HAVE_FHDSKIN)
AC_DEFINE_UNQUOTED(HAVE_FHDSKIN,"$HAVE_FHDSKIN",[fhdskin])

AC_ARG_WITH(e2service,
	[  --with-e2service=Enigma2 service name [[servicemp3,...]]],
	[E2SERVICE="$withval"],[E2SERVICE=""])
AC_SUBST(E2SERVICE)
AC_DEFINE_UNQUOTED(E2SERVICE,"$E2SERVICE",[service name])

AC_ARG_WITH(dboxlcd,
	[  --with-dboxlcd=NAME dboxlcd [[dboxlcd......]]],
	[HAVE_DBOXLCD="$withval"],[HAVE_DBOXLCD="True"])
AC_SUBST(HAVE_DBOXLCD)
AC_DEFINE_UNQUOTED(HAVE_DBOXLCD,"$HAVE_DBOXLCD",[dboxlcd])

AC_ARG_WITH(emmc,
	[  --with-emmc=NAME emmc [[emmc......]]],
	[HAVE_EMMC="$withval"],[HAVE_EMMC="True"])
AC_SUBST(HAVE_EMMC)
AC_DEFINE_UNQUOTED(HAVE_EMMC,"$HAVE_EMMC",[emmc])

AC_ARG_WITH(mmc,
	[  --with-mmc=NAME mmc [[mmc......]]],
	[HAVE_MMC="$withval"],[HAVE_MMC="True"])
AC_SUBST(HAVE_MMC)
AC_DEFINE_UNQUOTED(HAVE_MMC,"$HAVE_MMC",[mmc])

AC_ARG_WITH(uhd4k,
	[  --with-uhd4k=NAME uhd4k [[uhd4k......]]],
	[HAVE_UHD4K="$withval"],[HAVE_UHD4K="True"])
AC_SUBST(HAVE_UHD4K)
AC_DEFINE_UNQUOTED(HAVE_UHD4K,"$HAVE_UHD4K",[uhd4k])

AC_ARG_WITH(debug,
	AS_HELP_STRING([--without-debug],[disable debugging code]),
	[with_debug="$withval"],[with_debug=""])
if test "$with_debug" = "yes"; then
	DEBUG_CFLAGS="-ggdb3"
	AC_DEFINE([DEBUG],[1],[Define to 1 to enable debugging code])
fi
AC_SUBST(DEBUG_CFLAGS)

AC_CONFIG_FILES([
Makefile
BoxBranding/Makefile
BoxBranding/lib/Makefile
])
AC_OUTPUT
