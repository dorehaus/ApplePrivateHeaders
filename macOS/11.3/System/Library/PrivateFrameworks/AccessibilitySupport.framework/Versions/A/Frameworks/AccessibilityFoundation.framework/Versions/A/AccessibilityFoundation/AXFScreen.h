/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AXFScreen : NSObject <NSCopying> {

	int _depth;
	double _backingScaleFactor;
	CGPoint _center;
	CGRect _frame;
	CGRect _visibleFrame;

}

@property (nonatomic,readonly) int depth;                              //@synthesize depth=_depth - In the implementation block
@property (nonatomic,readonly) CGPoint center;                         //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) CGRect frame;                           //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) CGRect visibleFrame;                    //@synthesize visibleFrame=_visibleFrame - In the implementation block
@property (nonatomic,readonly) double backingScaleFactor;              //@synthesize backingScaleFactor=_backingScaleFactor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 visibleFrame:(CGRect)arg2 depth:(int)arg3 backingScaleFactor:(double)arg4 ;
-(id)initWithNSScreen:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)depth;
-(CGRect)visibleFrame;
-(CGRect)frame;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)backingScaleFactor;
-(CGPoint)center;
-(CGRect)backingAlignedRect:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(CGRect)convertRectToBacking:(CGRect)arg1 ;
-(CGRect)convertRectFromBacking:(CGRect)arg1 ;
-(CGRect)centerRect:(CGRect)arg1 ;
@end
