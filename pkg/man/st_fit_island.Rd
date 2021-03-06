% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sample_dist_island.R
\name{st_fit_island}
\alias{st_fit_island}
\title{Fit the sampling distribution of genotypes to sources using the assymmetric island model.}
\usage{
st_fit_island(
  formula,
  sequences,
  non_primary = "Human",
  samples = 100,
  burnin = 10,
  thin = 100,
  priors = list(migration = 1, mutation = c(1, 1), recombination = c(1, 1)),
  control = list(mutation = "source", recombination = "source"),
  data
)
}
\arguments{
\item{formula}{A formula of the form Source ~ Genotype}

\item{sequences}{A formula of the form ~ASP + GLN + GLT specifying columns for the allelic profile of each type}

\item{non_primary}{one or more sources that should be considered 'output' sources. No genotype distribution is computed for these,
but P(ST | source) will be computed for these STs in addition to those observed on other sources.}

\item{samples}{the number of samples required from the posterior after burnin. Defaults to 100.}

\item{burnin}{the number of samples to discard for burnin. Defaults to 10.}

\item{thin}{the number of iterations per sample taken. Defaults to 100.}

\item{priors}{- a list of priors for the fit. Defaults to 1,c(1,1),c(1,1).}

\item{control}{- a list of model control information. Defaults to mutation="source", recombination="source". Specify "constant" for
a single probability across all sources.}

\item{data}{optional data frame from which to take variables in \code{formula} and \code{sequence}.}
}
\value{
an object of class island which derives from sampling_dist.
}
\description{
This routine uses the asymmetric island model (See \href{http://dx.doi.org/10.1371/journal.pgen.1000203}{D. Wilson et al 2008}) to estimate the sampling distribution
of genotypes on each source. Once estimated, the sampling distribution may be used with
\code{\link{attribution}} to attribute cases to sources based on genotype data in addition to
other covariates on the cases.
}
\seealso{
\code{\link{st_fit}}, \code{\link{print.sample_dist}}, \code{\link{plot.sample_dist}}, \code{\link{summary.sample_dist}}
}
