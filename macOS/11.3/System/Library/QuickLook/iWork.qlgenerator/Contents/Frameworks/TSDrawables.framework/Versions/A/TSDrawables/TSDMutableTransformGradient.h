/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDTransformGradient.h>
#import <TSDrawables/TSDGradientStopContainer.h>

@class NSArray, TSUColor, NSString;

@interface TSDMutableTransformGradient : TSDTransformGradient <TSDGradientStopContainer>

@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
@property (assign,nonatomic) CGSize baseNaturalSize; 
@property (assign,nonatomic) unsigned long long gradientType; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) char isAdvancedGradient; 
@property (nonatomic,retain) NSArray * gradientStops; 
@property (nonatomic,retain) TSUColor * firstColor; 
@property (nonatomic,retain) TSUColor * lastColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setGradientType:(unsigned long long)arg1 ;
-(void)setGradientStops:(NSArray *)arg1 ;
-(void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2 ;
-(void)insertGradientStop:(id)arg1 ;
-(id)insertStopAtFraction:(double)arg1 ;
-(void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2 ;
-(id)insertStopAtFraction:(double)arg1 withColor:(id)arg2 ;
-(void)removeStop:(id)arg1 ;
-(id)removeStopAtIndex:(unsigned long long)arg1 ;
-(void)reverseStopOrder;
-(void)evenlyDistributeStops;
-(void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2 ;
-(void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2 ;
-(void)setFirstColor:(TSUColor *)arg1 ;
-(void)setLastColor:(TSUColor *)arg1 ;
-(void)setIsAdvancedGradient:(char)arg1 ;
-(void)setGradientAngleInDegrees:(double)arg1 ;
-(void)setBaseNaturalSize:(CGSize)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 inShapeWithNaturalSize:(CGSize)arg2 ;
-(void)setEndPoint:(CGPoint)arg1 inShapeWithNaturalSize:(CGSize)arg2 ;
-(void)upgradeIfNecessaryWithBaseNaturalSize:(CGSize)arg1 ;
@end

