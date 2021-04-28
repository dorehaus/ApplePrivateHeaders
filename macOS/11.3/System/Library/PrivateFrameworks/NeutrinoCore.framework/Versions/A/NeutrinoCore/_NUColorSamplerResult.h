/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUColorSamplerResult.h>

@class NSString;

@interface _NUColorSamplerResult : _NURenderResult <NUColorSamplerResult> {

	CGColorRef _color;
	SCD_Struct_NU8 _point;

}

@property (assign) SCD_Struct_NU8 point;                             //@synthesize point=_point - In the implementation block
@property (nonatomic,retain) CGColorRef color;                       //@synthesize color=_color - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(SCD_Struct_NU8)point;
-(void)setPoint:(SCD_Struct_NU8)arg1 ;
@end

