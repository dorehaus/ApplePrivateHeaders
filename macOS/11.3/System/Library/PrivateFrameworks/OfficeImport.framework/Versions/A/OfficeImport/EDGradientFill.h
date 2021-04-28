/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFill.h>

@class NSMutableDictionary;

@interface EDGradientFill : EDFill {

	int mType;
	NSMutableDictionary* mStops;
	double mDegree;
	CGRect mFocusRect;

}
+(id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
+(id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithResources:(id)arg1 ;
-(id)stops;
-(void)setStops:(id)arg1 ;
-(void)setStopColor:(id)arg1 atPosition:(id)arg2 ;
-(char)isEqualToGradientFill:(id)arg1 ;
-(double)degree;
-(CGRect)focusRect;
-(id)colorForStopAtPosition:(id)arg1 ;
-(void)setFocusRect:(CGRect)arg1 ;
-(void)setDegree:(double)arg1 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8 ;
-(id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(CGRect)arg3 stops:(id)arg4 resources:(id)arg5 ;
@end

