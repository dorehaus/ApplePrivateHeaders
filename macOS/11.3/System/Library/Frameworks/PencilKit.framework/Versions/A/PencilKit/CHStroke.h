/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PencilKit.framework/Versions/A/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHStroke <NSObject>
@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long strokeAttributes; 
@property (nonatomic,readonly) double startTimestamp; 
@property (nonatomic,readonly) double endTimestamp; 
@required
-(CGRect)bounds;
-(double)startTimestamp;
-(double)endTimestamp;
-(id)encodedStrokeIdentifier;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(unsigned long long)strokeAttributes;

@end

