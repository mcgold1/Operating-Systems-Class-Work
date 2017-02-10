# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the multiprogramming assignment
#    Defines set up assuming multiprogramming is done before the file system.
#    If not, use the "filesys first"  defines below. 
#
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DUSER_PROGRAM -DFILESYS_NEEDED -DFILESYS_STUB
INCPATH = -I../bin -I../filesys -I../userprog -I../threads -I../machine
HFILES = $(THREAD_H) $(USERPROG_H)
CFILES = $(THREAD_C) $(USERPROG_C)
C_OFILES = $(THREAD_O) $(USERPROG_O)

# if file sys done first!
# DEFINES = -DUSER_PROGRAM -DFILESYS_NEEDED -DFILESYS
# INCPATH = -I../bin -I../filesys -I../userprog -I../threads -I../machine
# HFILES = $(THREAD_H) $(USERPROG_H) $(FILESYS_H)
# CFILES = $(THREAD_C) $(USERPROG_C) $(FILESYS_C)
# C_OFILES = $(THREAD_O) $(USERPROG_O) $(FILESYS_O)

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
 ../machine/stats.h ../machine/timer.h
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
 ../machine/timer.h
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
 ../machine/stats.h ../machine/timer.h
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
 ../machine/stats.h ../machine/timer.h
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
 ../machine/timer.h
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
 ../machine/stats.h ../machine/timer.h
interrupt.o: ../machine/interrupt.cc ../threads/copyright.h \
 ../machine/interrupt.h ../threads/list.h ../threads/utility.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/iso/stdio_iso.h \
 /usr/include/sys/feature_tests.h /usr/include/sys/isa_defs.h \
 /usr/include/sys/va_list.h /usr/include/stdio_tag.h \
 /usr/include/stdio_impl.h /usr/include/string.h \
 /usr/include/iso/string_iso.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../machine/translate.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../machine/stats.h ../machine/timer.h
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
 ../machine/timer.h
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
 ../threads/list.h ../machine/interrupt.h ../machine/stats.h
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
 ../machine/stats.h ../machine/timer.h ../userprog/syscall.h
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
 ../machine/stats.h ../machine/timer.h ../machine/console.h \
 ../threads/synch.h
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
 ../machine/stats.h ../machine/timer.h
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
 ../machine/stats.h ../machine/timer.h
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
 ../machine/interrupt.h ../machine/stats.h ../machine/timer.h
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
 ../machine/stats.h ../machine/timer.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
