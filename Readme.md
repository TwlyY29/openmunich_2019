# Building Packages for R and Python

This is the repository for the tutorial I gave at the [OpenMunich 2019](https://openmunich.eu/).

It showcases how to create packages for R and Python that share a common codebase: core functionality is written in `C++`, [Rcpp](http://www.rcpp.org/) is used to create bindings for `R`, and [Boost.Python](https://www.boost.org/doc/libs/1_65_1/libs/python/doc/html/index.html) is used to create bindings for `python`.

## How to use this tutorial
Checkout the releases in this git to see a step-by-step tutorial.

## More information
Slides for the talk are [available in this repo](openmunich_2019.pdf) as well.

## Requirements
Code was tested on Ubuntu 18.04.1 LTS 64 Bit, Boost 1.65.1 & R 3.6.1. Since there is no bleeding-edge-functionality used, it should work with earlier versions of Boost and R just as well.
```bash
sudo apt install build-essential libboost1.65-all-dev r-base
Rscript --slave --no-save --no-restore-history \
  -e 'install.packages(c("Rcpp", "RUnit"), dependencies = T)'
```