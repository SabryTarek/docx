BTRFS
===


install:
- btrfs-progs
- btrfs-progs-doc
- btrfs-progs-bash-completion

$ lsmod | grep btrfs # check btrfs kernel module
$ sudo apt install btrfs-progs
$ mkfs.btrfs -V

## play with disk images
$ dd if=/dev/zero of=diskimage1.img bs=1M count=1000
## associate the disk image with a virtual block device
$ losetup loop1 diskimage1.img
$ losetup

> As btrfs supports partition-less devices
> It's needed to add the -f flag because the device has no partition.
sudo mkfs.btrfs -L "btrfs_sample" -f /dev/loop1






btrfs
balance  (balance data across devices, or change block groups using filters)
check              (Check structural integrity of a filesystem (unmounted).)
device                          (manage and query devices in the filesystem)
filesystem                        (overall filesystem tasks and information)
                                   defragment                       (Defragment a file or a directory)
                                   resize                                        (Resize a filesystem)
                                   df                 (Show space usage information for a mount point)
                                   show                           (Show the structure of a filesystem)
                                   du                             (Summarize disk usage of each file.)
                                   sync                                 (Force a sync on a filesystem)
                                   label                     (Get or change the label of a filesystem)
                                   usage  (Show detailed information about internal filesystem usage.)
inspect-internal                        (query various internal information)
property                           (modify properties of filesystem objects)
qgroup                                                 (manage quota groups)
quota                                     (manage filesystem quota settings)
receive                                   (Receive subvolumes from a stream)
replace                                 (replace a device in the filesystem)
rescue                              (toolbox for specific rescue operations)
restore         (Try to restore files from a damaged filesystem (unmounted))
scrub                                (verify checksums of data and metadata)
send                                      (Send the subvolume(s) to stdout.)
subvolume                     (manage subvolumes: create, delete, list, etc)
                                   create                                                       (Create a subvolume)
                                   delete                                                      (Delete subvolume(s))
                                   find-new                       (List the recently modified files in a filesystem)
                                   get-default                           (Get the default subvolume of a filesystem)
                                   list                           (List subvolumes and snapshots in the filesystem.)
                                   set-default     (Set the default subvolume of the filesystem mounted as default.)
                                   show                                  (Show more information about the subvolume)
                                   snapshot                                     (Create a snapshot of the subvolume)
                                   sync  (Wait until given subvolume(s) are completely removed from the filesystem.)

help                                              (Display help information)
version                                        (Display btrfs-progs version)

