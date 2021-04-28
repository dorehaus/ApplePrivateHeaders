/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSIndexSet, NSMutableArray;

@interface MRShiftingTilesTimingInfo : NSObject {

	char fallLeft;
	long long fallDirection;
	char isTop;
	NSArray* layouts;
	long long add;
	NSIndexSet* remove;
	long long slideIndex;
	NSMutableArray* additionalTimingInfo;
	double duration;

}

@property (nonatomic,retain) NSArray * layouts; 
@property (nonatomic,retain) NSIndexSet * remove; 
@property (nonatomic,retain) NSArray * additionalTimingInfo; 
-(void)dealloc;
-(id)description;
-(NSArray *)layouts;
-(NSIndexSet *)remove;
-(void)setRemove:(NSIndexSet *)arg1 ;
-(void)setLayouts:(NSArray *)arg1 ;
-(NSArray *)additionalTimingInfo;
-(void)setAdditionalTimingInfo:(NSArray *)arg1 ;
@end

