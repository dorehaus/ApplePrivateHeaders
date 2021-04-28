/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <PAImaging/PAImageTile.h>

@class PA2DBuffer, NSString;

@interface PABufferImageBackingTile : NSObject <PAImageTile> {

	PA2DBuffer* _buffer;
	unsigned long long _tileIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)index;
-(CGRect)frame;
-(CGRect)bounds;
-(PFIntRect_st)_tileBounds;
-(char)readBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithBuffer:(id)arg1 tileIndex:(unsigned long long)arg2 ;
-(char)readTextureRegion:(id)arg1 withContext:(id)arg2 block:(/*^block*/id)arg3 ;
@end

