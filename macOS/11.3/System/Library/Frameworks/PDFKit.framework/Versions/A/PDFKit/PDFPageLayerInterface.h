/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFPageLayerInterface <NSObject>
@required
-(BOOL)isVisible;
-(id)page;
-(void)clearTiles;
-(long long)displayBox;
-(void)willStartLiveResize;
-(id)renderingProperties;
-(id)geometryInterface;
-(void)removePageLayerEffectForID:(id)arg1;
-(void)updatePageLayerEffectForID:(id)arg1;
-(void)addPageLayerEffect:(id)arg1;
-(void)setEnableTileUpdates:(BOOL)arg1;
-(void)setNeedsTilesUpdate;
-(unsigned long long)visibilityDelegateIndex;
-(id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
-(void)updatePageLayerEffects;
-(void)willEndStartLiveResize;
-(id)pageLayerEffectForID:(id)arg1;
-(CGAffineTransform*)layerEffectTransform;
-(void)scalePageLayerEffects:(double)arg1;
-(BOOL)enablesTileUpdates;
-(void)forceTileUpdate;
-(void)saveOriginalTileLayout;
-(void)restoreOriginalTileLayout;
-(void)applyTileLayoutScale:(double)arg1;
-(void)setVisibilityDelegateIndex:(unsigned long long)arg1;

@end
