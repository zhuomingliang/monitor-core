SFLOW_GMETRIC(SFLOW_M_load_one,"load_one","", GANGLIA_SLOPE_BOTH,"%.2f","load",NULL,"One minute load average")
SFLOW_GMETRIC(SFLOW_M_load_five,"load_five","", GANGLIA_SLOPE_BOTH,"%.2f","load",NULL,"Five minute load average")
SFLOW_GMETRIC(SFLOW_M_load_fifteen,"load_fifteen","", GANGLIA_SLOPE_BOTH,"%.2f","load",NULL,"Fifteen minute load average")
SFLOW_GMETRIC(SFLOW_M_os_release, "os_release", "", GANGLIA_SLOPE_ZERO, "%s", "system", NULL, "Operating System Release" )
SFLOW_GMETRIC(SFLOW_M_machine_type, "machine_type", "", GANGLIA_SLOPE_ZERO, "%s", "system", NULL, "Machine Type" )
SFLOW_GMETRIC(SFLOW_M_os_name, "os_name", "", GANGLIA_SLOPE_ZERO, "%s", "system", NULL, "Operating System" )
SFLOW_GMETRIC(SFLOW_M_heartbeat, "heartbeat", "", GANGLIA_SLOPE_ZERO, "%u", "system", NULL, "Heartbeat" )
SFLOW_GMETRIC(SFLOW_M_proc_run, "proc_run", "", GANGLIA_SLOPE_BOTH, "%u", "process", NULL, "Total Running Processes" )
SFLOW_GMETRIC(SFLOW_M_proc_total, "proc_total", "", GANGLIA_SLOPE_BOTH, "%u", "process", NULL, "Total Processes" )
SFLOW_GMETRIC(SFLOW_M_cpu_num, "cpu_num", "CPUs", GANGLIA_SLOPE_ZERO, "%u", "cpu", NULL, "CPU Count" )
SFLOW_GMETRIC(SFLOW_M_cpu_speed, "cpu_speed", "MHz", GANGLIA_SLOPE_ZERO, "%u", "cpu", NULL, "CPU Speed" )
SFLOW_GMETRIC(SFLOW_M_cpu_boottime, "boottime", "s", GANGLIA_SLOPE_ZERO, "%u", "cpu", NULL, "Last Boot Time" )
SFLOW_GMETRIC(SFLOW_M_cpu_user, "cpu_user", "%", GANGLIA_SLOPE_BOTH, "%.2f", "cpu", NULL, "CPU User" )
SFLOW_GMETRIC(SFLOW_M_cpu_nice, "cpu_nice", "%", GANGLIA_SLOPE_BOTH, "%.2f", "cpu", NULL, "CPU Nice" )
SFLOW_GMETRIC(SFLOW_M_cpu_system, "cpu_system", "%", GANGLIA_SLOPE_BOTH, "%.2f", "cpu", NULL, "CPU System" )
SFLOW_GMETRIC(SFLOW_M_cpu_idle, "cpu_idle", "%", GANGLIA_SLOPE_BOTH, "%.2f", "cpu", NULL, "CPU Idle" )
SFLOW_GMETRIC(SFLOW_M_cpu_wio, "cpu_wio", "%", GANGLIA_SLOPE_BOTH, "%.2f", "cpu", NULL, "CPU I/O Wait" )
SFLOW_GMETRIC(SFLOW_M_cpu_intr, "cpu_intr", "", GANGLIA_SLOPE_BOTH, "%.2f", "cpu", NULL, "CPU Interrupts" )
SFLOW_GMETRIC(SFLOW_M_cpu_sintr, "cpu_sintr", "", GANGLIA_SLOPE_BOTH, "%.2f", "cpu", NULL, "CPU Soft Interrupts" )
SFLOW_GMETRIC(SFLOW_M_mem_total, "mem_total", "KB", GANGLIA_SLOPE_ZERO, "%.0f", "memory", NULL, "Memory Total" )
SFLOW_GMETRIC(SFLOW_M_mem_free, "mem_free", "KB", GANGLIA_SLOPE_BOTH, "%.0f", "memory", NULL, "Free Memory" )
SFLOW_GMETRIC(SFLOW_M_mem_shared, "mem_shared", "KB", GANGLIA_SLOPE_BOTH, "%.0f", "memory", NULL, "Shared Memory" )
SFLOW_GMETRIC(SFLOW_M_mem_buffers, "mem_buffers", "KB", GANGLIA_SLOPE_BOTH, "%.0f", "memory", NULL, "Memory Buffers" )
SFLOW_GMETRIC(SFLOW_M_mem_cached, "mem_cached", "KB", GANGLIA_SLOPE_BOTH, "%.0f", "memory", NULL, "Cached Memory" )
SFLOW_GMETRIC(SFLOW_M_swap_total, "swap_total", "KB", GANGLIA_SLOPE_ZERO, "%.0f", "memory", NULL, "Swap Space Total" )
SFLOW_GMETRIC(SFLOW_M_swap_free, "swap_free", "KB", GANGLIA_SLOPE_BOTH, "%.0f", "memory", NULL, "Free Swap Space" )
SFLOW_GMETRIC(SFLOW_M_disk_total, "disk_total", "GB", GANGLIA_SLOPE_BOTH, "%.3f", "disk", NULL, "Total Disk Space" )
SFLOW_GMETRIC(SFLOW_M_disk_free, "disk_free", "GB", GANGLIA_SLOPE_BOTH, "%.3f", "disk", NULL, "Free Disk Space" )
SFLOW_GMETRIC(SFLOW_M_part_max_used, "part_max_used", "%", GANGLIA_SLOPE_BOTH, "%.2f", "disk", NULL, "Maximum Disk Space Used" )
SFLOW_GMETRIC(SFLOW_M_bytes_in, "bytes_in", "bytes/sec", GANGLIA_SLOPE_BOTH, "%.2f", "network", NULL, "Bytes Received" )
SFLOW_GMETRIC(SFLOW_M_pkts_in, "pkts_in", "packets/sec", GANGLIA_SLOPE_BOTH, "%.2f", "network", NULL, "Packets Received" )
SFLOW_GMETRIC(SFLOW_M_bytes_out, "bytes_out", "bytes/sec", GANGLIA_SLOPE_BOTH, "%.2f", "network", NULL, "Bytes Sent" )
SFLOW_GMETRIC(SFLOW_M_pkts_out, "pkts_out", "packets/sec", GANGLIA_SLOPE_BOTH, "%.2f", "network", NULL, "Packets Sent" )
