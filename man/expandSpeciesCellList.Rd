% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/expandSpeciesCellList.R
\name{expandSpeciesCellList}
\alias{expandSpeciesCellList}
\title{Expand species list}
\usage{
expandSpeciesCellList(x)
}
\arguments{
\item{x}{object of class \code{epmGrid}}
}
\value{
list of species for each cell.
}
\description{
The epmGrid object contains an accounting of species per
cell in a condensed format. This function returns a complete list of species
per cell.
}
\details{
Function to expand condensed species list to full set of cells
}
\examples{
tamiasEPM
head(expandSpeciesCellList(tamiasEPM))

}
\author{
Pascal Title
}
