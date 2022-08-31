#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1571ae67, "module_layout" },
	{ 0x37066842, "platform_driver_unregister" },
	{ 0xc22e6729, "__platform_driver_register" },
	{ 0x7555ff83, "regmap_bulk_read" },
	{ 0x7d2fd4b8, "iio_read_channel_processed_scale" },
	{ 0xa3f2ab86, "_dev_info" },
	{ 0x9b62dae9, "_dev_err" },
	{ 0xbc9c247f, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x3baed141, "devm_power_supply_register" },
	{ 0xaf13281e, "devm_iio_channel_get" },
	{ 0x6ed9b54d, "devm_kmalloc" },
	{ 0x339fa00e, "regmap_update_bits_base" },
	{ 0x828a0818, "power_supply_get_drvdata" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3ea1b6e4, "__stack_chk_fail" },
	{ 0x36b11b8c, "power_supply_changed" },
	{ 0xdb030de4, "regmap_write" },
	{ 0xd107899e, "regmap_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "578A3EFA471FD58269888AD");
