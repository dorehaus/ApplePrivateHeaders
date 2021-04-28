/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVMultiMoveWithFallbackTaskGroup.h>

@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup {

	NSDictionary* _sourceEntityScheduleTags;
	char _isAutoScheduleSupported;
	NSMutableDictionary* _destinationEntityScheduleTags;

}

@property (nonatomic,retain) NSDictionary * sourceEntityScheduleTags;                          //@synthesize sourceEntityScheduleTags=_sourceEntityScheduleTags - In the implementation block
@property (assign,nonatomic) char isAutoScheduleSupported;                                     //@synthesize isAutoScheduleSupported=_isAutoScheduleSupported - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * destinationEntityScheduleTags;              //@synthesize destinationEntityScheduleTags=_destinationEntityScheduleTags - In the implementation block
-(NSMutableDictionary *)destinationEntityScheduleTags;
-(char)isAutoScheduleSupported;
-(void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4 ;
-(id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(char)arg3 useFallback:(char)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(char)arg11 ;
-(void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSDictionary *)sourceEntityScheduleTags;
-(void)setSourceEntityScheduleTags:(NSDictionary *)arg1 ;
-(void)setIsAutoScheduleSupported:(char)arg1 ;
-(void)setDestinationEntityScheduleTags:(NSMutableDictionary *)arg1 ;
@end

