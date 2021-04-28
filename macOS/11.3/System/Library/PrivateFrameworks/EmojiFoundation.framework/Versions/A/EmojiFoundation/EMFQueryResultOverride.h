/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/Versions/A/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface EMFQueryResultOverride : NSObject {

	unsigned long long _overrideSearchType;
	unsigned long long _overrideBehavior;
	NSArray* _results;

}

@property (nonatomic,readonly) NSArray * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) unsigned long long overrideSearchType;              //@synthesize overrideSearchType=_overrideSearchType - In the implementation block
@property (nonatomic,readonly) unsigned long long overrideBehavior;                //@synthesize overrideBehavior=_overrideBehavior - In the implementation block
-(id)description;
-(NSArray *)results;
-(unsigned long long)overrideBehavior;
-(unsigned long long)overrideSearchType;
-(id)initWithOverridesArray:(id)arg1 searchType:(unsigned long long)arg2 behavior:(unsigned long long)arg3 ;
@end

