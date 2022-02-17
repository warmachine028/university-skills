# - dbg  -> Generates debugging information
vsim testbench +access+r # [+access+r Enables read access to design objects (eg for waveform dumping)]
vcd file dump.vcd  # Command specifies the filename and state mapping for the VCD file created by a vcd add command.
vcd add -r sim:/*  # Command adds all files & folders inside sim folder to VCD file. (-r flag: recursively)
run -all   # Runs all files
