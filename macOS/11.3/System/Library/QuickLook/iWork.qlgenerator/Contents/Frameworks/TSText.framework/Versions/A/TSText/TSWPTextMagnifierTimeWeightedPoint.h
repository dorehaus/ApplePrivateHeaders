/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSText/TSText-Structs.h>
@interface TSWPTextMagnifierTimeWeightedPoint : NSObject {

	long long m_index;
	SCD_Struct_TS66 m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(void)addPoint:(CGPoint)arg1 ;
-(void)clearHistory;
-(CGPoint)weightedPoint;
-(char)historyCovers:(double)arg1 ;
-(double)distanceCoveredInInterval:(double)arg1 ;
-(CGSize)displacementInInterval:(double)arg1 ;
-(double)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
@end
