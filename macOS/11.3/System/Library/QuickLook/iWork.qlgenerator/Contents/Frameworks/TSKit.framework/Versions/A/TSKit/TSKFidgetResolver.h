/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSKFidgetResolver : NSObject {

	double _fidgetThreshold;
	id _values[10];
	double _times[10];
	unsigned long long _head;

}

@property (assign,nonatomic) double fidgetThreshold;              //@synthesize fidgetThreshold=_fidgetThreshold - In the implementation block
@property (nonatomic,readonly) id nonFidgetValue; 
-(id)init;
-(unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1 ;
-(void)pushValue:(id)arg1 withTime:(double)arg2 ;
-(void)p_advanceHead;
-(id)nonFidgetValue;
-(void)pushValue:(id)arg1 ;
-(double)fidgetThreshold;
-(void)setFidgetThreshold:(double)arg1 ;
@end

