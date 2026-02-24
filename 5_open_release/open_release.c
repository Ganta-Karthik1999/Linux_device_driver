#include<linux/module.h>
#include<linux/init.h>
#include<linux/fs.h>

#define IO_LED 21
#define Button 20

#define OFFSET 569

static int major;

static ssize_t my_read(struct file *f, char __user *u, size_t l, loff_t *o){
    printk("hello_cdev - Read is Called \n");
    return 0;
}


static int my_open(struct inode *inode, struct file *filp){
    printk("hello_cdev - Major:  %d Minor: %d",imajor(inode),iminor(inode));
    printk("hell0_cdev - file->f_pos: %lld\n",filp->f_pos);
    printk("hell0_cdev - file->f_pos: %lld\n",filp->f_mode);
    printk("hell0_cdev - file->f_pos: %lld\n",filp->f_flags);

    return 0;

}


static int my_release(struct inode *inode, struct file *filp){
    printk(" file is released");
    return 0 ;

}

static struct file_operations fops = {
    .read = my_read,
    .open = my_open,
    .release = my_release,
};

static int __init my_init(void)
{
    major = register_chrdev(0,"hello_cdev",&fops);
    if(major<0){
        printk("Error registering the character device driver !!!");
        return major;
    }
    printk("hello_cdev - Major Device Number: %d\n",major);    
    return 0;
}

static void __exit my_exit(void)
{
    // printk("hello: exit\n");
    unregister_chrdev(major,"hello_cdev");
    printk("hello_cdev - unregistered Major Device Number: %d\n",major);  
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Karthik");
MODULE_DESCRIPTION("Simple charactre device driver !!!");