/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class MPSectionedIdentifierList, NSMutableArray, MPSectionedIdentifierListEntry;

@interface MPSectionedIdentifierListEnumerator : NSEnumerator {

	MPSectionedIdentifierList* _sectionedIdentifierList;
	unsigned long long _options;
	NSMutableArray* _contexts;
	NSMutableArray* _nextEmittableEnumerationResults;
	MPSectionedIdentifierListEntry* _endEntry;

}

@property (assign,nonatomic) unsigned long long options;                                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * contexts;                                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMutableArray * nextEmittableEnumerationResults;                   //@synthesize nextEmittableEnumerationResults=_nextEmittableEnumerationResults - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListEntry * endEntry;                          //@synthesize endEntry=_endEntry - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
-(id)nextObject;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(NSMutableArray *)contexts;
-(void)setContexts:(NSMutableArray *)arg1 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startEntry:(id)arg3 endEntry:(id)arg4 withExclusiveAccessToken:(id)arg5 ;
-(id)nextObjectWithExclusiveAccessToken:(id)arg1 ;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(NSMutableArray *)nextEmittableEnumerationResults;
-(void)setNextEmittableEnumerationResults:(NSMutableArray *)arg1 ;
-(MPSectionedIdentifierListEntry *)endEntry;
-(void)setEndEntry:(MPSectionedIdentifierListEntry *)arg1 ;
@end

