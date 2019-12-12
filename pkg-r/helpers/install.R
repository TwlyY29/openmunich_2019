if("fancypackage" %in% rownames(installed.packages()))
  remove.packages("fancypackage")
install.packages("fancypackage_1.0.tar.gz", repos = NULL, type="source")
