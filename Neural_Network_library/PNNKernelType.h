#pragma once
enum PNNKernelType
{
    /// <summary>
    /// A Gaussian curved kernel. The usual choice.
    /// </summary>
    ///
    Gaussian,

    /// <summary>
    /// A steep kernel.
    /// </summary>
    ///
    Reciprocal
}