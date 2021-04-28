/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSSet;

@interface WBSCacheRetainReleasePolicy : NSObject {

	/*^block*/id _purgeBlock;
	NSCountedSet* _entryRetainCounts;
	NSCountedSet* _negativeEntryRetainCounts;

}

@property (nonatomic,copy,readonly) NSSet * retainedKeyStrings; 
-(id)initWithPurgeBlock:(/*^block*/id)arg1 ;
-(void)retainEntriesForKeyStrings:(id)arg1 ;
-(void)releaseEntriesForKeyStrings:(id)arg1 ;
-(void)retainEntryForKeyString:(id)arg1 ;
-(void)releaseEntryForKeyString:(id)arg1 ;
-(NSSet *)retainedKeyStrings;
-(void)_retainEntryForKeyString:(id)arg1 ;
-(void)_releaseEntryForKeyString:(id)arg1 ;
-(void)retainEntryWithKeyStringProvider:(/*^block*/id)arg1 ;
-(void)releaseEntryWithKeyStringProvider:(/*^block*/id)arg1 ;
-(char)isEntryRetainedForKeyString:(id)arg1 ;
@end

