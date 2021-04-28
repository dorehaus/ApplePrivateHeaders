/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReferencingDelegateStorage, AVWeakReference, NSURL, NSData, AVContentKeyReportGroup, NSObject, NSHashTable, NSString, NSMutableDictionary, NSMutableArray, NSMapTable;

@interface AVContentKeySessionInternal : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVWeakReference* _weakReference;
	NSURL* _storageURL;
	NSData* _appIdentifier;
	char _isExpired;
	char _internal;
	AVContentKeyReportGroup* _defaultContentKeyGroup;
	NSObject*<OS_dispatch_queue> _threadSafetyQ;
	NSHashTable* _contentKeyRecipients;
	NSString* _keySystem;
	NSMutableDictionary* keyRequestsByRequestID;
	NSMutableArray* _contentKeyGroups;
	NSMapTable* cryptorUUIDToContentKeyRequestMap;
	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}
@end

