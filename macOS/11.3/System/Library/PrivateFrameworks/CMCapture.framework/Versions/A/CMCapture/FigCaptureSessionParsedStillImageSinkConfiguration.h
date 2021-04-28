/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigVideoCaptureConnectionConfiguration, FigPointCloudDataCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject {

	FigVideoCaptureConnectionConfiguration* _stillImageConnectionConfiguration;
	FigVideoCaptureConnectionConfiguration* _movieFileVideoConnectionConfiguration;
	FigPointCloudDataCaptureConnectionConfiguration* _pointCloudDataConnectionConfiguration;

}

@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * stillImageConnectionConfiguration;                           //@synthesize stillImageConnectionConfiguration=_stillImageConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigVideoCaptureConnectionConfiguration * movieFileVideoConnectionConfiguration;                       //@synthesize movieFileVideoConnectionConfiguration=_movieFileVideoConnectionConfiguration - In the implementation block
@property (nonatomic,readonly) FigPointCloudDataCaptureConnectionConfiguration * pointCloudDataConnectionConfiguration;              //@synthesize pointCloudDataConnectionConfiguration=_pointCloudDataConnectionConfiguration - In the implementation block
-(void)dealloc;
-(FigVideoCaptureConnectionConfiguration *)stillImageConnectionConfiguration;
-(FigPointCloudDataCaptureConnectionConfiguration *)pointCloudDataConnectionConfiguration;
-(id)initWithStillImageConnectionConfiguration:(id)arg1 movieFileVideoConnectionConfiguration:(id)arg2 pointCloudDataConnectionConfiguration:(id)arg3 ;
-(FigVideoCaptureConnectionConfiguration *)movieFileVideoConnectionConfiguration;
@end

