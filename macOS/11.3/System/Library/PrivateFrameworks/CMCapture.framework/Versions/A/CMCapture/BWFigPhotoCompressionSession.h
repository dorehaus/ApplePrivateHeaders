/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWPhotoCompressionSession.h>

@class NSString;

@interface BWFigPhotoCompressionSession : NSObject <BWPhotoCompressionSession> {

	FigPhotoCompressionSessionRef _photoCompressionSession;
	long long _currentSettingsID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(int)addMetadata:(id)arg1 ;
-(char)isContainerOpen;
-(int)closeContainer;
-(int)openContainerWithOptions:(id)arg1 settingsID:(long long)arg2 ;
-(int)addMainImage:(CVBufferRef)arg1 metadata:(id)arg2 options:(id)arg3 ;
-(int)addThumbnailImage:(CVBufferRef)arg1 options:(id)arg2 ;
-(int)addCompressedThumbnailImage:(IOSurfaceRef)arg1 thumbnailImageSize:(unsigned long long)arg2 options:(id)arg3 ;
-(int)addAuxImage:(CVBufferRef)arg1 type:(int)arg2 auxImageMetadata:(CGImageMetadataRef)arg3 options:(id)arg4 ;
-(int)closeContainerAndCopySurfaceOut:(_IOSurface*)arg1 surfaceSizeOut:(unsigned long long*)arg2 ;
@end

