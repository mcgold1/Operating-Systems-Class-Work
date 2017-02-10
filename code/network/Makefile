# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the network assignment
#    Defines set up assuming this assignment is done last 
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DUSER_PROGRAM -DVM -DFILESYS_NEEDED -DFILESYS -DNETWORK
INCPATH = -I../network -I../bin -I../filesys -I../vm -I../userprog -I../threads -I../machine
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H) $(NETWORK_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C) $(NETWORK_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O) $(NETWORK_O)

# bare bones version
# DEFINES =-DTHREADS -DNETWORK
# INCPATH = -I../network -I../threads -I../machine
# HFILES = $(THREAD_H) $(NETWORK_H)
# CFILES = $(THREAD_C) $(NETWORK_C)
# C_OFILES = $(THREAD_O) $(NETWORK_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
main.o: ../threads/main.cc ../threads/copyright.h ../threads/utility.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h
list.o: ../threads/list.cc ../threads/copyright.h ../threads/list.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/iso/stdio_iso.h /usr/include/sys/feature_tests.h \
 /usr/include/sys/isa_defs.h /usr/include/sys/va_list.h \
 /usr/include/stdio_tag.h /usr/include/stdio_impl.h \
 /usr/include/string.h /usr/include/iso/string_iso.h
scheduler.o: ../threads/scheduler.cc ../threads/copyright.h \
 ../threads/scheduler.h ../threads/list.h ../threads/utility.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/system.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h
synch.o: ../threads/synch.cc ../threads/copyright.h ../threads/synch.h \
 ../threads/thread.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/list.h \
 ../threads/system.h ../threads/scheduler.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h
synchlist.o: ../threads/synchlist.cc ../threads/copyright.h \
 ../threads/synchlist.h ../threads/list.h ../threads/utility.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/synch.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h
system.o: ../threads/system.cc ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h
thread.o: ../threads/thread.cc ../threads/copyright.h \
 ../threads/thread.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/switch.h \
 ../threads/synch.h ../threads/list.h ../threads/system.h \
 ../threads/scheduler.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h ../filesys/synchdisk.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h
utility.o: ../threads/utility.cc ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/iso/stdio_iso.h /usr/include/sys/feature_tests.h \
 /usr/include/sys/isa_defs.h /usr/include/sys/va_list.h \
 /usr/include/stdio_tag.h /usr/include/stdio_impl.h \
 /usr/include/string.h /usr/include/iso/string_iso.h \
 /usr/local/lib/gcc-lib/sparc-sun-solaris2.6/2.95.1/include/stdarg.h \
 /usr/local/lib/gcc-lib/sparc-sun-solaris2.6/2.95.1/include/va-sparc.h
threadtest.o: ../threads/threadtest.cc ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h
interrupt.o: ../machine/interrupt.cc ../threads/copyright.h \
 ../machine/interrupt.h ../threads/list.h ../threads/utility.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/stats.h ../machine/timer.h \
 ../filesys/synchdisk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h
sysdep.o: ../machine/sysdep.cc ../threads/copyright.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h /usr/include/signal.h \
 /usr/include/sys/types.h /usr/include/sys/machtypes.h \
 /usr/include/sys/int_types.h /usr/include/sys/select.h \
 /usr/include/sys/time.h /usr/include/time.h \
 /usr/include/iso/time_iso.h /usr/include/sys/time_impl.h \
 /usr/include/iso/signal_iso.h /usr/include/sys/iso/signal_iso.h \
 /usr/include/sys/unistd.h /usr/include/sys/signal.h \
 /usr/include/sys/siginfo.h /usr/include/sys/machsig.h \
 /usr/include/sys/procset.h /usr/include/sys/socket.h \
 /usr/include/sys/uio.h /usr/include/sys/netconfig.h \
 /usr/include/netinet/in.h \
 /usr/local/lib/gcc-lib/sparc-sun-solaris2.6/2.95.1/include/sys/stream.h \
 /usr/include/sys/stream.h /usr/include/sys/vnode.h \
 /usr/include/sys/t_lock.h /usr/include/sys/machlock.h \
 /usr/include/v7/sys/privregs.h /usr/include/v7/sys/psr.h \
 /usr/include/sys/fsr.h /usr/include/sys/param.h \
 /usr/include/sys/mutex.h /usr/include/sys/rwlock.h \
 /usr/include/sys/semaphore.h /usr/include/sys/condvar.h \
 /usr/include/sys/rwstlock.h /usr/include/sys/ksynch.h \
 /usr/include/sys/cred.h /usr/include/sys/resource.h \
 /usr/include/vm/seg_enum.h /usr/include/sys/poll.h \
 /usr/include/sys/strmdep.h /usr/include/sys/model.h \
 /usr/include/sys/strft.h /usr/include/sys/byteorder.h \
 /usr/include/sys/un.h /usr/include/net/if_dl.h \
 /usr/include/sys/file.h /usr/include/sys/mman.h /usr/include/fcntl.h \
 /usr/include/sys/fcntl.h ../machine/interrupt.h ../threads/list.h \
 ../threads/utility.h ../machine/sysdep.h ../threads/system.h \
 ../threads/thread.h ../machine/machine.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../machine/stats.h \
 ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h
