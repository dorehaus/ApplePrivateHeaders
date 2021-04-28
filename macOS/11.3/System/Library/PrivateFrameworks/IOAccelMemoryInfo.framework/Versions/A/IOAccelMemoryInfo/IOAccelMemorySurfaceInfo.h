/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/Versions/A/IOAccelMemoryInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IOAccelMemorySurfaceInfo : NSObject {

	unsigned surfaceID;
	unsigned width;
	unsigned height;
	NSString* pixelFormat;
	NSString* surfaceBuffer;
	id _expansionData;

}

@property (assign) unsigned surfaceID; 
@property (assign) unsigned width; 
@property (assign) unsigned height; 
@property (retain) NSString * pixelFormat; 
@property (retain) NSString * surfaceBuffer; 
-(void)setSurfaceID:(unsigned)arg1 ;
-(NSString *)surfaceBuffer;
-(void)setSurfaceBuffer:(NSString *)arg1 ;
-(void)dealloc;
-(void)setPixelFormat:(NSString *)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(unsigned)width;
-(unsigned)height;
-(NSString *)pixelFormat;
-(unsigned)surfaceID;
@end
