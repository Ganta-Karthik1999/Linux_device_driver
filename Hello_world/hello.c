#include <linux/module.h>
// #include <linux/kernel.h>
#include <linux/init.h>

static int __init my_init(void)
{
    printk("hello: init\n");
    return 0;
}

static void __exit my_exit(void)
{
    printk("hello: exit\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Karthik");
MODULE_DESCRIPTION("Simple hello kernel module");