stats.o: ../machine/stats.cc ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/iso/stdio_iso.h /usr/include/sys/feature_tests.h \
 /usr/include/sys/isa_defs.h /usr/include/sys/va_list.h \
 /usr/include/stdio_tag.h /usr/include/stdio_impl.h \
 /usr/include/string.h /usr/include/iso/string_iso.h \
 ../machine/stats.h
timer.o: ../machine/timer.cc ../threads/copyright.h ../machine/timer.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/iso/stdio_iso.h /usr/include/sys/feature_tests.h \
 /usr/include/sys/isa_defs.h /usr/include/sys/va_list.h \
 /usr/include/stdio_tag.h /usr/include/stdio_impl.h \
 /usr/include/string.h /usr/include/iso/string_iso.h \
 ../threads/system.h ../threads/thread.h ../machine/machine.h \
 ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
 ../filesys/synchdisk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h
bitmap.o: ../userprog/bitmap.cc ../threads/copyright.h \
 ../userprog/bitmap.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../filesys/openfile.h
exception.o: ../userprog/exception.cc ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../userprog/syscall.h
progtest.o: ../userprog/progtest.cc ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../machine/console.h
console.o: ../machine/console.cc ../threads/copyright.h \
 ../machine/console.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h
machine.o: ../machine/machine.cc ../threads/copyright.h \
 ../machine/machine.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../machine/translate.h \
 ../machine/disk.h ../threads/system.h ../threads/thread.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h
mipssim.o: ../machine/mipssim.cc ../threads/copyright.h \
 ../machine/machine.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../machine/translate.h \
 ../machine/disk.h ../machine/mipssim.h ../threads/system.h \
 ../threads/thread.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
 ../filesys/synchdisk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h
translate.o: ../machine/translate.cc ../threads/copyright.h \
 ../machine/machine.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/system.h ../threads/thread.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h
directory.o: ../filesys/directory.cc ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/iso/stdio_iso.h /usr/include/sys/feature_tests.h \
 /usr/include/sys/isa_defs.h /usr/include/sys/va_list.h \
 /usr/include/stdio_tag.h /usr/include/stdio_impl.h \
 /usr/include/string.h /usr/include/iso/string_iso.h \
 ../filesys/filehdr.h ../machine/disk.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../filesys/directory.h
filehdr.o: ../filesys/filehdr.cc ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../filesys/filehdr.h ../userprog/bitmap.h
filesys.o: ../filesys/filesys.cc ../threads/copyright.h \
 ../machine/disk.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../filesys/directory.h ../filesys/filehdr.h \
 ../filesys/filesys.h
fstest.o: ../filesys/fstest.cc ../threads/copyright.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/iso/stdio_iso.h /usr/include/sys/feature_tests.h \
 /usr/include/sys/isa_defs.h /usr/include/sys/va_list.h \
 /usr/include/stdio_tag.h /usr/include/stdio_impl.h \
 /usr/include/string.h /usr/include/iso/string_iso.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/system.h \
 ../threads/thread.h ../machine/machine.h ../machine/translate.h \
 ../machine/disk.h ../userprog/addrspace.h ../threads/scheduler.h \
 ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
 ../machine/timer.h ../filesys/synchdisk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h
openfile.o: ../filesys/openfile.cc ../threads/copyright.h \
 ../filesys/filehdr.h ../machine/disk.h ../threads/utility.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
 ../filesys/synchdisk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h
synchdisk.o: ../filesys/synchdisk.cc ../threads/copyright.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/utility.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/synch.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/list.h
disk.o: ../machine/disk.cc ../threads/copyright.h ../machine/disk.h \
 ../threads/utility.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/iso/stdio_iso.h /usr/include/sys/feature_tests.h \
 /usr/include/sys/isa_defs.h /usr/include/sys/va_list.h \
 /usr/include/stdio_tag.h /usr/include/stdio_impl.h \
 /usr/include/string.h /usr/include/iso/string_iso.h \
 ../threads/system.h ../threads/thread.h ../machine/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
 ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
 ../filesys/synchdisk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h
nettest.o: ../network/nettest.cc ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h
post.o: ../network/post.cc ../threads/copyright.h ../network/post.h \
 ../machine/network.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/synchlist.h \
 ../threads/list.h ../threads/synch.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h
network.o: ../machine/network.cc ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
 ../machine/stats.h ../machine/timer.h ../filesys/synchdisk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
