/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigVideoCaptureConnectionConfiguration.h>

@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration {

	int _projectorMode;
	char _supplementalPointCloudData;

}

@property (assign,nonatomic) int projectorMode;                            //@synthesize projectorMode=_projectorMode - In the implementation block
@property (assign,nonatomic) char supplementalPointCloudData;              //@synthesize supplementalPointCloudData=_supplementalPointCloudData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(int)projectorMode;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(char)supplementalPointCloudData;
-(void)setProjectorMode:(int)arg1 ;
-(void)setSupplementalPointCloudData:(char)arg1 ;
@end

