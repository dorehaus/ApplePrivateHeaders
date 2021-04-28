/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <PAImaging/PABufferImageBacking.h>

@interface PAPurgeableBufferImageBacking : PABufferImageBacking
-(id)tileAtIndex:(unsigned long long)arg1 ;
-(void)beginAccessRegion:(id)arg1 ;
-(void)endAccessRegion:(id)arg1 ;
-(CGImageRef)newCGImageWithColorSpace:(CGColorSpaceRef)arg1 ;
-(id)mutableTileAtIndex:(unsigned long long)arg1 ;
-(id)initWithPurgeableBuffer:(id)arg1 ;
-(void)_beginAccessRegion:(id)arg1 ;
-(void)_endAccessRegion:(id)arg1 ;
-(id)_purgeableBuffer;
@end

