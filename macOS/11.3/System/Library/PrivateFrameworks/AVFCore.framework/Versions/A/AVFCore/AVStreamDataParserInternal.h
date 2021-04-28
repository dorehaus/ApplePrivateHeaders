/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVStreamDataParserOutputHandling, OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSObject, NSError, AVAsset, NSMutableArray, AVWeakReference, AVContentKeySession, AVContentKeyRequest, NSMutableDictionary;

@interface AVStreamDataParserInternal : NSObject {

	id<AVStreamDataParserOutputHandling> _delegate;
	NSObject*<OS_dispatch_queue> _threadSafetyQ;
	long long _status;
	NSError* _error;
	AVAsset* _asset;
	NSMutableArray* _trackIDsNotProvidingMedia;
	OpaqueFigManifoldRef _figManifold;
	unsigned long long _typeIdOfInitialFigManifold;
	OpaqueCMBlockBufferRef _accumulatedInitializationData;
	char _encounteredStreamDiscontinuity;
	AVWeakReference* _legacyStreamSession;
	AVContentKeySession* _defaultContentKeySession;
	AVWeakReference* _contentKeySession;
	AVContentKeyRequest* _sessionKeyRequest;
	char _startedUsingInternalContentKeySession;
	int _currentTrackID;
	NSMutableDictionary* _tracksBecomingReadyByTrackID;
	NSMutableArray* _samplesBeforeReady;
	unsigned long long _samplesBeforeReadyTotalSize;
	SCD_Struct_CM3 _samplesBeforeReadyTotalDuration;
	NSMutableDictionary* _trackDecryptorsByTrackID;
	NSMutableDictionary* _trackFormatDescriptionsByTrackID;

}
@end

