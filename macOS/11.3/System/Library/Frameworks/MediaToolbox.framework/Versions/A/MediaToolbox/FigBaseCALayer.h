/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/Versions/A/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/FigPiPableLayer.h>

@interface FigBaseCALayer : CALayer <FigPiPableLayer> {

	char _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) char preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(float)getDisplayScale;
-(id)init;
-(void)addSublayer:(id)arg1 ;
-(void)removeFromSuperlayer;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)setSublayers:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(char)preventsChangesToSublayerHierarchy;
-(void)setPreventsChangesToSublayerHierarchy:(char)arg1 ;
@end

