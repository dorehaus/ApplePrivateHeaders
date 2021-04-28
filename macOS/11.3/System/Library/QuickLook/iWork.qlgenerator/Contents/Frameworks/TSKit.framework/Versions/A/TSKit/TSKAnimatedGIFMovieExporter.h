/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSKit/TSKit-Structs.h>
@class TSPData;

@interface TSKAnimatedGIFMovieExporter : NSObject {

	TSPData* _data;
	char _compressesVideo;

}

@property (assign,nonatomic) char compressesVideo;              //@synthesize compressesVideo=_compressesVideo - In the implementation block
+(char)canInitWithDataType:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(char)compressesVideo;
-(opaqueCMSampleBufferRef)p_createCMSampleBufferFromImageInCGImageSource:(CGImageSourceRef)arg1 atIndex:(unsigned long long)arg2 withPresentationTime:(SCD_Struct_TS13)arg3 nextPresentationTime:(out SCD_Struct_TS13*)arg4 ;
-(void)p_finishWithSuccess:(char)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)exportToMovieFileURL:(id)arg1 fileType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCompressesVideo:(char)arg1 ;
@end

