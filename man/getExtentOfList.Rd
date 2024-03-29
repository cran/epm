% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/getExtentOfList.R
\name{getExtentOfList}
\alias{getExtentOfList}
\title{Get extent of list}
\usage{
getExtentOfList(shapes)
}
\arguments{
\item{shapes}{a list of SpatialPolygons or simple features}
}
\value{
An object of class \code{bbox}.
}
\description{
Given a list of SpatialPolygons, return an extent
object that encompasses all items.
}
\examples{
getExtentOfList(tamiasPolyList)

}
\author{
Pascal Title
}
