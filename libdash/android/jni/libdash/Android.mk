LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := dash
LIBDASH_SRCS := network/AbstractChunk.cpp network/DownloadStateManager.cpp helpers/String.cpp helpers/BlockStream.cpp helpers/SyncedBlockStream.cpp helpers/Path.cpp helpers/Time.cpp mpd/Subset.cpp mpd/Descriptor.cpp mpd/SegmentBase.cpp mpd/SegmentList.cpp mpd/AdaptationSet.cpp mpd/ContentComponent.cpp mpd/SegmentTimeline.cpp mpd/Representation.cpp mpd/AbstractMPDElement.cpp mpd/RepresentationBase.cpp mpd/BaseUrl.cpp mpd/SegmentTemplate.cpp mpd/MultipleSegmentBase.cpp mpd/SubRepresentation.cpp mpd/Segment.cpp mpd/Timeline.cpp mpd/SegmentURL.cpp mpd/ProgramInformation.cpp mpd/Metrics.cpp mpd/MPD.cpp mpd/URLType.cpp mpd/Period.cpp mpd/Range.cpp xml/DOMParser.cpp xml/Node.cpp xml/DOMHelper.cpp metrics/HTTPTransaction.cpp metrics/ThroughputMeasurement.cpp metrics/TCPConnection.cpp manager/DASHManager.cpp portable/MultiThreading.cpp
LIBDASH_SRCS += net_bitmovin_libdash_DASHManager.cpp net_bitmovin_libdash_mpd_MPD.cpp net_bitmovin_libdash_mpd_BaseUrl.cpp jni_helper.cpp net_bitmovin_libdash_mpd_AbstractMPDElement.cpp net_bitmovin_libdash_metrics_HTTPTransaction.cpp net_bitmovin_libdash_metrics_TCPConnection.cpp net_bitmovin_libdash_metrics_ThroughputMeasurement.cpp net_bitmovin_libdash_network_AbstractChunk.cpp net_bitmovin_libdash_network_DownloadStateManager.cpp net_bitmovin_libdash_xml_DOMParser.cpp net_bitmovin_libdash_xml_DOMHelper.cpp net_bitmovin_libdash_xml_Node.cpp 

LOCAL_C_INCLUDES += jni/libdash/include/
LOCAL_SRC_FILES := $(addprefix source/,$(LIBDASH_SRCS))
LOCAL_LDLIBS := -lz 

LOCAL_STATIC_LIBRARIES := curl xml2 

include $(BUILD_SHARED_LIBRARY)
