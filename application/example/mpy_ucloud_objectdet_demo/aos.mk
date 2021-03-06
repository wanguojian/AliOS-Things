NAME := mpy_ucloud_objectdet_demo

$(NAME)_MBINS_TYPE := app
$(NAME)_VERSION := 1.0.1
$(NAME)_SUMMARY := micropython ucloud objectdet demo
$(NAME)_SOURCES := app_entry.c maintask.c

$(NAME)_COMPONENTS += netmgr littlefs cli fatfs ucloud oss
$(NAME)_COMPONENTS += libiot_devmodel libiot_dynreg
$(NAME)_COMPONENTS-$(AOS_COMP_SDK_AWSS) += libiot_awss

$(NAME)_COMPONENTS += haascv
$(NAME)_COMPONENTS += uai
GLOBAL_DEFINES += CONFIG_AOS_CLI CONFIG_AOS_FATFS_SUPPORT_MMC

GLOBAL_INCLUDES += ./

GLOBAL_DEFINES += USE_LWIPSOCK

UCLOUD_AI_FACEBODY_ENABLE ?= y
UCLOUD_AI_OBJECTDET_ENABLE ?= y
UCLOUD_AI_OCR_ENABLE ?= y

CONFIG_UAI_SUPPORT_ODLA ?= 1
CONFIG_UAI_USE_CMSIS_NN ?= y
CONFIG_UAI_SUPPORT_IMG_PREPROC ?= 1
