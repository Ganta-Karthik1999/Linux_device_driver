#include <linux/module.h>
// #include <linux/kernel.h>
#include <linux/init.h>

static int __init my_init(void)
{
   printk(KERN_INFO "log_level- This  is an info\n");
   printk(KERN_WARNING "log_level- This  is an Warning\n");
   printk(KERN_ALERT"log_level- This  is an alert\n");
   printk(KERN_DEBUG "log_level- This  is an Debug\n");
    return 0;
}

static void __exit my_exit(void)
{
    pr_emerg("Log level - module is unloaded\n");
    pr_err("log level - Error \n");
    pr_info("log_level - the last info...\n");
    printk("hello: exit\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Karthik");
MODULE_DESCRIPTION("Kernal Log Level");