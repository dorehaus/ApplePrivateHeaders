/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSRAWNoiseReductionImagePropertiesExport.h>

@interface NUJSRAWNoiseReductionProperties : NUJSProxy <NUJSRAWNoiseReductionImagePropertiesExport>

@property (readonly) id<NURAWNoiseReductionProperties> rawNoiseReductionProperties; 
@property (readonly) double luminance; 
@property (readonly) double color; 
-(double)color;
-(double)luminance;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithRAWNoiseReductionProperties:(id)arg1 context:(id)arg2 ;
-(id<NURAWNoiseReductionProperties>)rawNoiseReductionProperties;
@end
