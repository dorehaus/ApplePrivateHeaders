/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CATiledLayer : CALayer

@property (assign) CGColorRef fillColor; 
@property (assign) double maximumTileScale; 
@property (getter=isDrawingEnabled) char drawingEnabled; 
@property (__weak) id<CATiledLayerDelegate><CALayerDelegate> delegate; 
@property (assign) unsigned long long levelsOfDetail; 
@property (assign) unsigned long long levelsOfDetailBias; 
@property (assign) CGSize tileSize; 
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(unsigned)prefetchedTiles;
+(char)shouldDrawOnMainThread;
+(id)defaultValueForKey:(id)arg1 ;
+(double)fadeDuration;
+(id)CA_attributes;
-(void)_colorSpaceDidChange;
-(unsigned long long)levelsOfDetailBias;
-(char)_canDisplayConcurrently;
-(double)maximumTileScale;
-(char)canDrawRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(char)isDrawingEnabled;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(void)displayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)setMaximumTileScale:(double)arg1 ;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)_dealloc;
-(CGColorRef)fillColor;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_display;
-(void)invalidateContents;
-(CGSize)tileSize;
-(void)setTileSize:(CGSize)arg1 ;
-(void)setLevelsOfDetailBias:(unsigned long long)arg1 ;
-(void)setLevelsOfDetail:(unsigned long long)arg1 ;
-(unsigned long long)levelsOfDetail;
-(void)setDrawingEnabled:(char)arg1 ;
-(void)setUnsafeUnretainedDelegate:(id)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
@end
