/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIRecording.framework/Versions/A/UIRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __AXUIElement* AXUIElementRef;

typedef struct _NSZone* NSZoneRef;

typedef struct ProcessSerialNumber {
	unsigned highLongOfPSN;
	unsigned lowLongOfPSN;
} ProcessSerialNumber;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct _UIRRecordDelegateRespondsTo {
	unsigned uirRecord_willSendEvent_associatedWithEvent : 1;
	unsigned uirRecord_didStartPlayback : 1;
	unsigned uirRecord_didStopPlaybackWithErrorInfo : 1;
	unsigned reserved : 29;
} UIRRecordDelegateRespondsTo;

typedef struct __CGEvent* CGEventRef;

typedef struct __CGEventSource* CGEventSourceRef;

typedef struct _UIRRemoteRecorderDelegateRespondTo {
	unsigned uirRemoteRecorderWillStartRecording : 1;
	unsigned uirRemoteRecorderWillStopRecording : 1;
	unsigned uirRemoteRecorderDidStartRecording : 1;
	unsigned uirRemoteRecorderDidStopRecording_withRecord : 1;
	unsigned uirRemoteRecorder_didError : 1;
	unsigned reserved : 27;
} UIRRemoteRecorderDelegateRespondTo;

typedef struct __CFString* CFStringRef;

typedef struct __LSASN* LSASNRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct _UIRLocalRecorderDelegateRespondsTo {
	unsigned uirLocalRecorder_willRecordEvent : 1;
	unsigned uirLocalRecorder_didRecordEvent : 1;
	unsigned uirLocalRecorder_didStopRecording : 1;
	unsigned uirLocalRecorder_didStartRecording : 1;
	unsigned reserved : 28;
} UIRLocalRecorderDelegateRespondsTo;

typedef struct __CGEventTapProxy* CGEventTapProxyRef;
