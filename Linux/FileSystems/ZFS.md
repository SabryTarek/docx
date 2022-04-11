ZFS
===

breif:
- Combining the traditionally separate roles of volume manager

ZFS with unique advantages:
- 



OpenZFS (In the words of the creators of ZFS:  “We want to make adding storage to your system as easy as adding new RAM sticks.”)
===
Raw Srorage -> VDevs -> Z-Filesystems=Dataset=subvolume=mount-point -> Pool
$ apt install zfs

utilities:
- zpool
- zfs


zpool create <tank> <sda> <sdb> <sdc>   # create new pool
zpool status
zpool destroy tank



Your data is spread across the three disks, evenly, and if anyone of the disks fail, all your data is lost. As you can see above, the disks are the vdevs themselves.

But you can also create a zpool where the three disks replicate each other, known as mirroring.

$zpool create tank mirror sda sdb sdc

$zpool add tank mirror sde sdf sdg

$zpool destroy tank
$zpool create tank raidz1 sda sdb sdc


zpool list
zfs list

While zpool list shows the net capacity of the raw storage, zfs list and df –h commands show the actual available storage of the zpool. So, it is always a good idea to check the available storage using zfs list command.


$zfs create tank/dataset1
$zfs list


$ zpool offline tank sda


