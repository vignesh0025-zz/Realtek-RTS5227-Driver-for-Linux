#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2caea77d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbe6de8be, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x22b1bc24, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5a82c44a, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x4411c41c, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xbb87b098, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfc05e808, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xabebb0a3, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8f5bbcad, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x8ef82bc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9ef024c6, __VMLINUX_SYMBOL_STR(scsi_cmd_get_serial) },
	{ 0x225d5148, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xf4d7d6c4, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x63dc7eff, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x54523bbd, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xafb3a7a, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x1009320a, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf4071011, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x2de54c59, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x908c1d87, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x51f2519c, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xbbc96a77, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x28887d4a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x772f5046, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x898ab701, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9622c8f9, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x175ae1e2, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x450ad312, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2013b6f4, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7d7c7d09, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x281f0375, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbb5ad19, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x22859906, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xdbb7044e, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xe429c063, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf503fc2a, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x45030677, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x1b8760dc, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe0a2af4f, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x8f6e3bbb, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x625ed09, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

MODULE_ALIAS("pci:v000010ECd00005229sv*sd*bcFFsc*i*");
MODULE_ALIAS("pci:v000010ECd00005227sv*sd*bcFFsc*i*");

MODULE_INFO(srcversion, "BFDE24417B34FDA2BAA4C80");
