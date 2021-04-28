/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSImagePropertiesExport.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;

@interface NUJSImageProperties : NUJSProxy <NUJSImagePropertiesExport>

@property (readonly) id<NUImageProperties> imageProperties; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSString * fileUTI; 
@property (readonly) NUJSDepthProperties * depthProperties; 
@property (readonly) NUJSRAWImageProperties * rawImageProperties; 
-(NSDictionary *)metadata;
-(id<NUImageProperties>)imageProperties;
-(NSString *)fileUTI;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(NUJSDepthProperties *)depthProperties;
-(NUJSRAWImageProperties *)rawImageProperties;
-(id)initWithImageProperties:(id)arg1 context:(id)arg2 ;
@end

