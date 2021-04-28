/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAImaging-Structs.h>
#import <PAImaging/PAImageTile.h>
#import <PAImaging/PAMutableImageTile.h>

@class PABuffer, PAMutableBuffer, NSString;

@interface PA2DBufferBackingTile : NSObject <PAImageTile, PAMutableImageTile> {

	PABuffer* _buffer;
	PAMutableBuffer* _mutableBuffer;
	CGRect _tileRect;

}

@property (assign) CGRect tileRect;                                 //@synthesize tileRect=_tileRect - In the implementation block
@property (retain) PABuffer * buffer;                               //@synthesize buffer=_buffer - In the implementation block
@property (retain) PAMutableBuffer * mutableBuffer;                 //@synthesize mutableBuffer=_mutableBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)index;
-(PABuffer *)buffer;
-(CGRect)frame;
-(CGRect)bounds;
-(CGRect)tileRect;
-(void)setBuffer:(PABuffer *)arg1 ;
-(void)setTileRect:(CGRect)arg1 ;
-(char)readBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(char)writeBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(PAMutableBuffer *)mutableBuffer;
-(char)writeTextureRegion:(id)arg1 withContext:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)readTextureRegion:(id)arg1 withContext:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setMutableBuffer:(PAMutableBuffer *)arg1 ;
@end

