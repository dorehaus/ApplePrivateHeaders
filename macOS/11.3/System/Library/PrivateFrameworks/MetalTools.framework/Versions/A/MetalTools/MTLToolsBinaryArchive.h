/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/Versions/A/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLBinaryArchiveSPI.h>

@class NSArray, NSString;

@interface MTLToolsBinaryArchive : MTLToolsObject <MTLBinaryArchiveSPI>

@property (readonly) unsigned long long options; 
@property (readonly) NSArray * keys; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)keys;
-(unsigned long long)options;
-(id<MTLDevice>)device;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(char)serializeToURL:(id)arg1 error:(id*)arg2 ;
-(char)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)addComputePipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(char)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)addRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(char)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(char)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)addBinaryEntry:(id)arg1 forKey:(id)arg2 ;
-(id)getBinaryDataForKey:(id)arg1 ;
@end

