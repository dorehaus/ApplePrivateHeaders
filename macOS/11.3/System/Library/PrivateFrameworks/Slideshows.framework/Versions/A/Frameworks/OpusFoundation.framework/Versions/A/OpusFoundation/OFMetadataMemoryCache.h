/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusFoundation.framework/Versions/A/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OFLRUCache;

@interface OFMetadataMemoryCache : NSObject {

	OFLRUCache* _memoryCache;
	char _allowCleanupOnMemoryWarnings;
	char _allowCleanupOnEnteringBackground;
	unsigned long long _hasChanges;

}

@property (assign,nonatomic) char allowCleanupOnMemoryWarnings;                  //@synthesize allowCleanupOnMemoryWarnings=_allowCleanupOnMemoryWarnings - In the implementation block
@property (assign,nonatomic) char allowCleanupOnEnteringBackground;              //@synthesize allowCleanupOnEnteringBackground=_allowCleanupOnEnteringBackground - In the implementation block
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)hasChanges;
-(void)resetChanges;
-(char)writeToURL:(id)arg1 ;
-(char)loadFromURL:(id)arg1 ;
-(id)attributesForIdentifier:(id)arg1 ;
-(void)_didResignActiveNotification;
-(void)_willTerminateNotification;
-(id)_metadataForIdentifier:(id)arg1 ;
-(void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setNumberOfMemorySlots:(unsigned long long)arg1 ;
-(id)valueForKey:(id)arg1 andIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3 ;
-(void)setAttributes:(id)arg1 forIdentifier:(id)arg2 ;
-(char)allowCleanupOnMemoryWarnings;
-(void)setAllowCleanupOnMemoryWarnings:(char)arg1 ;
-(char)allowCleanupOnEnteringBackground;
-(void)setAllowCleanupOnEnteringBackground:(char)arg1 ;
-(unsigned long long)numberOfMemorySlots;
-(unsigned long long)numberOfUsedMemorySlots;
-(void)invalidateForIdentifier:(id)arg1 ;
@end
