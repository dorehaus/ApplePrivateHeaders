/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@interface TSCH3DValueEnumerator : NSObject {

	ValueEnumerator _imp;

}

@property (nonatomic,readonly) double value; 
-(id)nextObject;
-(char)isValid;
-(double)value;
-(id)enumerator;
-(unsigned long long)index;
-(void)setValue:(double)arg1 ;
-(char)isValidNonZero;
@end
