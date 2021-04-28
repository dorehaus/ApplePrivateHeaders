/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PA2DBufferBacking <NSCopying,NSObject>
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@required
-(unsigned long long)width;
-(unsigned long long)height;
-(int)format;
-(void)setColorSpace:(CGColorSpaceRef)arg1;
-(CGColorSpaceRef)colorSpace;
-(unsigned long long)tileCount;
-(void)getPixelsForROI:(PFIntRect_st)arg1 destPtr:(void*)arg2 destPtrRowBytes:(long long)arg3;
-(void)forEachImmutableTileInROI:(PFIntRect_st)arg1 processor:(/*^block*/id)arg2;
-(void)forEachMutableTileInROI:(PFIntRect_st)arg1 processor:(/*^block*/id)arg2;
-(void)setPixelsForROI:(PFIntRect_st)arg1 srcPtr:(const void*)arg2 srcPtrRowBytes:(long long)arg3;
-(PFIntRect_st*)tileBoundsAtIndex:(unsigned long long)arg1;

@end

