/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@class NURenderContext, NUColorSpace;

@interface NULivePhotoRenderRequest : NURenderRequest {

	NURenderContext* _stillBufferRenderContext;
	id<NUScalePolicy> _scalePolicy;
	NUColorSpace* _colorSpace;

}

@property (retain) id<NUScalePolicy> scalePolicy;                    //@synthesize scalePolicy=_scalePolicy - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id<NUScalePolicy>)scalePolicy;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)livePhotoRenderResultFromPhotoResponse:(id)arg1 videoResponse:(id)arg2 propertiesResponse:(id)arg3 error:(out id*)arg4 ;
@end

