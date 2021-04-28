/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoExportJob : NUExportJob {

	SCD_Struct_NU7 _livePhotoKeyFrameTime;

}
-(char)render:(out id*)arg1 ;
-(id)renderer:(out id*)arg1 ;
-(char)prepare:(out id*)arg1 ;
-(char)requiresVideoComposition;
-(char)wantsOutputGeometry;
-(id)scalePolicy;
-(id)initWithVideoExportRequest:(id)arg1 ;
-(id)initWithExportRequest:(id)arg1 ;
-(id)videoExportRequest;
-(char)wantsOutputVideo;
-(id)generateVideoComposition:(out id*)arg1 ;
-(char)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(SCD_Struct_NU7)arg3 createCustomMetadata:(char)arg4 geometryTransform:(id)arg5 inputSize:(CGSize)arg6 outputSize:(CGSize)arg7 error:(out id*)arg8 ;
@end

