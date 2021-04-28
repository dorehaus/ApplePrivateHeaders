/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MREffect.h>

@class NSMutableSet, NSOperationQueue, MRImage;

@interface MREffectMap : MREffect {

	NSMutableSet* mTiles;
	double mZoomLevel;
	CGPoint mCenter;
	char mIsPanning;
	CGPoint mStartCenter;
	NSOperationQueue* mTileQueue;
	MRImage* mMapImage;

}
-(void)cleanup;
-(CGRect)_currentRect;
-(void)_unload;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 now:(char)arg4 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)isNative3D;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(double)pzrStart:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(double)pzrEnd:(id)arg1 ;
-(double)pzrCancel:(id)arg1 ;
-(void)_setZoom:(double)arg1 ;
-(int)_mapScale;
-(void)_fetchMapTile:(id)arg1 ;
@end

