/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MTLBinaryArchiveSPI <MTLBinaryArchive>
@property (readonly) unsigned long long options; 
@property (readonly) NSArray * keys; 
@required
-(NSArray *)keys;
-(unsigned long long)options;
-(id)formattedDescription:(unsigned long long)arg1;
-(char)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(char)addComputePipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(char)addRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(char)addTileRenderPipelineFunctionsWithDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(void)addBinaryEntry:(id)arg1 forKey:(id)arg2;
-(id)getBinaryDataForKey:(id)arg1;

@end

