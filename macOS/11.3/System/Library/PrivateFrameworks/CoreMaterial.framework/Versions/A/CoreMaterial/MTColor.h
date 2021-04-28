/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/Versions/A/CoreMaterial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMaterial/CoreMaterial-Structs.h>
@interface MTColor : NSObject {

	CGColorRef _cachedColor;

}
+(id)blackColor;
+(id)whiteColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)pinkColor;
+(id)colorWithDescription:(id)arg1 ;
-(void)dealloc;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)colorDescription;
-(id)_rgbColor;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
@end

