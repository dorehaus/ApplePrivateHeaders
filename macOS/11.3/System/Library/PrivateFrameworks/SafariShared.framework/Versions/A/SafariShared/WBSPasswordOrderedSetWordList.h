/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPasswordWordList.h>

@class NSOrderedSet;

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList {

	NSOrderedSet* _words;
	char _sensitive;

}

@property (getter=isSensitive,nonatomic,readonly) char sensitive;              //@synthesize sensitive=_sensitive - In the implementation block
-(char)isSensitive;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 isSensitive:(char)arg2 orderedWordsArray:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 isSensitive:(char)arg2 orderedWords:(id)arg3 ;
@end

