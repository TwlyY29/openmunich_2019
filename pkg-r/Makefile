PACKAGE=fancypackage

TARGET=$(addsuffix .tar.gz,$(PACKAGE))

install: $(TARGET)
	Rscript helpers/install.R

$(PACKAGE): $(TARGET)

%.tar.gz:
	cd $(PACKAGE) && Rscript --vanilla ../helpers/compileAttributes.R && Rscript --vanilla ../helpers/compileAttributes.R && cd - && R CMD build $(PACKAGE)

init:
	Rscript --vanilla helpers/init_package.R
