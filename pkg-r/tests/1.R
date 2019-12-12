test.load <- function(){
  library(fancypackage)
}

test.increment <- function(){
  library(fancypackage)
  n <- 3
  inc <- fancy_increment(n)
  checkTrue(inc >= n+1 & inc <= n+10)
}

test.default_constructor <- function(){
  library(fancypackage)
  fo <- new(FancyObject)
  n <- 3
  inc <- fo$random_increment(n)
  checkTrue(inc >= n+1 & inc <= n+10)
}

test.custom_constructor <- function(){
  library(fancypackage)
  fo <- new(FancyObject,2,5)
  n <- 3
  inc <- fo$random_increment(n)
  checkTrue(inc >= n+2 & inc <= n+5)
}




