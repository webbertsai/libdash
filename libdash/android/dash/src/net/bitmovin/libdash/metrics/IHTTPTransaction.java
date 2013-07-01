package net.bitmovin.libdash.metrics;

import java.util.Vector;

public interface IHTTPTransaction {
	int                     		TCPId                   ();
    HTTPTransactionType     		Type                    ();
    String                          OriginalUrl             ();
    String                          ActualUrl               ();
    String                          Range                   ();
    String                          RequestSentTime         ();
    String                          ResponseReceivedTime    ();
    short                           ResponseCode            ();
    long                            Interval                ();
    Vector<IThroughputMeasurement>	ThroughputTrace         ();
    String                          HTTPHeader              ();
}
