library(RUnit)

test.suite <- defineTestSuite("fancypackage tests",
                              dirs = file.path("tests"),
                              testFileRegexp = '^\\d+\\.R$')

test.result <- runTestSuite(test.suite)
 
printTextProtocol(test.result)
