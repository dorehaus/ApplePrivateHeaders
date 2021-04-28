/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedScalar : MDLAnimatedValue
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(float)floatAtTime:(double)arg1 ;
-(double)doubleAtTime:(double)arg1 ;
-(VtValue*)defaultVtValue;
-(void)setFloat:(float)arg1 atTime:(double)arg2 ;
-(void)setDouble:(double)arg1 atTime:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)resetWithFloatArray:(const float*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDoubleArray:(const double*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end

