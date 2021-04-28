/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLDepthStencilStateSPI.h>

@class NSString;

@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>

@property (readonly) char readsDepth; 
@property (readonly) char writesDepth; 
@property (readonly) char readsStencil; 
@property (readonly) char writesStencil; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLDevice>)device;
-(NSString *)label;
-(char)readsDepth;
-(char)writesDepth;
-(char)readsStencil;
-(char)writesStencil;
@end

