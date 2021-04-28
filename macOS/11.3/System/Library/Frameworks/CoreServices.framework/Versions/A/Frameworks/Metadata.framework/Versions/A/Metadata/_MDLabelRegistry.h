/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Metadata/Metadata-Structs.h>
@class NSObject;

@interface _MDLabelRegistry : NSObject {

	long long _generation;
	CFDictionaryRef _labelsByID;
	CFDictionaryRef _labelsByUUID;
	CFDictionaryRef _labelKinds;
	CFNotificationCenterRef _localCenter;
	NSObject*<OS_dispatch_queue> _localQueue;

}
-(void)dealloc;
-(id)init;
-(char)synchronize;
-(CFArrayRef)copyLabelsWithKind:(CFStringRef)arg1 ;
-(id)syncWithLabelData:(CFDataRef)arg1 isFullSync:(char)arg2 ;
-(id)labelWithUUID:(CFUUIDRef)arg1 ;
-(void)internLabel:(id)arg1 ;
-(void)postNotification:(CFStringRef)arg1 forLabel:(id)arg2 ;
-(void)removeLabel:(id)arg1 ;
-(void)processLabelData:(CFDataRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CFArrayRef)copyLabelKinds;
-(void)enumerateLabelsMatchingExpression:(CFStringRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)labelWithID:(CFStringRef)arg1 ;
-(id)labelWithName:(CFStringRef)arg1 kind:(CFStringRef)arg2 ;
@end

