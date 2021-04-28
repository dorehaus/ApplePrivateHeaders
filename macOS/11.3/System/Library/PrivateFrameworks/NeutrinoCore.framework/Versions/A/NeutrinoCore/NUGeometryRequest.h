/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@interface NUGeometryRequest : NURenderRequest {

	id<NUScalePolicy> _scalePolicy;

}

@property (retain) id<NUScalePolicy> scalePolicy;              //@synthesize scalePolicy=_scalePolicy - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(id)submitSynchronous:(out id*)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
@end
