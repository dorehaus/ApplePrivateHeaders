/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransformAffine.h>

@interface NUImageTransformScale : NUImageTransformAffine {

	SCD_Struct_NU8 _scale;

}

@property (readonly) SCD_Struct_NU8 scale;              //@synthesize scale=_scale - In the implementation block
-(SCD_Struct_NU8)scale;
-(id)initWithScale:(SCD_Struct_NU8)arg1 ;
-(id)inverseTransform;
-(char)isIdentityImageTransform;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
@end
