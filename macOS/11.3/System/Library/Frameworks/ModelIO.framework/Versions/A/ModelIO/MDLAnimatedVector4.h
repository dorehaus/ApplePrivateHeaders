/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector4 : MDLAnimatedValue
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setFloat4:(double)arg1 ;
-(void)setDouble4:(double)arg1 ;
-(2)float4AtTime:(double)arg1 ;
-(2)double4AtTime:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(void)resetWithFloat4Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDouble4Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)getFloat4Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble4Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
@end

