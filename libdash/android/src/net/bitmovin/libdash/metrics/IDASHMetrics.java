package net.bitmovin.libdash.metrics;

import java.util.ArrayList;


public interface IDASHMetrics {
	ArrayList<ITCPConnection>   GetTCPConnectionList    ();
	ArrayList<IHTTPTransaction> GetHTTPTransactionList  ();
}
