test.load <- function(){
  library(fancypackage)
}

test.increment <- function(){
  library(fancypackage)
  n <- 3
  inc <- fancy_increment(n)
  checkTrue(inc >= n+1 & inc <= n+10)
}





