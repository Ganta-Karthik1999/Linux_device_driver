#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8293d6f5, "gpio_to_desc" },
	{ 0xd7e39480, "gpiod_direction_output" },
	{ 0x11af45ba, "gpiod_direction_input" },
	{ 0xe2b686ee, "gpiod_set_value" },
	{ 0x122c3a7e, "_printk" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3246EC328FE38F43DFA5ADE");
