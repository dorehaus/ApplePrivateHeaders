/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@class NSDictionary;

@interface EspressoANEIOSurface : NSObject {

	NSDictionary* params_dict;
	vector<Espresso::ANERuntimeEngine::surface_and_buffer, std::__1::allocator<Espresso::ANERuntimeEngine::surface_and_buffer>>* multiple_buffer_io_surfaces;
	BOOL created_with_lazy_iosurface;
	BOOL ane_surface_use_cvpixelbuffer;
	unsigned long long width;
	unsigned long long height;
	unsigned long long rowBytes;
	unsigned pixelFormat;
	shared_ptr<Espresso::blob<unsigned char, 1>>* _external_storage_blob_for_aliasing_mem;

}

@property (assign,nonatomic) shared_ptr<Espresso::blob<unsigned char external_storage_blob_for_aliasing_mem;              //@synthesize external_storage_blob_for_aliasing_mem=_external_storage_blob_for_aliasing_mem - In the implementation block
-(void)cleanup;
-(IOSurfaceRef)ioSurfaceForMultiBufferFrame:(unsigned long long)arg1 ;
-(id)initWithIOSurfaceProperties:(id)arg1 ;
-(char)checkIfMatches:(CVBufferRef)arg1 ;
-(char)checkIfMatchesIOSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)createIOSurfaceWithExtraProperties:(id)arg1 ;
-(void)doNonLazyAllocation:(id)arg1 ;
-(void)lazilyAutoCreateSurfaceForFrame:(unsigned long long)arg1 ;
-(id)ane_io_surfaceForMultiBufferFrame:(unsigned long long)arg1 ;
-(IOSurfaceRef)ioSurfaceForMultiBufferFrameNoLazyForTesting:(unsigned long long)arg1 ;
-(void)setExternalStorage:(unsigned long long)arg1 ioSurface:(IOSurfaceRef)arg2 ;
-(void)restoreInternalStorage:(unsigned long long)arg1 ;
-(void)restoreInternalStorageForAllMultiBufferFrames;
-(id)metalBufferWithDevice:(id)arg1 multiBufferFrame:(unsigned long long)arg2 ;
-(unsigned long long)nFrames;
-(shared_ptr<Espresso::blob<unsigned char)external_storage_blob_for_aliasing_mem;
-(void)setExternal_storage_blob_for_aliasing_mem:(shared_ptr<Espresso::blob<unsigned char)arg1 ;
-(void)resizeForMultipleAsyncBuffers:(unsigned long long)arg1 ;
@end
