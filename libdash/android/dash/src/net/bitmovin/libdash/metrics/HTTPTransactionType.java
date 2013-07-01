package net.bitmovin.libdash.metrics;

public enum HTTPTransactionType {
    MPD,
    XLinkEpansion,
    InitializationSegment,
    IndexSegment,
    MediaSegment,
    BitstreamSwitchingSegment,
    Other
}
