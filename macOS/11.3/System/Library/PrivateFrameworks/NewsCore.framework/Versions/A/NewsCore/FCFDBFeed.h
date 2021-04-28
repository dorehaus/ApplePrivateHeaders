/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, NSOrderedSet;

@interface FCFDBFeed : NSManagedObject

@property (nonatomic,retain) NSString * feedID; 
@property (assign,nonatomic) NSNumber * lookupID; 
@property (nonatomic,retain) NSDate * refreshDate; 
@property (assign,nonatomic) unsigned long long refreshedToOrder; 
@property (nonatomic,retain) NSOrderedSet * segments; 
-(void)awakeFromFetch;
-(id)prune;
-(void)willTurnIntoFault;
-(void)willAccessFeedRange:(id)arg1 ;
-(id)contiguousRangeInRange:(id)arg1 ;
-(void)insertFeedItems:(id)arg1 ckCursor:(id)arg2 plausibleRange:(id)arg3 segmentEntity:(id)arg4 itemEntity:(id)arg5 itemIndexEntity:(id)arg6 moc:(id)arg7 indexFeatures:(char)arg8 ;
-(id)contiguousSegmentsInFeedRange:(id)arg1 ;
-(id)firstSegmentFollowingFeedRange:(id)arg1 ;
-(void)_visitContiguousSegmentsInRange:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)insertSegment:(id)arg1 ;
-(void)enumerateGapsWithBlock:(/*^block*/id)arg1 ;
@end

