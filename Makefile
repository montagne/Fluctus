
.PHONY : install

all :clean interp3cuda interp2cuda

interp3cuda:
	@$(MAKE) -s -C Interp3cuda

interp2cuda:
	@$(MAKE) -s -C Interp2cuda

interp3cuda_clean:
	@$(MAKE) -s -C Interp3cuda clean

interp2cuda_clean:
	@$(MAKE) -s -C Interp2cuda clean

clean : interp2cuda_clean interp3cuda_clean
	@rm -rf bin

install : all
	@echo "Installing ..."
	@mkdir -p bin
	@cp Interp2cuda/interp2cuda.mexa64 bin/
	@cp Interp3cuda/interp3cuda.mexa64 bin/