---
$ btrfs help 
usage: btrfs [--help] [--version] [--format <format>] [-v|--verbose] [-q|--quiet] <group> [<group>...] <command> [<args>]

    btrfs subvolume create [-i <qgroupid>] [<dest>/]<name>
        Create a subvolume
    btrfs subvolume delete [options] <subvolume> [<subvolume>...]
    btrfs subvolume delete [options] -i|--subvolid <subvolid> <path>
        Delete subvolume(s)
    btrfs subvolume list [options] <path>
        List subvolumes and snapshots in the filesystem.
    btrfs subvolume snapshot [-r] [-i <qgroupid>] <source> <dest>|[<dest>/]<name>
        Create a snapshot of the subvolume
    btrfs subvolume get-default <path>
        Get the default subvolume of a filesystem
    btrfs subvolume set-default <subvolume>
    btrfs subvolume set-default <subvolid> <path>
        Set the default subvolume of the filesystem mounted as default.
    btrfs subvolume find-new <path> <lastgen>
        List the recently modified files in a filesystem
    btrfs subvolume show [options] <path>
        Show more information about the subvolume (UUIDs, generations, times, snapshots)
    btrfs subvolume sync <path> [<subvol-id>...]
        Wait until given subvolume(s) are completely removed from the filesystem.

    btrfs filesystem df [options] <path>
        Show space usage information for a mount point
    btrfs filesystem du [options] <path> [<path>..]
        Summarize disk usage of each file.
    btrfs filesystem show [options] [<path>|<uuid>|<device>|label]
        Show the structure of a filesystem
    btrfs filesystem sync <path>
        Force a sync on a filesystem
    btrfs filesystem defragment [options] <file>|<dir> [<file>|<dir>...]
        Defragment a file or a directory
    btrfs filesystem resize [devid:][+/-]<newsize>[kKmMgGtTpPeE]|[devid:]max <path>
        Resize a filesystem
    btrfs filesystem label [<device>|<mount_point>] [<newlabel>]
        Get or change the label of a filesystem
    btrfs filesystem usage [options] <path> [<path>..]
        Show detailed information about internal filesystem usage .

    btrfs balance start [options] <path>
        Balance chunks across the devices
    btrfs balance pause <path>
        Pause running balance
    btrfs balance cancel <path>
        Cancel running or paused balance
    btrfs balance resume <path>
        Resume interrupted balance
    btrfs balance status [-v] <path>
        Show status of running or paused balance

    btrfs device add [options] <device> [<device>...] <path>
        Add one or more devices to a mounted filesystem.
    btrfs device delete <device>|<devid> [<device>|<devid>...] <path>
    btrfs device remove <device>|<devid> [<device>|<devid>...] <path>
        Remove a device from a filesystem
    btrfs device scan [-d|--all-devices] <device> [<device>...]
    btrfs device scan -u|--forget [<device>...]
        Scan or forget (unregister) devices of btrfs filesystems
    btrfs device ready <device>
        Check and wait until a group of devices of a filesystem is ready for mount
    btrfs device stats [options] <path>|<device>
        Show device IO error statistics
    btrfs device usage [options] <path> [<path>..]
        Show detailed information about internal allocations in devices.

    btrfs scrub start [-BdqrRf] [-c ioprio_class -n ioprio_classdata] <path>|<device>
        Start a new scrub. If a scrub is already running, the new one fails.
    btrfs scrub cancel <path>|<device>
        Cancel a running scrub
    btrfs scrub resume [-BdqrR] [-c ioprio_class -n ioprio_classdata] <path>|<device>
        Resume previously canceled or interrupted scrub
    btrfs scrub status [-dR] <path>|<device>
        Show status of running or finished scrub

    btrfs check [options] <device>
        Check structural integrity of a filesystem (unmounted).

    btrfs rescue chunk-recover [options] <device>
        Recover the chunk tree by scanning the devices one by one.
    btrfs rescue super-recover [options] <device>
        Recover bad superblocks from good copies
    btrfs rescue zero-log <device>
        Clear the tree log. Usable if it's corrupted and prevents mount.
    btrfs rescue fix-device-size <device>
        Re-align device and super block sizes. Usable if newer kernel refuse to mount it due to mismatch super size

    btrfs restore [options] <device> <path> | -l <device>
        Try to restore files from a damaged filesystem (unmounted)

    btrfs inspect-internal inode-resolve [-v] <inode> <path>
        Get file system paths for the given inode
    btrfs inspect-internal logical-resolve [-Pvo] [-s bufsize] <logical> <path>
        Get file system paths for the given logical address
    btrfs inspect-internal subvolid-resolve <subvolid> <path>
        Get file system paths for the given subvolume ID.
    btrfs inspect-internal rootid <path>
        Get tree ID of the containing subvolume of path.
    btrfs inspect-internal min-dev-size [options] <path>
        Get the minimum size the device can be shrunk to. The
    btrfs inspect-internal dump-tree [options] <device> [<device> ..]
        Dump tree structures from a given device
    btrfs inspect-internal dump-super [options] device [device...]
        Dump superblock from a device in a textual form
    btrfs inspect-internal tree-stats [options] <device>
        Print various stats for trees

    btrfs property get [-t <type>] <object> [<name>]
        Get a property value of a btrfs object
    btrfs property set [-t <type>] <object> <name> <value>
        Set a property on a btrfs object
    btrfs property list [-t <type>] <object>
        Lists available properties with their descriptions for the given object

    btrfs send [-ve] [-p <parent>] [-c <clone-src>] [-f <outfile>] <subvol> [<subvol>...]
        Send the subvolume(s) to stdout.
    btrfs receive [options] <mount>
    btrfs receive --dump [options]
        Receive subvolumes from a stream

    btrfs quota enable <path>
        Enable subvolume quota support for a filesystem.
    btrfs quota disable <path>
        Disable subvolume quota support for a filesystem.
    btrfs quota rescan [-sw] <path>
        Trash all qgroup numbers and scan the metadata again with the current config.

    btrfs qgroup assign [options] <src> <dst> <path>
        Assign SRC as the child qgroup of DST
    btrfs qgroup remove [options] <src> <dst> <path>
        Remove a child qgroup SRC from DST.
    btrfs qgroup create <qgroupid> <path>
        Create a subvolume quota group.
    btrfs qgroup destroy <qgroupid> <path>
        Destroy a quota group.
    btrfs qgroup show [options] <path>
        Show subvolume quota groups.
    btrfs qgroup limit [options] <size>|none [<qgroupid>] <path>
        Set the limits a subvolume quota group.

    btrfs replace start [-Bfr] <srcdev>|<devid> <targetdev> <mount_point>
        Replace device of a btrfs filesystem.
    btrfs replace status [-1] <mount_point>
        Print status and progress information of a running device replace operation
    btrfs replace cancel <mount_point>
        Cancel a running device replace operation.

    btrfs help [--full] [--box]
        Display help information
    btrfs version
        Display btrfs-progs version

Use --help as an argument for information on a specific group or command.

---

## References
- (Playing with the btrfs filesystem)[https://dev.to/dandyvica/playing-with-the-btrfs-filesystem-5eno]


