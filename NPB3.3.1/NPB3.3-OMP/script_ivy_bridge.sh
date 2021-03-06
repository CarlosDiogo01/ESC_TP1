#!/bin/sh

cd ~/ESC_TP1/NPB3.3.1/NPB3.3-OMP/

read -r node_info<$PBS_NODEFILE

cd Results/intel_2013_1_117

mkdir $node_info

cd ../../bin

max_ppn=32
sample_size=5

for file in *.x
do
	for num_threads in 1 2 4 8 10 12 16 24 32 34 
	do
		echo "Running ( $num_threads threads parallel code)"
		export OMP_NUM_THREADS=$num_threads
		cd ../Results/intel_2013_1_117/$node_info
		/home/a59905/dstat -cdm --output $file.csv >> /dev/null &
		cd ../../../bin
		./$file >> ../Results/intel_2013_1_117/$node_info/"$file.txt"
		kill $!
		sleep 2
	done
done
echo "Done.."
