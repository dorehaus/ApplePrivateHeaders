/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/Versions/A/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSArray;

@interface WBSMutableOrderedSet : NSObject {

	NSMutableOrderedSet* _mutableOrderedSet;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) NSArray * array; 
-(id)init;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(NSArray *)array;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(void)_moveObjectAtIndexToLast:(unsigned long long)arg1 ;
-(id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1 ;
-(void)markObjectAsRecentlyUsed:(id)arg1 ;
@end
