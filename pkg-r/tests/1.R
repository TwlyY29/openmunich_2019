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


test.properties <- function(){
  library(fancypackage)
  fo <- new(FancyObject,2,5)
  fo$min <- 0
  fo$max <- 1
  n <- 3
  inc <- fo$random_increment(n)
  checkTrue(inc >= n & inc <= n+1)
}


test.container <- function() {
  library(fancypackage)
  n <- c(1,2,3)
  inc <- fancy_increment_container(n)
  checkTrue(all(inc>n))
}
